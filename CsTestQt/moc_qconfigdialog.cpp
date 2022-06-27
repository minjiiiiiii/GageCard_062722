/****************************************************************************
** Meta object code from reading C++ file 'qconfigdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qconfigdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QConfigDialog_t {
    QByteArrayData data[58];
    char stringdata0[921];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConfigDialog_t qt_meta_stringdata_QConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QConfigDialog"
QT_MOC_LITERAL(1, 14, 14), // "updateChannels"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "updateCommitTime"
QT_MOC_LITERAL(4, 47, 11), // "ConfigError"
QT_MOC_LITERAL(5, 59, 9), // "LoadParms"
QT_MOC_LITERAL(6, 69, 7), // "StopAcq"
QT_MOC_LITERAL(7, 77, 8), // "StartAcq"
QT_MOC_LITERAL(8, 86, 11), // "disableData"
QT_MOC_LITERAL(9, 98, 18), // "s_ShowConfigWindow"
QT_MOC_LITERAL(10, 117, 12), // "CGageSystem*"
QT_MOC_LITERAL(11, 130, 11), // "pGageSystem"
QT_MOC_LITERAL(12, 142, 8), // "s_Cancel"
QT_MOC_LITERAL(13, 151, 4), // "s_Ok"
QT_MOC_LITERAL(14, 156, 11), // "s_loadParms"
QT_MOC_LITERAL(15, 168, 11), // "s_UpdateTab"
QT_MOC_LITERAL(16, 180, 8), // "i32Index"
QT_MOC_LITERAL(17, 189, 16), // "s_UpdateExtClock"
QT_MOC_LITERAL(18, 206, 15), // "s_ChangeExpert1"
QT_MOC_LITERAL(19, 222, 8), // "i32State"
QT_MOC_LITERAL(20, 231, 15), // "s_ChangeExpert2"
QT_MOC_LITERAL(21, 247, 16), // "s_ChangeAvgCount"
QT_MOC_LITERAL(22, 264, 18), // "s_EnableNbrRecords"
QT_MOC_LITERAL(23, 283, 6), // "bState"
QT_MOC_LITERAL(24, 290, 22), // "s_EnableTriggerTimeOut"
QT_MOC_LITERAL(25, 313, 22), // "s_ChangeTriggerTimeOut"
QT_MOC_LITERAL(26, 336, 21), // "s_EnableExternalClock"
QT_MOC_LITERAL(27, 358, 22), // "s_EnableReferenceClock"
QT_MOC_LITERAL(28, 381, 23), // "s_ChangeAcquisitionMode"
QT_MOC_LITERAL(29, 405, 18), // "s_DisplaySingleSeg"
QT_MOC_LITERAL(30, 424, 8), // "b32State"
QT_MOC_LITERAL(31, 433, 15), // "s_ChangeCurrSeg"
QT_MOC_LITERAL(32, 449, 19), // "s_EnableAllChannels"
QT_MOC_LITERAL(33, 469, 20), // "s_ChangeChannelIndex"
QT_MOC_LITERAL(34, 490, 15), // "i32ChannelIndex"
QT_MOC_LITERAL(35, 506, 14), // "s_EnableFilter"
QT_MOC_LITERAL(36, 521, 18), // "s_ChangeInputRange"
QT_MOC_LITERAL(37, 540, 13), // "i32RangeIndex"
QT_MOC_LITERAL(38, 554, 16), // "s_ChangeDcOffset"
QT_MOC_LITERAL(39, 571, 10), // "s_EnableAC"
QT_MOC_LITERAL(40, 582, 10), // "s_EnableDC"
QT_MOC_LITERAL(41, 593, 13), // "s_Enable50Ohm"
QT_MOC_LITERAL(42, 607, 13), // "s_Enable1MOhm"
QT_MOC_LITERAL(43, 621, 25), // "s_EnableAdvanceTriggering"
QT_MOC_LITERAL(44, 647, 21), // "s_ChangeTriggerSource"
QT_MOC_LITERAL(45, 669, 24), // "s_ChangeTriggerCondition"
QT_MOC_LITERAL(46, 694, 20), // "s_ChangeTriggerLevel"
QT_MOC_LITERAL(47, 715, 28), // "s_AdvancedTriggerItemClicked"
QT_MOC_LITERAL(48, 744, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(49, 762, 6), // "widget"
QT_MOC_LITERAL(50, 769, 17), // "s_EnableTriggerAC"
QT_MOC_LITERAL(51, 787, 17), // "s_EnableTriggerDC"
QT_MOC_LITERAL(52, 805, 17), // "s_EnableTriggerHZ"
QT_MOC_LITERAL(53, 823, 20), // "s_EnableTrigger50Ohm"
QT_MOC_LITERAL(54, 844, 17), // "s_EnableTrigger5V"
QT_MOC_LITERAL(55, 862, 17), // "s_EnableTrigger1V"
QT_MOC_LITERAL(56, 880, 18), // "s_EnableTrigger3V3"
QT_MOC_LITERAL(57, 899, 21) // "s_EnableTriggerPlus5V"

    },
    "QConfigDialog\0updateChannels\0\0"
    "updateCommitTime\0ConfigError\0LoadParms\0"
    "StopAcq\0StartAcq\0disableData\0"
    "s_ShowConfigWindow\0CGageSystem*\0"
    "pGageSystem\0s_Cancel\0s_Ok\0s_loadParms\0"
    "s_UpdateTab\0i32Index\0s_UpdateExtClock\0"
    "s_ChangeExpert1\0i32State\0s_ChangeExpert2\0"
    "s_ChangeAvgCount\0s_EnableNbrRecords\0"
    "bState\0s_EnableTriggerTimeOut\0"
    "s_ChangeTriggerTimeOut\0s_EnableExternalClock\0"
    "s_EnableReferenceClock\0s_ChangeAcquisitionMode\0"
    "s_DisplaySingleSeg\0b32State\0s_ChangeCurrSeg\0"
    "s_EnableAllChannels\0s_ChangeChannelIndex\0"
    "i32ChannelIndex\0s_EnableFilter\0"
    "s_ChangeInputRange\0i32RangeIndex\0"
    "s_ChangeDcOffset\0s_EnableAC\0s_EnableDC\0"
    "s_Enable50Ohm\0s_Enable1MOhm\0"
    "s_EnableAdvanceTriggering\0"
    "s_ChangeTriggerSource\0s_ChangeTriggerCondition\0"
    "s_ChangeTriggerLevel\0s_AdvancedTriggerItemClicked\0"
    "QTableWidgetItem*\0widget\0s_EnableTriggerAC\0"
    "s_EnableTriggerDC\0s_EnableTriggerHZ\0"
    "s_EnableTrigger50Ohm\0s_EnableTrigger5V\0"
    "s_EnableTrigger1V\0s_EnableTrigger3V3\0"
    "s_EnableTriggerPlus5V"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  254,    2, 0x06 /* Public */,
       3,    1,  257,    2, 0x06 /* Public */,
       4,    0,  260,    2, 0x06 /* Public */,
       5,    0,  261,    2, 0x06 /* Public */,
       6,    0,  262,    2, 0x06 /* Public */,
       7,    0,  263,    2, 0x06 /* Public */,
       8,    0,  264,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  265,    2, 0x0a /* Public */,
      12,    0,  268,    2, 0x0a /* Public */,
      13,    0,  269,    2, 0x0a /* Public */,
      14,    1,  270,    2, 0x0a /* Public */,
      15,    1,  273,    2, 0x0a /* Public */,
      17,    0,  276,    2, 0x0a /* Public */,
      18,    1,  277,    2, 0x0a /* Public */,
      20,    1,  280,    2, 0x0a /* Public */,
      21,    0,  283,    2, 0x0a /* Public */,
      22,    1,  284,    2, 0x0a /* Public */,
      24,    1,  287,    2, 0x0a /* Public */,
      25,    0,  290,    2, 0x0a /* Public */,
      26,    1,  291,    2, 0x0a /* Public */,
      27,    1,  294,    2, 0x0a /* Public */,
      28,    1,  297,    2, 0x0a /* Public */,
      29,    1,  300,    2, 0x0a /* Public */,
      29,    1,  303,    2, 0x0a /* Public */,
      31,    0,  306,    2, 0x0a /* Public */,
      31,    1,  307,    2, 0x0a /* Public */,
      32,    1,  310,    2, 0x0a /* Public */,
      33,    1,  313,    2, 0x0a /* Public */,
      35,    1,  316,    2, 0x0a /* Public */,
      36,    1,  319,    2, 0x0a /* Public */,
      38,    0,  322,    2, 0x0a /* Public */,
      39,    1,  323,    2, 0x0a /* Public */,
      40,    1,  326,    2, 0x0a /* Public */,
      41,    1,  329,    2, 0x0a /* Public */,
      42,    1,  332,    2, 0x0a /* Public */,
      43,    1,  335,    2, 0x0a /* Public */,
      44,    1,  338,    2, 0x0a /* Public */,
      45,    1,  341,    2, 0x0a /* Public */,
      46,    1,  344,    2, 0x0a /* Public */,
      47,    1,  347,    2, 0x0a /* Public */,
      50,    1,  350,    2, 0x0a /* Public */,
      51,    1,  353,    2, 0x0a /* Public */,
      52,    1,  356,    2, 0x0a /* Public */,
      53,    1,  359,    2, 0x0a /* Public */,
      54,    1,  362,    2, 0x0a /* Public */,
      55,    1,  365,    2, 0x0a /* Public */,
      56,    1,  368,    2, 0x0a /* Public */,
      57,    1,  371,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,

       0        // eod
};

void QConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QConfigDialog *_t = static_cast<QConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateChannels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateCommitTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ConfigError(); break;
        case 3: _t->LoadParms(); break;
        case 4: _t->StopAcq(); break;
        case 5: _t->StartAcq(); break;
        case 6: _t->disableData(); break;
        case 7: _t->s_ShowConfigWindow((*reinterpret_cast< CGageSystem*(*)>(_a[1]))); break;
        case 8: _t->s_Cancel(); break;
        case 9: _t->s_Ok(); break;
        case 10: _t->s_loadParms((*reinterpret_cast< CGageSystem*(*)>(_a[1]))); break;
        case 11: _t->s_UpdateTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->s_UpdateExtClock(); break;
        case 13: _t->s_ChangeExpert1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->s_ChangeExpert2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->s_ChangeAvgCount(); break;
        case 16: _t->s_EnableNbrRecords((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->s_EnableTriggerTimeOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->s_ChangeTriggerTimeOut(); break;
        case 19: _t->s_EnableExternalClock((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->s_EnableReferenceClock((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->s_ChangeAcquisitionMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->s_DisplaySingleSeg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->s_DisplaySingleSeg((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->s_ChangeCurrSeg(); break;
        case 25: _t->s_ChangeCurrSeg((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->s_EnableAllChannels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->s_ChangeChannelIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->s_EnableFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->s_ChangeInputRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->s_ChangeDcOffset(); break;
        case 31: _t->s_EnableAC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->s_EnableDC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->s_Enable50Ohm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->s_Enable1MOhm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->s_EnableAdvanceTriggering((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->s_ChangeTriggerSource((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->s_ChangeTriggerCondition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->s_ChangeTriggerLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->s_AdvancedTriggerItemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 40: _t->s_EnableTriggerAC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->s_EnableTriggerDC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->s_EnableTriggerHZ((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->s_EnableTrigger50Ohm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->s_EnableTrigger5V((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->s_EnableTrigger1V((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->s_EnableTrigger3V3((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->s_EnableTriggerPlus5V((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CGageSystem* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CGageSystem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QConfigDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QConfigDialog::updateChannels)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QConfigDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QConfigDialog::updateCommitTime)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QConfigDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QConfigDialog::ConfigError)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QConfigDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QConfigDialog::LoadParms)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QConfigDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QConfigDialog::StopAcq)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QConfigDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QConfigDialog::StartAcq)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QConfigDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QConfigDialog::disableData)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QConfigDialog.data,
      qt_meta_data_QConfigDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QConfigDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void QConfigDialog::updateChannels(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QConfigDialog::updateCommitTime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QConfigDialog::ConfigError()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QConfigDialog::LoadParms()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QConfigDialog::StopAcq()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QConfigDialog::StartAcq()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QConfigDialog::disableData()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
