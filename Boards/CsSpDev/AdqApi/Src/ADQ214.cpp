// Project: ADQ-API
// File: ADQ214.cpp
//
// latest revision: 2008-10-27
// by Peter Johansson

#include "ADQ214.h"
#include "ADQAPI_definitions.h"
#include <math.h>
#include <windows.h>

ADQ214::ADQ214()
  :	m_data_buffer_chA(NULL),
	m_data_buffer_chB(NULL)
{
}

int ADQ214::Open(HWIF* device)
{
	int success;
	int* rev;
	
    parameter_pll_basefreq = ADQ214_DEFAULT_PLL_FREQUENCY;
    parameter_pll_vcoset = ADQ214_DEFAULT_PLL_VCOSET; 
    parameter_interleaved_leaves = 1;

    m_Device = device;
	m_temp_data_buffer = NULL;
	m_temp_data_buffer_ptr = NULL;
	m_dram_phys_start_address128b = DRAM_PHYS_START_ADDRESS;
	m_dram_phys_end_address128b = DRAM_PHYS_END_ADDRESS;

    m_trig_edge = RISING_EDGE;
	m_status = 0;
	m_page_count = 0;
	m_CacheWord128bStart = ~0u;//no data in buffer
	m_CacheWord128bEnd = 0u;//no data in buffer
	m_trig_point = 0;
	m_overflow = 0;
	m_trigged_ch = 0;
	m_revision = new int[6];
	m_serial = new char[16];
	m_MultiRecordMode = 0;
	m_data_buffer_chA = new int[MAX_DMA_TRANSFER]; //Oversize to be safe by assuming samples are 8-bit
	m_data_buffer_chB = new int[MAX_DMA_TRANSFER];
	m_MultiRecordHeader = new unsigned int[8];
	m_TrigTimeMode = 0;
    m_max_samples_to_parse = 0;
	// Check if new type of version numbering
	if (m_Device->HwVersion() < 5)
		success = 0;
	else
		success = 1;
	
	rev = GetRevision();
	m_BcdDevice = rev[0];
    m_rev_fpga1 = rev[3];

	//Try to set up card with default values
    SetCacheSize(DEFAULT_CACHE_SIZE_IN_128B_WORDS*16); // 16 is due to byte/128bit relation
    SetTrigLevelResetValue(ADQ214_DEFAULT_LEVEL_TRIGGER_RESET);
    success = success && SetDataFormat(0);
	success = success && SetLvlTrigLevel(DEF_TRIG_LVL);
	success = success && SetLvlTrigEdge(DEF_TRIG_EDGE);
	success = success && SetLvlTrigChannel(DEF_TRIG_CH);
	success = success && SetClockSource(DEF_CLOCK_SOURCE);
	success = success && SetPllFreqDivider(DEF_FREQ_DIV); // Backwards compatible
	//success = success && SetPll(DEF_FREQ_N_DIV_214, DEF_FREQ_R_DIV, DEF_FREQ_VCO_DIV, DEF_FREQ_CH_DIV);
	success = success && SetTriggerMode(DEF_TRIG_MODE);
	success = success && SetPreTrigWords(0);
	success = success && SetTriggerHoldOffSamples(0);
	success = success && SetWordsPerPage(DEF_WORDS_PER_PAGE_214); //Default for ADQ214 0902_B
	success = success && SetBufferSize(DEF_BUFF_SIZE_SAMPLES);
   	success = success && SetStreamStatus(0);
	if (success) SetSampleSkip(1); // Write default value to HW, ignore errors
	if (success) SetSampleDecimation(0); // Write default value to HW, ignore errors
    
    // Set Trigger Delay circuit to synch external trigger and data stream
    // Note: Other content in FPGA #1 will require other setting of this.
    //       Allowed is 0-31 (counted in the clk domain)
    success = success && WriteRegister(TRIGGER_DELAY_ADDR, 0x0, ADQ214_DEFAULT_TRIGGER_DELAY);

	m_mr_backup_dram_phys_end_address128b = m_dram_phys_end_address128b;
   	success = success && MultiRecordClose();

    // Get Serial number string from board
	if (success)
	{
		RetrieveBoardSerialNumber();
	}
    
    if (success)
    {
        m_IsStartedOK = 1;
    }
    else
    {
        m_IsStartedOK = 0;
    }
	
    return success;
}

ADQ214::~ADQ214()
{
	if (m_data_buffer_chA != NULL)
		delete[] m_data_buffer_chA;
	
	if (m_data_buffer_chB != NULL)
		delete[] m_data_buffer_chB;
}

int ADQ214::GetADQType(void)
{
    return (int)214;
}

int ADQ214::GetTriggedCh()
{
    return m_trigged_ch;
}

