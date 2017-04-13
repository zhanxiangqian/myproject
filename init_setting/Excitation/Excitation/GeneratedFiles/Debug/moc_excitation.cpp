/****************************************************************************
** Meta object code from reading C++ file 'excitation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../excitation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'excitation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Excitation_t {
    QByteArrayData data[8];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Excitation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Excitation_t qt_meta_stringdata_Excitation = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Excitation"
QT_MOC_LITERAL(1, 11, 8), // "onRadio1"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 1), // "b"
QT_MOC_LITERAL(4, 23, 8), // "onRadio2"
QT_MOC_LITERAL(5, 32, 12), // "onTypeChange"
QT_MOC_LITERAL(6, 45, 4), // "indx"
QT_MOC_LITERAL(7, 50, 9) // "onclicked"

    },
    "Excitation\0onRadio1\0\0b\0onRadio2\0"
    "onTypeChange\0indx\0onclicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Excitation[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void Excitation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Excitation *_t = static_cast<Excitation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRadio1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onRadio2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onTypeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onclicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Excitation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Excitation.data,
      qt_meta_data_Excitation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Excitation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Excitation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Excitation.stringdata0))
        return static_cast<void*>(const_cast< Excitation*>(this));
    return QDialog::qt_metacast(_clname);
}

int Excitation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
