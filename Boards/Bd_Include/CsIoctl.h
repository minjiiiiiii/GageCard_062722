// CsIoctl.h
//
// Define Io control codes for drivers
//

#ifndef __CsIoctl__h_
#define __Cs1octl__h_

#ifdef _WINDOWS_

#define GAGE_DEVICE_BASE         FILE_DEVICE_UNKNOWN

#define GAGE_IOCTL(_Function) \
    CTL_CODE (GAGE_DEVICE_BASE, _Function, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define GAGE_IOCTL_EX(_Function, _Method, _Access)  \
   CTL_CODE(GAGE_DEVICE_BASE, _Function, _Method, _Access)

#define IOCTL_BUSENUM_PLUGIN_HARDWARE BUSENUM_IOCTL (0x0)
#define IOCTL_BUSENUM_UNPLUG_HARDWARE BUSENUM_IOCTL (0x1)
#define IOCTL_BUSENUM_EJECT_HARDWARE  BUSENUM_IOCTL (0x2)

#define CS_IOCTL_GET_NUM_OF_DEVICES             GAGE_IOCTL ( 0x800 )
#define CS_IOCTL_GET_DEVICE_INFO                GAGE_IOCTL ( 0x801 )
#define CS_IOCTL_WRITE_PCI_REGISTER             GAGE_IOCTL ( 0x802 )
#define CS_IOCTL_READ_PCI_REGISTER              GAGE_IOCTL ( 0x803 )
#define CS_IOCTL_WRITE_GAGE_REGISTER            GAGE_IOCTL ( 0x804 )
#define CS_IOCTL_READ_GAGE_REGISTER             GAGE_IOCTL ( 0x805 )
#define CS_IOCTL_WRITE_FLASH_REGISTER           GAGE_IOCTL ( 0x806 )
#define CS_IOCTL_READ_FLASH_REGISTER            GAGE_IOCTL ( 0x807 )
#define CS_IOCTL_WRITE_NIOS_REGISTER            GAGE_IOCTL ( 0x808 )
#define CS_IOCTL_READ_NIOS_REGISTER             GAGE_IOCTL ( 0x809 )
#define CS_IOCTL_READ_PCI_CONFIG_SPACE          GAGE_IOCTL ( 0x80A )
#define CS_IOCTL_WRITE_PCI_CONFIG_SPACE         GAGE_IOCTL ( 0x80B )
#define CS_IOCTL_START_ACQUISITION              GAGE_IOCTL ( 0x80C )
#define CS_IOCTL_REGISTER_EVENT_HANDLE          GAGE_IOCTL ( 0x80D )
#define CS_IOCTL_SET_ACQCONFIG                  GAGE_IOCTL ( 0x80E )
#define CS_IOCTL_MASTERSLAVE_LINK               GAGE_IOCTL ( 0x80F )
#define CS_IOCTL_SET_TRIGGERMASTER              GAGE_IOCTL ( 0x810 )
#define CS_IOCTL_PRE_DATATRANSFER               GAGE_IOCTL ( 0x811 )
#define CS_IOCTL_MASTERSLAVE_CALIBINFO          GAGE_IOCTL ( 0x812 )
#define CS_IOCTL_WRITE_GIO                      GAGE_IOCTL ( 0x813 )
#define CS_IOCTL_READ_GIO                       GAGE_IOCTL ( 0x814 )
#define CS_IOCTL_WRITEBYTE_TOFLASH              GAGE_IOCTL ( 0x815 )
#define CS_IOCTL_READBYTE_FROMFLASH             GAGE_IOCTL ( 0x816 )
#define CS_IOCTL_RESET_FLASH                    GAGE_IOCTL ( 0x817 )
#define CS_IOCTL_ADDON_WRITEBYTE_TOFLASH        GAGE_IOCTL ( 0x818 )
#define CS_IOCTL_ADDON_READBYTE_FROMFLASH       GAGE_IOCTL ( 0x819 )
#define CS_IOCTL_ADDON_RESET_FLASH              GAGE_IOCTL ( 0x81A )
#define CS_IOCTL_GET_ASYNC_DATA_TRANSFER_RESULT GAGE_IOCTL ( 0x81B )
#define CS_IOCTL_WRITE_NIOS_REGISTER_EX         GAGE_IOCTL ( 0x81C )
#define CS_IOCTL_PROGRAM_ADDON_FPGA             GAGE_IOCTL_EX( 0x81D, METHOD_IN_DIRECT, FILE_ANY_ACCESS )
#define CS_IOCTL_PRE_DATATRANSFER_EX            GAGE_IOCTL ( 0x81E )
#define CS_IOCTL_SET_CARDSTATE                  GAGE_IOCTL ( 0x81F )
#define CS_IOCTL_GET_CARDSTATE                  GAGE_IOCTL ( 0x820 )
#define CS_IOCTL_FLASH_WRITE                    GAGE_IOCTL ( 0x821 )
#define CS_IOCTL_FLASH_READ                     GAGE_IOCTL ( 0x822 )
#define CS_IOCTL_SEND_FLASH_CMD                 GAGE_IOCTL ( 0x823 )
#define CS_IOCTL_ADDON_FLASH_WRITE              GAGE_IOCTL ( 0x824 )
#define CS_IOCTL_ADDON_FLASH_READ               GAGE_IOCTL ( 0x825 )
#define CS_IOCTL_ABORT_TRANSFER                 GAGE_IOCTL ( 0x826 )
#define CS_IOCTL_READ_PCIeLINK_INFO             GAGE_IOCTL ( 0x827)
#define CS_IOCTL_WRITE_GIO_CPLD                 GAGE_IOCTL ( 0x82F )
#define CS_IOCTL_READ_GIO_CPLD                  GAGE_IOCTL ( 0x830 )
#define CS_IOCTL_WRITE_PORT_IO                  GAGE_IOCTL ( 0x831 )
#define CS_IOCTL_READ_PORT_IO                   GAGE_IOCTL ( 0x832 )
#define CS_IOCTL_ALLOCATE_STM_DMA_BUFFER        GAGE_IOCTL ( 0x833 )
#define CS_IOCTL_FREE_STM_DMA_BUFFER            GAGE_IOCTL ( 0x834 )
#define CS_IOCTL_START_STM_DMA_BUFFER           GAGE_IOCTL ( 0x835 )
#define CS_IOCTL_SET_STREAM_MODE                GAGE_IOCTL ( 0x836 )
#define CS_IOCTL_WAIT_STREAM_DMA_DONE           GAGE_IOCTL ( 0x837 )
#define CS_IOCTL_GET_CARDSTATE_PTR              GAGE_IOCTL ( 0x838 )
#define CS_IOCTL_READ_CPLD_REG						GAGE_IOCTL( 0x839 )
#define CS_IOCTL_WRITE_CPLD_REG						GAGE_IOCTL( 0x83A )
#define CS_IOCTL_GET_KERNEL_MISC_STATE				GAGE_IOCTL( 0x840 )
#define CS_IOCTL_SET_KERNEL_MISC_STATE				GAGE_IOCTL( 0x841 )
#define CS_IOCTL_DEBUG_READ                     GAGE_IOCTL ( 0x850 )
#define CS_IOCTL_FLASH_OP_READ						GAGE_IOCTL( 0x851 )
#define CS_IOCTL_FLASH_OP_WRITE						GAGE_IOCTL( 0x852 )
#define CS_IOCTL_FLASH_PROG_BUFFER					GAGE_IOCTL( 0x853 )

#endif


#ifdef __linux__

#include "CsTypes.h"
#include "CsIoctlTypes.h"
#include "CsCardState.h"

#define GAGE_IOCTL_MAGIC 'G'

#define CS_IOCTL_GET_NUM_OF_DEVICES             _IOWR (GAGE_IOCTL_MAGIC, 0x00, CS_CARD_COUNT*)
#define CS_IOCTL_GET_DEVICE_INFO                _IOR  (GAGE_IOCTL_MAGIC, 0x01, PCSDEVICE_INFO)
#define CS_IOCTL_WRITE_PCI_REGISTER             _IOWR (GAGE_IOCTL_MAGIC, 0x02, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_READ_PCI_REGISTER              _IOWR (GAGE_IOCTL_MAGIC, 0x03, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_WRITE_GAGE_REGISTER            _IOWR (GAGE_IOCTL_MAGIC, 0x04, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_READ_GAGE_REGISTER             _IOWR (GAGE_IOCTL_MAGIC, 0x05, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_WRITE_FLASH_REGISTER           _IOWR (GAGE_IOCTL_MAGIC, 0x06, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_READ_FLASH_REGISTER            _IOWR (GAGE_IOCTL_MAGIC, 0x07, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_WRITE_NIOS_REGISTER            _IOWR (GAGE_IOCTL_MAGIC, 0x08, io_READWRITE_NIOS_REGISTER)
#define CS_IOCTL_READ_NIOS_REGISTER             _IOWR (GAGE_IOCTL_MAGIC, 0x09, io_READWRITE_NIOS_REGISTER)
#define CS_IOCTL_READ_PCI_CONFIG_SPACE          _IOWR (GAGE_IOCTL_MAGIC, 0x0A, io_READWRITE_PCI_CONFIG)
#define CS_IOCTL_WRITE_PCI_CONFIG_SPACE         _IOWR (GAGE_IOCTL_MAGIC, 0x0B, io_READWRITE_PCI_CONFIG)
#define CS_IOCTL_START_ACQUISITION              _IOW  (GAGE_IOCTL_MAGIC, 0x0C, in_STARTACQUISITION_PARAMS)
#define CS_IOCTL_REGISTER_EVENT_HANDLE          _IO   (GAGE_IOCTL_MAGIC, 0x0D)
#define CS_IOCTL_SET_ACQCONFIG                  _IOW  (GAGE_IOCTL_MAGIC, 0x0E, CSACQUISITIONCONFIG_EX)
#define CS_IOCTL_MASTERSLAVE_LINK               _IOWR (GAGE_IOCTL_MAGIC, 0x0F, MS_LINK_INFO)
#define CS_IOCTL_SET_TRIGGERMASTER              _IOw  (GAGE_IOCTL_MAGIC, 0x10)
#define CS_IOCTL_PRE_DATATRANSFER               _IOWR (GAGE_IOCTL_MAGIC, 0x11, io_PREPARE_DATATRANSFER)
#define CS_IOCTL_MASTERSLAVE_CALIBINFO          _IOWR (GAGE_IOCTL_MAGIC, 0x12, MS_CALIB_INFO)
#define CS_IOCTL_WRITE_GIO                      _IOWR (GAGE_IOCTL_MAGIC, 0x13, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_READ_GIO                       _IOWR (GAGE_IOCTL_MAGIC, 0x14, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_WRITEBYTE_TOFLASH              _IOWR (GAGE_IOCTL_MAGIC, 0x15, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_READBYTE_FROMFLASH             _IOWR (GAGE_IOCTL_MAGIC, 0x16, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_RESET_FLASH                    _IOW  (GAGE_IOCTL_MAGIC, 0x17 )
#define CS_IOCTL_ADDON_WRITEBYTE_TOFLASH        _IOWR (GAGE_IOCTL_MAGIC, 0x18, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_ADDON_READBYTE_FROMFLASH       _IOWR (GAGE_IOCTL_MAGIC, 0x19, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_ADDON_RESET_FLASH              _IOW  (GAGE_IOCTL_MAGIC, 0x1A )
#define CS_IOCTL_GET_ASYNC_DATA_TRANSFER_RESULT _IOW  (GAGE_IOCTL_MAGIC, 0x1B )
#define CS_IOCTL_WRITE_NIOS_REGISTER_EX         _IOWR (GAGE_IOCTL_MAGIC, 0x1C, io_READWRITE_NIOS_REGISTER)
#define CS_IOCTL_PROGRAM_ADDON_FPGA             _IOWR (GAGE_IOCTL_MAGIC, 0x1D, ADDON_FPGA_DESC )
#define CS_IOCTL_PRE_DATATRANSFER_EX            _IOWR (GAGE_IOCTL_MAGIC, 0x1E, io_PREPARE_DATATRANSFER_EX)
#define CS_IOCTL_SET_CARDSTATE                  _IOW  (GAGE_IOCTL_MAGIC, 0x1F, PCSCARD_STATE)
#define CS_IOCTL_GET_CARDSTATE                  _IOR  (GAGE_IOCTL_MAGIC, 0x20, PCSCARD_STATE)
#define CS_IOCTL_FLASH_WRITE                    _IOW  (GAGE_IOCTL_MAGIC, 0x21, PWRITE_FLASH_STRUCT)
#define CS_IOCTL_FLASH_READ                     _IOR  (GAGE_IOCTL_MAGIC, 0x22, PREAD_FLASH_STRUCT)
#define CS_IOCTL_ABORT_TRANSFER                 _IO   (GAGE_IOCTL_MAGIC, 0x23)
#define CS_IOCTL_WRITE_GIO_CPLD                 _IOW  (GAGE_IOCTL_MAGIC, 0x24, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_READ_GIO_CPLD                  _IOR  (GAGE_IOCTL_MAGIC, 0x25, Pio_READWRITE_PCI_REG)
#define CS_IOCTL_ADDON_FLASH_WRITE              _IOW  (GAGE_IOCTL_MAGIC, 0x26, PWRITE_FLASH_STRUCT)
#define CS_IOCTL_ADDON_FLASH_READ               _IOR  (GAGE_IOCTL_MAGIC, 0x27, PREAD_FLASH_STRUCT)
#define CS_IOCTL_WRITE_PORT_IO                  _IOW  (GAGE_IOCTL_MAGIC, 0x28, Pio_READWRITE_PCI_REG)

#define CS_IOCTL_ALLOCATE_STM_DMA_BUFFER        _IOWR (GAGE_IOCTL_MAGIC, 0x29, ALLOCATE_DMA_BUFFER)
#define CS_IOCTL_FREE_STM_DMA_BUFFER            _IOW  (GAGE_IOCTL_MAGIC, 0x2A, FREE_DMA_BUFFER)
#define CS_IOCTL_START_STM_DMA_BUFFER           _IOW  (GAGE_IOCTL_MAGIC, 0x2B, TRANSFER_DMA_BUFFER)
#define CS_IOCTL_SET_STREAM_MODE                _IOW  (GAGE_IOCTL_MAGIC, 0x2C, SET_STREAM_MODE)
#define CS_IOCTL_WAIT_STREAM_DMA_DONE           _IOW  (GAGE_IOCTL_MAGIC, 0x2D, WAIT_STREAM_DMA_DONE)
#define CS_IOCTL_STM_DMA_BUFFER_SIZE            _IOR  (GAGE_IOCTL_MAGIC, 0x2E, FREE_DMA_BUFFER)

#define CS_IOCTL_READ_CPLD_REG						_IOR  (GAGE_IOCTL_MAGIC, 0x79, Pio_READWRITE_CPLD_REG)
#define CS_IOCTL_WRITE_CPLD_REG						_IOW  (GAGE_IOCTL_MAGIC, 0x7A, Pio_READWRITE_CPLD_REG)

#define CS_IOCTL_MAP_CARDSTATE_BUFFER           _IOWR (GAGE_IOCTL_MAGIC, 0x7D, MAP_CARDSTATE_BUFFER)
#define CS_IOCTL_GET_CARDSTATE_PTR              _IOW  (GAGE_IOCTL_MAGIC, 0x7E, void *)

#define CS_IOCTL_GET_KERNEL_MISC_STATE				_IOWR (GAGE_IOCTL_MAGIC, 0x80, P_io_KERNEL_MISC_STATE)
#define CS_IOCTL_SET_KERNEL_MISC_STATE				_IOWR (GAGE_IOCTL_MAGIC, 0x81, P_io_KERNEL_MISC_STATE)

// For Debug Prf pourpose
#define CS_DEBUG_DUMMY_IOCTL                    _IOWR (GAGE_IOCTL_MAGIC, 0x50, void *)
#define CS_DEBUG_DUMMY_IOCTL_WITH_COPY_MEM      _IOWR (GAGE_IOCTL_MAGIC, 0x51, void *)
#define CS_DEBUG_DMA_BUFFERLOCK                 _IOWR (GAGE_IOCTL_MAGIC, 0x52, Pio_DEBUG_DMA_LOCK_BUFFER)

#endif

#endif  // __CsIoctl__h_
