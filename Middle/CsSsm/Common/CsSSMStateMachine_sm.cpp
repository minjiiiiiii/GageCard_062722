
//
// The contents of this file are subject to the Mozilla Public
// License Version 1.1 (the "License"); you may not use this file
// except in compliance with the License. You may obtain a copy of
// the License at http://www.mozilla.org/MPL/
//
// Software distributed under the License is distributed on an "AS
// IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
// implied. See the License for the specific language governing
// rights and limitations under the License.
//
// The Original Code is State Machine Compiler (SMC).
//
// The Initial Developer of the Original Code is Charles W. Rapp.
// Portions created by Charles W. Rapp are
// Copyright (C) 2000 Charles W. Rapp.
// All Rights Reserved.
//
// Contributor(s):
//
// State Map
//	Combine machine: Driver state machine to represent
//	hardware status.
//

#ifdef WIN32
#pragma warning(disable: 4355)
#pragma warning(disable: 4541)
#endif

/*
This typedef is based on the state defined below. 
The order in which the state is important since the ID attahced to them is
based on the order except for the Default state. 
Hence, in this case, the forst state is Init.
Any modification to the state should modify the typedef in the .h file.

typedef enum STATE_ID
{
  SSM_Init_ID = 0,
  SSM_ValidConfiguration_ID,
  SSM_InvalidConfiguration_ID,
  SSM_Arming_ID,	
  SSM_Ready_ID,				
  SSM_Wait_ID,					
  SSM_Busy_ID,					
  SSM_DataReady_ID,
  SSM_ValidMode_ID,
  SSM_InvalidMode_ID,
  SSM_MemoryAccess_ID,
  SSM_ArmingDataReady_ID,
  SSM_DiskStream_ID
  };
*/			


#include "CsSsmStateMachine.h"
#include "CsSSMStateMachine_sm.h"

using namespace statemap;
using namespace std;

// Static class declarations.
SSM_Init    SSM::Init("SSM::Init", 0);
SSM_ValidConfiguration    SSM::ValidConfiguration("SSM::ValidConfiguration", 1);
SSM_InvalidConfiguration    SSM::InvalidConfiguration("SSM::InvalidConfiguration", 2);
SSM_Arming    SSM::Arming("SSM::Arming", 3);
SSM_Ready    SSM::Ready("SSM::Ready", 4);
SSM_Wait    SSM::Wait("SSM::Wait", 5);
SSM_Busy    SSM::Busy("SSM::Busy", 6);
SSM_DataReady    SSM::DataReady("SSM::DataReady", 7);
SSM_ValidMode    SSM::ValidMode("SSM::ValidMode", 8);
SSM_InvalidMode    SSM::InvalidMode("SSM::InvalidMode", 9);
SSM_MemoryAccess    SSM::MemoryAccess("SSM::MemoryAccess", 10);
SSM_ArmingDataReady    SSM::ArmingDataReady("SSM::ArmingDataReady", 11);
SSM_DiskStream    SSM::DiskStream("SSM::DiskStream", 12);

