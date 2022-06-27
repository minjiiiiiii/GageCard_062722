/****************************************************************************
** Meta object code from reading C++ file 'qscope.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qscope.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScope_t {
    QByteArrayData data[14];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScope_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScope_t qt_meta_stringdata_QScope = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QScope"
QT_MOC_LITERAL(1, 7, 11), // "updateGraph"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "GRAPH_UPDATE"
QT_MOC_LITERAL(4, 33, 12), // "UpdateAction"
QT_MOC_LITERAL(5, 46, 14), // "displaySysInfo"
QT_MOC_LITERAL(6, 61, 17), // "displayFwVersions"
QT_MOC_LITERAL(7, 79, 18), // "s_adjustHScrollBar"
QT_MOC_LITERAL(8, 98, 15), // "s_UpdateRawData"
QT_MOC_LITERAL(9, 114, 19), // "s_UpdateChannelList"
QT_MOC_LITERAL(10, 134, 19), // "s_DisplaySystemInfo"
QT_MOC_LITERAL(11, 154, 19), // "s_DisplayFwVersions"
QT_MOC_LITERAL(12, 174, 17), // "s_UpdateScrollBar"
QT_MOC_LITERAL(13, 192, 3) // "Val"

    },
    "QScope\0updateGraph\0\0GRAPH_UPDATE\0"
    "UpdateAction\0displaySysInfo\0"
    "displayFwVersions\0s_adjustHScrollBar\0"
    "s_UpdateRawData\0s_UpdateChannelList\0"
    "s_DisplaySystemInfo\0s_DisplayFwVersions\0"
    "s_UpdateScrollBar\0Val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScope[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void QScope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScope *_t = static_cast<QScope *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGraph((*reinterpret_cast< GRAPH_UPDATE(*)>(_a[1]))); break;
        case 1: _t->displaySysInfo(); break;
        case 2: _t->displayFwVersions(); break;
        case 3: _t->s_adjustHScrollBar(); break;
        case 4: _t->s_UpdateRawData(); break;
        case 5: _t->s_UpdateChannelList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->s_DisplaySystemInfo(); break;
        case 7: _t->s_DisplayFwVersions(); break;
        case 8: _t->s_UpdateScrollBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScope::*_t)(GRAPH_UPDATE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScope::updateGraph)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScope::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScope::displaySysInfo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScope::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScope::displayFwVersions)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QScope::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QScope.data,
      qt_meta_data_QScope,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScope::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScope.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QScope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QScope::updateGraph(GRAPH_UPDATE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScope::displaySysInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QScope::displayFwVersions()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
