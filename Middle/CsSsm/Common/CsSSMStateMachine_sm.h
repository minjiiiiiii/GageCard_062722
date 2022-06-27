#ifndef _H_CSSSMSTATEMACHINE_SM
#define _H_CSSSMSTATEMACHINE_SM

#include <statemap.h>

// Forward declarations.
class SSM;
class SSM_Init;
class SSM_ValidConfiguration;
class SSM_InvalidConfiguration;
class SSM_Arming;
class SSM_Ready;
class SSM_Wait;
class SSM_Busy;
class SSM_DataReady;
class SSM_ValidMode;
class SSM_InvalidMode;
class SSM_MemoryAccess;
class SSM_ArmingDataReady;
class SSM_DiskStream;
class SSM_Default;
class CStateMachineState;
class CStateMachineContext;
class CStateMachine;

class CStateMachineState : public statemap::State
{
private:
    CStateMachineState (CStateMachineState&) : statemap::State("", 0) {};
    CStateMachineState () : statemap::State("", 0) {};
public:
    CStateMachineState(const char *name, int id)
    : statemap::State(name, id)
    {};

    virtual void Entry(CStateMachineContext&) {};
    virtual void Exit(CStateMachineContext&) {};

    virtual void abort(CStateMachineContext& context);
    virtual void bad_modify(CStateMachineContext& context);
    virtual void calibrate(CStateMachineContext& context);
    virtual void coerce(CStateMachineContext& context);
    virtual void commit(CStateMachineContext& context);
    virtual void done(CStateMachineContext& context);
    virtual void force_Trigger(CStateMachineContext& context);
    virtual void hw_event(CStateMachineContext& context);
    virtual void init(CStateMachineContext& context);
    virtual void invalid(CStateMachineContext& context);
    virtual void modify(CStateMachineContext& context);
    virtual void read(CStateMachineContext& context);
    virtual void reset(CStateMachineContext& context);
    virtual void start(CStateMachineContext& context);
    virtual void start_stream(CStateMachineContext& context);
    virtual void transfer(CStateMachineContext& context);
    virtual void valid(CStateMachineContext& context);

protected:
    virtual void Default(CStateMachineContext& context);
};

class SSM
{
public:
    static SSM_Init    Init;
    static SSM_ValidConfiguration    ValidConfiguration;
    static SSM_InvalidConfiguration    InvalidConfiguration;
    static SSM_Arming    Arming;
    static SSM_Ready    Ready;
    static SSM_Wait    Wait;
    static SSM_Busy    Busy;
    static SSM_DataReady    DataReady;
    static SSM_ValidMode    ValidMode;
    static SSM_InvalidMode    InvalidMode;
    static SSM_MemoryAccess    MemoryAccess;
    static SSM_ArmingDataReady    ArmingDataReady;
    static SSM_DiskStream    DiskStream;

private:
    SSM() {};
};

class SSM_Default : public CStateMachineState
{
private:
    SSM_Default (SSM_Default&) : CStateMachineState("", 0) {};
    SSM_Default () : CStateMachineState("", 0) {};
public:
    SSM_Default(const char *name, int id)
    : CStateMachineState(name, id)
    {};

    virtual void reset(CStateMachineContext& context);
};

