/****************************************************************************
** Meta object code from reading C++ file 'desktop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../desktop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeskTop_t {
    QByteArrayData data[9];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeskTop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeskTop_t qt_meta_stringdata_DeskTop = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DeskTop"
QT_MOC_LITERAL(1, 8, 11), // "setradiobtn"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 17), // "onLineEditChanged"
QT_MOC_LITERAL(4, 39, 4), // "text"
QT_MOC_LITERAL(5, 44, 5), // "reset"
QT_MOC_LITERAL(6, 50, 10), // "Model_Type"
QT_MOC_LITERAL(7, 61, 1), // "b"
QT_MOC_LITERAL(8, 63, 8) // "updateUI"

    },
    "DeskTop\0setradiobtn\0\0onLineEditChanged\0"
    "text\0reset\0Model_Type\0b\0updateUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeskTop[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void DeskTop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeskTop *_t = static_cast<DeskTop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setradiobtn(); break;
        case 1: _t->onLineEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->reset((*reinterpret_cast< Model_Type(*)>(_a[1]))); break;
        case 3: _t->updateUI(); break;
        default: ;
        }
    }
}

const QMetaObject DeskTop::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DeskTop.data,
      qt_meta_data_DeskTop,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeskTop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeskTop::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeskTop.stringdata0))
        return static_cast<void*>(const_cast< DeskTop*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DeskTop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
