/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6) // "Dialog"

    },
    "Dialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Assign_Material_Dlg_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Assign_Material_Dlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Assign_Material_Dlg_t qt_meta_stringdata_Assign_Material_Dlg = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Assign_Material_Dlg"
QT_MOC_LITERAL(1, 20, 7), // "onclose"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "Assign_Material_Dlg\0onclose\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Assign_Material_Dlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Assign_Material_Dlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Assign_Material_Dlg *_t = static_cast<Assign_Material_Dlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onclose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Assign_Material_Dlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Assign_Material_Dlg.data,
      qt_meta_data_Assign_Material_Dlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Assign_Material_Dlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Assign_Material_Dlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Assign_Material_Dlg.stringdata0))
        return static_cast<void*>(const_cast< Assign_Material_Dlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int Assign_Material_Dlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Atmosphere_Dlg_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Atmosphere_Dlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Atmosphere_Dlg_t qt_meta_stringdata_Atmosphere_Dlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Atmosphere_Dlg"
QT_MOC_LITERAL(1, 15, 7), // "onclose"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "Atmosphere_Dlg\0onclose\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Atmosphere_Dlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Atmosphere_Dlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Atmosphere_Dlg *_t = static_cast<Atmosphere_Dlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onclose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Atmosphere_Dlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Atmosphere_Dlg.data,
      qt_meta_data_Atmosphere_Dlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Atmosphere_Dlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Atmosphere_Dlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Atmosphere_Dlg.stringdata0))
        return static_cast<void*>(const_cast< Atmosphere_Dlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int Atmosphere_Dlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Check_Dlg_t {
    QByteArrayData data[3];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Check_Dlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Check_Dlg_t qt_meta_stringdata_Check_Dlg = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Check_Dlg"
QT_MOC_LITERAL(1, 10, 7), // "onclose"
QT_MOC_LITERAL(2, 18, 0) // ""

    },
    "Check_Dlg\0onclose\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Check_Dlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Check_Dlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Check_Dlg *_t = static_cast<Check_Dlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onclose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Check_Dlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Check_Dlg.data,
      qt_meta_data_Check_Dlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Check_Dlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Check_Dlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Check_Dlg.stringdata0))
        return static_cast<void*>(const_cast< Check_Dlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int Check_Dlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Import_Heat_Solver_Dlg_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Import_Heat_Solver_Dlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Import_Heat_Solver_Dlg_t qt_meta_stringdata_Import_Heat_Solver_Dlg = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Import_Heat_Solver_Dlg"
QT_MOC_LITERAL(1, 23, 7), // "onclose"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "Import_Heat_Solver_Dlg\0onclose\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Import_Heat_Solver_Dlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Import_Heat_Source_Dlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Import_Heat_Source_Dlg *_t = static_cast<Import_Heat_Source_Dlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onclose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Import_Heat_Source_Dlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Import_Heat_Solver_Dlg.data,
      qt_meta_data_Import_Heat_Solver_Dlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Import_Heat_Source_Dlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Import_Heat_Source_Dlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Import_Heat_Solver_Dlg.stringdata0))
        return static_cast<void*>(const_cast< Import_Heat_Source_Dlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int Import_Heat_Source_Dlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Set_Dlg_t {
    QByteArrayData data[3];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Set_Dlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Set_Dlg_t qt_meta_stringdata_Set_Dlg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Set_Dlg"
QT_MOC_LITERAL(1, 8, 7), // "onclose"
QT_MOC_LITERAL(2, 16, 0) // ""

    },
    "Set_Dlg\0onclose\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Set_Dlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Set_Dlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Set_Dlg *_t = static_cast<Set_Dlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onclose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Set_Dlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Set_Dlg.data,
      qt_meta_data_Set_Dlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Set_Dlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Set_Dlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Set_Dlg.stringdata0))
        return static_cast<void*>(const_cast< Set_Dlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int Set_Dlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Eidt_Material_Dlg_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Eidt_Material_Dlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Eidt_Material_Dlg_t qt_meta_stringdata_Eidt_Material_Dlg = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Eidt_Material_Dlg"
QT_MOC_LITERAL(1, 18, 7), // "onclose"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "onsave"
QT_MOC_LITERAL(4, 34, 18), // "onmaterial_changed"
QT_MOC_LITERAL(5, 53, 4) // "text"

    },
    "Eidt_Material_Dlg\0onclose\0\0onsave\0"
    "onmaterial_changed\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Eidt_Material_Dlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Eidt_Material_Dlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Eidt_Material_Dlg *_t = static_cast<Eidt_Material_Dlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onclose(); break;
        case 1: _t->onsave(); break;
        case 2: _t->onmaterial_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Eidt_Material_Dlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Eidt_Material_Dlg.data,
      qt_meta_data_Eidt_Material_Dlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Eidt_Material_Dlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Eidt_Material_Dlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Eidt_Material_Dlg.stringdata0))
        return static_cast<void*>(const_cast< Eidt_Material_Dlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int Eidt_Material_Dlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
