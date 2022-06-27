/****************************************************************************
** Meta object code from reading C++ file 'qcsgraph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcsgraph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcsgraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCsGraph_t {
    QByteArrayData data[23];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCsGraph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCsGraph_t qt_meta_stringdata_QCsGraph = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QCsGraph"
QT_MOC_LITERAL(1, 9, 11), // "updateGraph"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "GRAPH_UPDATE"
QT_MOC_LITERAL(4, 35, 12), // "UpdateAction"
QT_MOC_LITERAL(5, 48, 15), // "ScopeUpdateDone"
QT_MOC_LITERAL(6, 64, 12), // "GraphCleared"
QT_MOC_LITERAL(7, 77, 12), // "updateTxTime"
QT_MOC_LITERAL(8, 90, 11), // "strXferTime"
QT_MOC_LITERAL(9, 102, 15), // "updateScrollBar"
QT_MOC_LITERAL(10, 118, 3), // "Val"
QT_MOC_LITERAL(11, 122, 16), // "channelProtFault"
QT_MOC_LITERAL(12, 139, 12), // "zoomXChanged"
QT_MOC_LITERAL(13, 152, 12), // "horizChanged"
QT_MOC_LITERAL(14, 165, 18), // "updateCursorStatus"
QT_MOC_LITERAL(15, 184, 20), // "updatePositionStatus"
QT_MOC_LITERAL(16, 205, 12), // "s_ClearGraph"
QT_MOC_LITERAL(17, 218, 13), // "s_UpdateGraph"
QT_MOC_LITERAL(18, 232, 13), // "s_DisableData"
QT_MOC_LITERAL(19, 246, 13), // "s_AbortUpdate"
QT_MOC_LITERAL(20, 260, 15), // "s_movePositionX"
QT_MOC_LITERAL(21, 276, 8), // "i32value"
QT_MOC_LITERAL(22, 285, 18) // "s_updateCursorVals"

    },
    "QCsGraph\0updateGraph\0\0GRAPH_UPDATE\0"
    "UpdateAction\0ScopeUpdateDone\0GraphCleared\0"
    "updateTxTime\0strXferTime\0updateScrollBar\0"
    "Val\0channelProtFault\0zoomXChanged\0"
    "horizChanged\0updateCursorStatus\0"
    "updatePositionStatus\0s_ClearGraph\0"
    "s_UpdateGraph\0s_DisableData\0s_AbortUpdate\0"
    "s_movePositionX\0i32value\0s_updateCursorVals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCsGraph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    1,   99,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      11,    0,  105,    2, 0x06 /* Public */,
      12,    0,  106,    2, 0x06 /* Public */,
      13,    1,  107,    2, 0x06 /* Public */,
      14,    1,  110,    2, 0x06 /* Public */,
      15,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  116,    2, 0x0a /* Public */,
      17,    1,  117,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,
      20,    1,  122,    2, 0x0a /* Public */,
      22,    0,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

       0        // eod
};

void QCsGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCsGraph *_t = static_cast<QCsGraph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGraph((*reinterpret_cast< GRAPH_UPDATE(*)>(_a[1]))); break;
        case 1: _t->ScopeUpdateDone(); break;
        case 2: _t->GraphCleared(); break;
        case 3: _t->updateTxTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateScrollBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->channelProtFault(); break;
        case 6: _t->zoomXChanged(); break;
        case 7: _t->horizChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateCursorStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->updatePositionStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->s_ClearGraph(); break;
        case 11: _t->s_UpdateGraph((*reinterpret_cast< GRAPH_UPDATE(*)>(_a[1]))); break;
        case 12: _t->s_DisableData(); break;
        case 13: _t->s_AbortUpdate(); break;
        case 14: _t->s_movePositionX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->s_updateCursorVals(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCsGraph::*_t)(GRAPH_UPDATE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::updateGraph)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::ScopeUpdateDone)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::GraphCleared)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::updateTxTime)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::updateScrollBar)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::channelProtFault)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::zoomXChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::horizChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::updateCursorStatus)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QCsGraph::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCsGraph::updatePositionStatus)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject QCsGraph::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCsGraph.data,
      qt_meta_data_QCsGraph,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCsGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCsGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCsGraph.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QCsGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QCsGraph::updateGraph(GRAPH_UPDATE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCsGraph::ScopeUpdateDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCsGraph::GraphCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCsGraph::updateTxTime(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCsGraph::updateScrollBar(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCsGraph::channelProtFault()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QCsGraph::zoomXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QCsGraph::horizChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCsGraph::updateCursorStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCsGraph::updatePositionStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