unsigned int ADQ214::SetSampleSkip(unsigned int SkipFactor)
{
    unsigned int success = 0;
    unsigned int SetVar = 0;

    // 0 = all samples
    // 1 = everyother sample
    // 2 = every 4th sample
    // 3 = every 6th sample
    // to 65535 = every 2^17 sample
    if (m_rev_fpga1 >= REV_FCN_FPGA1_SET_SAMPLE_SKIP)
    {
        if (    (SkipFactor == 1) 
            || ((SkipFactor % 2) == 0)
            && (SkipFactor <= 65535*2))
        {
            if (SkipFactor == 1)
            {
                SetVar = 0;
            }
            else if (SkipFactor > 1)
            {
                SetVar = (SkipFactor >> 1);        
            }
            success = WriteAlgoRegister(ALGO_SAMPLE_SKIP_ADDR, 0, SetVar);
            if (success)
            {
                m_SampleSkip = SkipFactor;
            }
        }
        else
        {
            success = 0;
        }
    }

    return success;
}

unsigned int ADQ214::SetSampleDecimation(unsigned int DecimationFactor)
{
    unsigned int success = 0;
    unsigned int SetVar;

    // 0 = all samples
    // 1 = everyother sample
    // 2 = every 4th sample
    // 3 = every 6th sample
    // to 65535 = every 2^17 sample
    if (m_rev_fpga1 >= REV_FCN_FPGA1_SET_SAMPLE_DECIMATION)
    {
        if ((DecimationFactor >= 0) && (DecimationFactor <= 34))
        {
			switch(DecimationFactor)
			{
			case 0:
				SetVar = 0;
				break;
			case 1:
				SetVar = DEC_EN | DEC_DEBUG_2;
				break;
			case 2:
				SetVar = DEC_EN | DEC_DEBUG_4;
				break;
			default:
				SetVar = DEC_EN | (DecimationFactor-3);
				break;
			}

            success = WriteAlgoRegister(ALGO_SAMPLE_DECIMATION_ADDR, 0, SetVar);
            if (success)
            {
                m_SampleSkip = 1uLL << DecimationFactor;
            }
        }
        else
        {
            success = 0;
        }
    }

    return success;
}

unsigned int ADQ214::GetSampleSkip(void)
{
    unsigned int value;
    unsigned int SkipFactor = 0;

    value = ReadAlgoRegister(ALGO_SAMPLE_SKIP_ADDR);

    if (value == 0)
    {
        SkipFactor = 1;
    }
    else
    {
        SkipFactor = (value << 1);
    }

    return SkipFactor;
}

unsigned int ADQ214::GetSampleDecimation(void)
{
    unsigned int value;
    unsigned int DecimationFactor = 0;

    value = ReadAlgoRegister(ALGO_SAMPLE_DECIMATION_ADDR);

	if (value > DEC_EN)
	{
		if (value == (DEC_EN | DEC_DEBUG_2))
			DecimationFactor = 1;
		else if (value == (DEC_EN | DEC_DEBUG_4))
			DecimationFactor = 2;
		else
			DecimationFactor = (value & 0x1F) + 3;
	}

    return DecimationFactor;
}

void* ADQ214::GetPtrData(unsigned int channel)
{
    void* rtnptr = NULL;

    switch(channel)
    {
    case 1:
        rtnptr = (void*)m_data_buffer_chA;
        break;
    case 2:
        rtnptr = (void*)m_data_buffer_chB;
        break;
    default:
        m_last_error = ERROR_CODE_CHANNEL_NOT_AVAILABLE_ON_DEVICE;
        break;
    }

    return rtnptr;
}

int* ADQ214::GetPtrDataChA(void)            
{
    return m_data_buffer_chA;
};

int* ADQ214::GetPtrDataChB(void)            
{
    return m_data_buffer_chB;
};

int ADQ214::SetLvlTrigChannel(int channel)
{
	int success = 0;
	if ((channel == NO_CH) || (channel == CH_A) || (channel == CH_B) || (channel == ANY_CH))
	{
		success = WriteRegister(TRIG_SETUP_ADDR,~(LEVELTRIG_CHA_EN_BIT | LEVELTRIG_CHB_EN_BIT),channel<<LEVELTRIG_CHA_EN_POS);
		m_trig_channel = channel;
	}
	return success;
}

int ADQ214::GetLvlTrigChannel()
{
	return m_trig_channel;
}