class SSM_Init : public SSM_Default
{
private:
    SSM_Init() : SSM_Default("", 0) {}
    SSM_Init(SSM_Init&) : SSM_Default("", 0){}
public:
    SSM_Init(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void init(CStateMachineContext& context);
};

class SSM_ValidConfiguration : public SSM_Default
{
private:
    SSM_ValidConfiguration() : SSM_Default("", 0) {}
    SSM_ValidConfiguration(SSM_ValidConfiguration&) : SSM_Default("", 0){}
public:
    SSM_ValidConfiguration(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void bad_modify(CStateMachineContext& context);
    void commit(CStateMachineContext& context);
    void modify(CStateMachineContext& context);
    void start(CStateMachineContext& context);
    void transfer(CStateMachineContext& context);
};

class SSM_InvalidConfiguration : public SSM_Default
{
private:
    SSM_InvalidConfiguration() : SSM_Default("", 0) {}
    SSM_InvalidConfiguration(SSM_InvalidConfiguration&) : SSM_Default("", 0){}
public:
    SSM_InvalidConfiguration(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void bad_modify(CStateMachineContext& context);
    void coerce(CStateMachineContext& context);
    void modify(CStateMachineContext& context);
    void start(CStateMachineContext& context);
};

class SSM_Arming : public SSM_Default
{
private:
    SSM_Arming() : SSM_Default("", 0) {}
    SSM_Arming(SSM_Arming&) : SSM_Default("", 0){}
public:
    SSM_Arming(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void done(CStateMachineContext& context);
};

class SSM_Ready : public SSM_Default
{
private:
    SSM_Ready() : SSM_Default("", 0) {}
    SSM_Ready(SSM_Ready&) : SSM_Default("", 0){}
public:
    SSM_Ready(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void bad_modify(CStateMachineContext& context);
    void calibrate(CStateMachineContext& context);
    void force_Trigger(CStateMachineContext& context);
    void modify(CStateMachineContext& context);
    void start(CStateMachineContext& context);
    void start_stream(CStateMachineContext& context);
    void transfer(CStateMachineContext& context);
};

class SSM_Wait : public SSM_Default
{
private:
    SSM_Wait() : SSM_Default("", 0) {}
    SSM_Wait(SSM_Wait&) : SSM_Default("", 0){}
public:
    SSM_Wait(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void force_Trigger(CStateMachineContext& context);
    void hw_event(CStateMachineContext& context);
};

class SSM_Busy : public SSM_Default
{
private:
    SSM_Busy() : SSM_Default("", 0) {}
    SSM_Busy(SSM_Busy&) : SSM_Default("", 0){}
public:
    SSM_Busy(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void hw_event(CStateMachineContext& context);
};

class SSM_DataReady : public SSM_Default
{
private:
    SSM_DataReady() : SSM_Default("", 0) {}
    SSM_DataReady(SSM_DataReady&) : SSM_Default("", 0){}
public:
    SSM_DataReady(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void bad_modify(CStateMachineContext& context);
    void calibrate(CStateMachineContext& context);
    void hw_event(CStateMachineContext& context);
    void modify(CStateMachineContext& context);
    void start(CStateMachineContext& context);
    void transfer(CStateMachineContext& context);
};

class SSM_ValidMode : public SSM_Default
{
private:
    SSM_ValidMode() : SSM_Default("", 0) {}
    SSM_ValidMode(SSM_ValidMode&) : SSM_Default("", 0){}
public:
    SSM_ValidMode(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void invalid(CStateMachineContext& context);
    void read(CStateMachineContext& context);
};

class SSM_InvalidMode : public SSM_Default
{
private:
    SSM_InvalidMode() : SSM_Default("", 0) {}
    SSM_InvalidMode(SSM_InvalidMode&) : SSM_Default("", 0){}
public:
    SSM_InvalidMode(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void valid(CStateMachineContext& context);
};

class SSM_MemoryAccess : public SSM_Default
{
private:
    SSM_MemoryAccess() : SSM_Default("", 0) {}
    SSM_MemoryAccess(SSM_MemoryAccess&) : SSM_Default("", 0){}
public:
    SSM_MemoryAccess(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void done(CStateMachineContext& context);
};

class SSM_ArmingDataReady : public SSM_Default
{
private:
    SSM_ArmingDataReady() : SSM_Default("", 0) {}
    SSM_ArmingDataReady(SSM_ArmingDataReady&) : SSM_Default("", 0){}
public:
    SSM_ArmingDataReady(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void done(CStateMachineContext& context);
};

class SSM_DiskStream : public SSM_Default
{
private:
    SSM_DiskStream() : SSM_Default("", 0) {}
    SSM_DiskStream(SSM_DiskStream&) : SSM_Default("", 0){}
public:
    SSM_DiskStream(const char *name, int id)
    : SSM_Default(name, id)
    {};

    void Default(CStateMachineContext& context);
    void abort(CStateMachineContext& context);
    void done(CStateMachineContext& context);
};

class CStateMachineContext : public statemap::FSMContext
{
    CStateMachineContext& operator = (CStateMachineContext& ){return *this;}
public:
    CStateMachineContext(CStateMachine& owner)
    : _owner(owner)
    {
        setState(SSM::Init);
        SSM::Init.Entry(*this);
    };

    CStateMachine& getOwner() const
    {
        return(_owner);
    };

    CStateMachineState& getState() const
    {
        if (_state == NULL)
        {
            throw statemap::StateUndefinedException();
        }

        return (dynamic_cast<CStateMachineState&>(*_state));
    };

    void abort()
    {
        setTransition("abort");
        (getState()).abort(*this);
        setTransition(NULL);
    };

    void bad_modify()
    {
        setTransition("bad_modify");
        (getState()).bad_modify(*this);
        setTransition(NULL);
    };

    void calibrate()
    {
        setTransition("calibrate");
        (getState()).calibrate(*this);
        setTransition(NULL);
    };

    void coerce()
    {
        setTransition("coerce");
        (getState()).coerce(*this);
        setTransition(NULL);
    };

    void commit()
    {
        setTransition("commit");
        (getState()).commit(*this);
        setTransition(NULL);
    };

    void done()
    {
        setTransition("done");
        (getState()).done(*this);
        setTransition(NULL);
    };

    void force_Trigger()
    {
        setTransition("force_Trigger");
        (getState()).force_Trigger(*this);
        setTransition(NULL);
    };

    void hw_event()
    {
        setTransition("hw_event");
        (getState()).hw_event(*this);
        setTransition(NULL);
    };

    void init()
    {
        setTransition("init");
        (getState()).init(*this);
        setTransition(NULL);
    };

    void invalid()
    {
        setTransition("invalid");
        (getState()).invalid(*this);
        setTransition(NULL);
    };

    void modify()
    {
        setTransition("modify");
        (getState()).modify(*this);
        setTransition(NULL);
    };

    void read()
    {
        setTransition("read");
        (getState()).read(*this);
        setTransition(NULL);
    };

    void reset()
    {
        setTransition("reset");
        (getState()).reset(*this);
        setTransition(NULL);
    };

    void start()
    {
        setTransition("start");
        (getState()).start(*this);
        setTransition(NULL);
    };

    void start_stream()
    {
        setTransition("start_stream");
        (getState()).start_stream(*this);
        setTransition(NULL);
    };

    void transfer()
    {
        setTransition("transfer");
        (getState()).transfer(*this);
        setTransition(NULL);
    };

    void valid()
    {
        setTransition("valid");
        (getState()).valid(*this);
        setTransition(NULL);
    };

private:
    CStateMachine& _owner;
};

#endif