void CStateMachineState::abort(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::bad_modify(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::calibrate(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::coerce(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::commit(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::done(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::force_Trigger(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::hw_event(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::init(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::invalid(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::modify(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::read(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::reset(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::start(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::start_stream(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::transfer(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::valid(CStateMachineContext& context)
{
    Default(context);
    return;
}

void CStateMachineState::Default(CStateMachineContext& context)
{
    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : Default"
            << endl;
    }

    throw (
        TransitionUndefinedException(
            context.getState().getName(),
            context.getTransition()));

    return;
}

void SSM_Default::reset(CStateMachineContext& context)
{
    bool loopbackFlag = false;

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM reset()"
        << endl;
    }

    if (strcmp(context.getState().getName(), 
               SSM::Init.getName())
           == 0)
    {
        loopbackFlag = true;
    }

    if (loopbackFlag == false)
    {
        (context.getState()).Exit(context);
    }

    context.setState(SSM::Init);

        if (loopbackFlag == false)
        {
        (context.getState()).Entry(context);
    }

    return;
}

void SSM_Init::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_Init::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_Init::init(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM init()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Ready);
    (context.getState()).Entry(context);

    return;
}

void SSM_ValidConfiguration::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_ValidConfiguration::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_ValidConfiguration::bad_modify(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM bad_modify()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::InvalidConfiguration);
    (context.getState()).Entry(context);

    return;
}

void SSM_ValidConfiguration::commit(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM commit()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Arming);
    (context.getState()).Entry(context);

    return;
}

void SSM_ValidConfiguration::modify(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM modify()"
        << endl;
    }

    return;
}

void SSM_ValidConfiguration::start(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM start()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.ResetFlags();
        context.setState(SSM::Wait);
    }
    catch (...)
    {
        context.setState(SSM::Wait);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_ValidConfiguration::transfer(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM transfer()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::ValidMode);
    (context.getState()).Entry(context);

    return;
}

void SSM_InvalidConfiguration::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_InvalidConfiguration::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_InvalidConfiguration::bad_modify(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM bad_modify()"
        << endl;
    }

    return;
}

void SSM_InvalidConfiguration::coerce(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM coerce()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::ValidConfiguration);
    (context.getState()).Entry(context);

    return;
}

void SSM_InvalidConfiguration::modify(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM modify()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::ValidConfiguration);
    (context.getState()).Entry(context);

    return;
}

void SSM_InvalidConfiguration::start(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM start()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.ResetFlags();
        context.setState(SSM::Wait);
    }
    catch (...)
    {
        context.setState(SSM::Wait);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_Arming::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_Arming::abort(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.SetFlag(ARMING_ABORTED);
        context.setState(SSM::InvalidConfiguration);
    }
    catch (...)
    {
        context.setState(SSM::InvalidConfiguration);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_Arming::done(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM done()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Ready);
    (context.getState()).Entry(context);

    return;
}

void SSM_Ready::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_Ready::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_Ready::bad_modify(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM bad_modify()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.ResetFlags();
        context.setState(SSM::InvalidConfiguration);
    }
    catch (...)
    {
        context.setState(SSM::InvalidConfiguration);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_Ready::calibrate(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM calibrate()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Arming);
    (context.getState()).Entry(context);

    return;
}

void SSM_Ready::force_Trigger(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM force_Trigger()"
        << endl;
    }

    return;
}

void SSM_Ready::modify(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM modify()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.ResetFlags();
        context.setState(SSM::ValidConfiguration);
    }
    catch (...)
    {
        context.setState(SSM::ValidConfiguration);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_Ready::start(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM start()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Wait);
    (context.getState()).Entry(context);

    return;
}

void SSM_Ready::start_stream(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM start_stream()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::DiskStream);
    (context.getState()).Entry(context);

    return;
}

void SSM_Ready::transfer(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM transfer()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::ValidMode);
    (context.getState()).Entry(context);

    return;
}

void SSM_Wait::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_Wait::abort(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.SetFlag(PARTIAL_DATA);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_Wait::force_Trigger(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM force_Trigger()"
        << endl;
    }

    return;
}

void SSM_Wait::hw_event(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM hw_event()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Busy);
    (context.getState()).Entry(context);

    return;
}

void SSM_Busy::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_Busy::abort(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.SetFlag(PARTIAL_DATA);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_Busy::hw_event(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM hw_event()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::DataReady);
    (context.getState()).Entry(context);

    return;
}

void SSM_DataReady::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_DataReady::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_DataReady::bad_modify(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM bad_modify()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.ResetFlags();
        context.setState(SSM::InvalidConfiguration);
    }
    catch (...)
    {
        context.setState(SSM::InvalidConfiguration);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_DataReady::calibrate(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM calibrate()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::ArmingDataReady);
    (context.getState()).Entry(context);

    return;
}

void SSM_DataReady::hw_event(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM hw_event()"
        << endl;
    }

    return;
}

void SSM_DataReady::modify(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM modify()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.ResetFlags();
        context.setState(SSM::ValidConfiguration);
    }
    catch (...)
    {
        context.setState(SSM::ValidConfiguration);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_DataReady::start(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM start()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.ResetFlags();
        context.setState(SSM::Wait);
    }
    catch (...)
    {
        context.setState(SSM::Wait);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_DataReady::transfer(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM transfer()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::ValidMode);
    (context.getState()).Entry(context);

    return;
}

void SSM_ValidMode::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_ValidMode::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_ValidMode::invalid(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM invalid()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::InvalidMode);
    (context.getState()).Entry(context);

    return;
}

void SSM_ValidMode::read(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM read()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::MemoryAccess);
    (context.getState()).Entry(context);

    return;
}

void SSM_InvalidMode::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_InvalidMode::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_InvalidMode::valid(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM valid()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::ValidMode);
    (context.getState()).Entry(context);

    return;
}

void SSM_MemoryAccess::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_MemoryAccess::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    return;
}

void SSM_MemoryAccess::done(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM done()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::DataReady);
    (context.getState()).Entry(context);

    return;
}

void SSM_ArmingDataReady::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_ArmingDataReady::abort(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.clearState();
    try
    {
        ctxt.SetFlag(ARMING_ABORTED);
        context.setState(SSM::InvalidConfiguration);
    }
    catch (...)
    {
        context.setState(SSM::InvalidConfiguration);
        throw;
    }
    (context.getState()).Entry(context);

    return;
}

void SSM_ArmingDataReady::done(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM done()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::DataReady);
    (context.getState()).Entry(context);

    return;
}

void SSM_DiskStream::Default(CStateMachineContext& context)
{
    CStateMachine& ctxt = context.getOwner();

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM Default()"
        << endl;
    }

    CStateMachineState& EndStateName = context.getState();

    context.clearState();
    try
    {
        ctxt.RaiseError(ERROR_INVALID_TRANSITION);
        context.setState(EndStateName);
    }
    catch (...)
    {
        context.setState(EndStateName);
        throw;
    }

    return;
}

void SSM_DiskStream::abort(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM abort()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Ready);
    (context.getState()).Entry(context);

    return;
}

void SSM_DiskStream::done(CStateMachineContext& context)
{

    if (context.getDebugFlag() == true)
    {
        ostream& str = context.getDebugStream();

        str << "TRANSITION   : SSM done()"
        << endl;
    }

    (context.getState()).Exit(context);
    context.setState(SSM::Ready);
    (context.getState()).Entry(context);

    return;
}