int ADQ214::ParseSampleData(
                            unsigned int wordNbOffset, 
                            unsigned int sampleOffset, 
                            unsigned int destOffset, 
                            unsigned int maxSamples
                            )
{
	unsigned int temp_A = 0;
	unsigned int temp_B = 0;
	int sampleOffsetStore = m_WordNbBits/m_SamplesPerWordNb; //Storage size for sample
	unsigned int bitOffset = wordNbOffset*m_WordNbBits +        //bit address to first sample (considering only one channel's data)
							 sampleOffset*sampleOffsetStore;
	unsigned int word128Offset = (bitOffset / 64) * 8 * 2;     //byte address to first 128 bit word
	unsigned int wordNOffset = (bitOffset % 64) / 8;       //byte address to first m_WordNbBits bit word relative 64 bit word
	unsigned int parsedSamples = wordNbOffset * m_SamplesPerWordNb + sampleOffset; //Count how many samples have been consumed in page
	bitOffset = bitOffset % 8;                             //bit address relative first byte
  
	//Start parsing samples from first sample position
	int consumedBits = 0;
	unsigned int sampleMask = (1ull<<m_SampleWidth)-1;
	unsigned int sampleMax = sampleMask >> 1;
	unsigned int sampleMin = 1<<(m_SampleWidth-1);
	unsigned int j = wordNOffset;

    int signextend_shift_factor = (m_target_bytes_per_sample << 3) - m_SampleWidth; 

	for (unsigned int i=word128Offset; i<m_Words128bPerPage*16; i+=16)
	{
		while (j<8)
		{
			temp_A |= ((((unsigned int)m_temp_data_buffer_ptr[i+j  ])>>bitOffset) & (sampleMask >> consumedBits)) << consumedBits;
			temp_B |= ((((unsigned int)m_temp_data_buffer_ptr[i+j+8])>>bitOffset) & (sampleMask >> consumedBits)) << consumedBits;
			consumedBits += (8-bitOffset);

			if (consumedBits >= sampleOffsetStore)
			{
				bitOffset = 8-(consumedBits-sampleOffsetStore);
				consumedBits = 0;
				if (bitOffset == 8)
				{
					bitOffset = 0;
					j++;
				}

				if ((temp_A == sampleMax) || (temp_A == sampleMin) ||
					(temp_B == sampleMax) || (temp_B == sampleMin))
				{
					m_overflow = 1;
				}
				 //Sign extend (m_WordNbBits/m_SamplesPerWordNb) bit data (in 32 bit CPU)
                if (m_channels_mask & 0x1)
                {
                    switch(m_target_bytes_per_sample)
                    {
                    case 2:
                        *(m_pData_int16[0]+destOffset) = (short int)(temp_A << signextend_shift_factor) >> signextend_shift_factor;
                        break;
                    case 4:
                        *(m_pData_int[0]+destOffset) = (int)(temp_A << signextend_shift_factor) >> signextend_shift_factor;
                        break;
                    }
                }

                if (m_channels_mask & 0x2)
                {
                    switch(m_target_bytes_per_sample)
                    {
                    case 2:
                        *(m_pData_int16[1]+destOffset) = (short int)(temp_B << signextend_shift_factor) >> signextend_shift_factor;
                        break;
                    case 4:
                        *(m_pData_int[1]+destOffset) = (int)(temp_B << signextend_shift_factor) >> signextend_shift_factor;
                        break;
                    }
                }

                //m_data_buffer_chA[destOffset] = (int)(temp_A << -m_SampleWidth) >> -m_SampleWidth;
				//m_data_buffer_chB[destOffset] = (int)(temp_B << -m_SampleWidth) >> -m_SampleWidth;

				if (++destOffset >= maxSamples)
				{
					return destOffset;
				}
				if (++parsedSamples >= m_WordsNbPerPage*m_SamplesPerWordNb)
				{
					return destOffset;
				}
				temp_A = 0;
				temp_B = 0;
			}
			else
			{
				bitOffset = 0;
				j++;
			}
		}
		j = 0; //only skip samples (in the 64bit words) in the first iteration
	}
	// Returning from here should never happen
	return destOffset;
}

int ADQ214::SetDataFormat(unsigned int format)
{
	int success;

	success = WriteAlgoRegister(ALGO_DATA_FORMAT_ADDR, 0, format);
	m_DataFormat = format;

	switch(format)
	{
	case 0: //Packed N-bit data
		success = success && SetNofBits(N_WORDBITS_ADQ214); //Default for ADQ214 R0910
		success = success && SetSampleWidth(N_BITS_ADQ214); //Default for ADQ214 R0910
		break;
	case 1: //Unpacked N-bit data
		success = success && SetNofBits(32); //Default for ADQ214 R0910
		success = success && SetSampleWidth(N_BITS_ADQ214); //Default for ADQ214 R0910
		break;
	case 2: //16-bit data
		success = success && SetNofBits(32);
		success = success && SetSampleWidth(16);
		break;
	case 3: //32-bit data
		success = success && SetNofBits(32);
		success = success && SetSampleWidth(32);
		break;
	default:
		success = 0;
	}
	// Re-configure wordsPerPage
	if (success && !SetWordsPerPage(m_WordsNbPerPage))
				success = SetWordsPerPage(DEF_WORDS_PER_PAGE_214);
	return success;
}


int ADQ214::SetAfeSwitch(unsigned int afe)
{
	// Set AFE relays and PDWN signals to amplifiers 
	//  afe = 0 => AC AFE both channels
	//  afe = F => DC AFE both channels
	//  afe = 3 => DC AFE ch 1, AC AFE ch 2
	//  afe = C => AC AFE ch 1, DC AFE ch 2
	int success = (int)WriteAlgoRegister(ALGO_AFE_CTRL_ADDR, 0, afe);
	return success;
}