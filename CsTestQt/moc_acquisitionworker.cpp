/****************************************************************************
** Meta object code from reading C++ file 'acquisitionworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "acquisitionworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acquisitionworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AcquisitionWorker_t {
    QByteArrayData data[22];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AcquisitionWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AcquisitionWorker_t qt_meta_stringdata_AcquisitionWorker = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AcquisitionWorker"
QT_MOC_LITERAL(1, 18, 9), // "dataReady"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "finished"
QT_MOC_LITERAL(4, 38, 5), // "Error"
QT_MOC_LITERAL(5, 44, 10), // "clearGraph"
QT_MOC_LITERAL(6, 55, 16), // "UpdateScopeParms"
QT_MOC_LITERAL(7, 72, 9), // "AbortCsOp"
QT_MOC_LITERAL(8, 82, 9), // "loadParms"
QT_MOC_LITERAL(9, 92, 12), // "CGageSystem*"
QT_MOC_LITERAL(10, 105, 16), // "AbortScopeUpdate"
QT_MOC_LITERAL(11, 122, 24), // "s_DoAcquisitionFromBoard"
QT_MOC_LITERAL(12, 147, 8), // "s_DoStop"
QT_MOC_LITERAL(13, 156, 9), // "s_XferMem"
QT_MOC_LITERAL(14, 166, 15), // "s_SetContinuous"
QT_MOC_LITERAL(15, 182, 11), // "bContinuous"
QT_MOC_LITERAL(16, 194, 15), // "s_SetClearGraph"
QT_MOC_LITERAL(17, 210, 9), // "bClrGraph"
QT_MOC_LITERAL(18, 220, 7), // "s_Abort"
QT_MOC_LITERAL(19, 228, 15), // "s_ProcessEvents"
QT_MOC_LITERAL(20, 244, 13), // "s_SetOverdraw"
QT_MOC_LITERAL(21, 258, 9) // "bOverdraw"

    },
    "AcquisitionWorker\0dataReady\0\0finished\0"
    "Error\0clearGraph\0UpdateScopeParms\0"
    "AbortCsOp\0loadParms\0CGageSystem*\0"
    "AbortScopeUpdate\0s_DoAcquisitionFromBoard\0"
    "s_DoStop\0s_XferMem\0s_SetContinuous\0"
    "bContinuous\0s_SetClearGraph\0bClrGraph\0"
    "s_Abort\0s_ProcessEvents\0s_SetOverdraw\0"
    "bOverdraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AcquisitionWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    1,  100,    2, 0x06 /* Public */,
      10,    0,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,
      16,    1,  110,    2, 0x0a /* Public */,
      18,    0,  113,    2, 0x0a /* Public */,
      19,    0,  114,    2, 0x0a /* Public */,
      20,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void AcquisitionWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AcquisitionWorker *_t = static_cast<AcquisitionWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady(); break;
        case 1: _t->finished(); break;
        case 2: _t->Error(); break;
        case 3: _t->clearGraph(); break;
        case 4: _t->UpdateScopeParms(); break;
        case 5: _t->AbortCsOp(); break;
        case 6: _t->loadParms((*reinterpret_cast< CGageSystem*(*)>(_a[1]))); break;
        case 7: _t->AbortScopeUpdate(); break;
        case 8: _t->s_DoAcquisitionFromBoard(); break;
        case 9: _t->s_DoStop(); break;
        case 10: _t->s_XferMem(); break;
        case 11: _t->s_SetContinuous((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->s_SetClearGraph((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->s_Abort(); break;
        case 14: _t->s_ProcessEvents(); break;
        case 15: _t->s_SetOverdraw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
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
            typedef void (AcquisitionWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::dataReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AcquisitionWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AcquisitionWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::Error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AcquisitionWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::clearGraph)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AcquisitionWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::UpdateScopeParms)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AcquisitionWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::AbortCsOp)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (AcquisitionWorker::*_t)(CGageSystem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::loadParms)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (AcquisitionWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionWorker::AbortScopeUpdate)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject AcquisitionWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AcquisitionWorker.data,
      qt_meta_data_AcquisitionWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AcquisitionWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AcquisitionWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AcquisitionWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AcquisitionWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void AcquisitionWorker::dataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AcquisitionWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AcquisitionWorker::Error()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AcquisitionWorker::clearGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AcquisitionWorker::UpdateScopeParms()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AcquisitionWorker::AbortCsOp()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AcquisitionWorker::loadParms(CGageSystem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AcquisitionWorker::AbortScopeUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
