/****************************************************************************
** Meta object code from reading C++ file 'material_edit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../material_edit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'material_edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Material_Edit_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Material_Edit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Material_Edit_t qt_meta_stringdata_Material_Edit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Material_Edit"
QT_MOC_LITERAL(1, 14, 8), // "onoprate"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "onvalidate"
QT_MOC_LITERAL(4, 35, 4), // "text"
QT_MOC_LITERAL(5, 40, 18), // "onmaterial_changed"
QT_MOC_LITERAL(6, 59, 8) // "ondelete"

    },
    "Material_Edit\0onoprate\0\0onvalidate\0"
    "text\0onmaterial_changed\0ondelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Material_Edit[] = {

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
       6,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void Material_Edit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Material_Edit *_t = static_cast<Material_Edit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onoprate(); break;
        case 1: _t->onvalidate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onmaterial_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->ondelete(); break;
        default: ;
        }
    }
}

const QMetaObject Material_Edit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Material_Edit.data,
      qt_meta_data_Material_Edit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Material_Edit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Material_Edit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Material_Edit.stringdata0))
        return static_cast<void*>(const_cast< Material_Edit*>(this));
    return QDialog::qt_metacast(_clname);
}

int Material_Edit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_Material_Add_t {
    QByteArrayData data[4];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Material_Add_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Material_Add_t qt_meta_stringdata_Material_Add = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Material_Add"
QT_MOC_LITERAL(1, 13, 8), // "onoprate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4) // "init"

    },
    "Material_Add\0onoprate\0\0init"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Material_Add[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Material_Add::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Material_Add *_t = static_cast<Material_Add *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onoprate(); break;
        case 1: _t->init(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Material_Add::staticMetaObject = {
    { &Material_Edit::staticMetaObject, qt_meta_stringdata_Material_Add.data,
      qt_meta_data_Material_Add,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Material_Add::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Material_Add::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Material_Add.stringdata0))
        return static_cast<void*>(const_cast< Material_Add*>(this));
    return Material_Edit::qt_metacast(_clname);
}

int Material_Add::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Material_Edit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
