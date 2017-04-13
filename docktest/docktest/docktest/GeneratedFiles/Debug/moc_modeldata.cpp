/****************************************************************************
** Meta object code from reading C++ file 'modeldata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../modeldata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeldata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModelType_t {
    QByteArrayData data[6];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelType_t qt_meta_stringdata_ModelType = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ModelType"
QT_MOC_LITERAL(1, 10, 12), // "model_change"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "Model_Type"
QT_MOC_LITERAL(4, 35, 14), // "set_model_type"
QT_MOC_LITERAL(5, 50, 9) // "type_name"

    },
    "ModelType\0model_change\0\0Model_Type\0"
    "set_model_type\0type_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void ModelType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelType *_t = static_cast<ModelType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->model_change((*reinterpret_cast< Model_Type(*)>(_a[1]))); break;
        case 1: _t->set_model_type((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModelType::*_t)(Model_Type );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelType::model_change)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ModelType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelType.data,
      qt_meta_data_ModelType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelType.stringdata0))
        return static_cast<void*>(const_cast< ModelType*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ModelType::model_change(Model_Type _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ModelData_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelData_t qt_meta_stringdata_ModelData = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ModelData"
QT_MOC_LITERAL(1, 10, 11), // "data_change"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "reset"
QT_MOC_LITERAL(4, 29, 16), // "reset_model_type"
QT_MOC_LITERAL(5, 46, 27) // "reset_boundaries_conditions"

    },
    "ModelData\0data_change\0\0reset\0"
    "reset_model_type\0reset_boundaries_conditions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModelData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelData *_t = static_cast<ModelData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->data_change(); break;
        case 1: _t->reset(); break;
        case 2: _t->reset_model_type(); break;
        case 3: _t->reset_boundaries_conditions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModelData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelData::data_change)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModelData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelData.data,
      qt_meta_data_ModelData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelData.stringdata0))
        return static_cast<void*>(const_cast< ModelData*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ModelData::data_change()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
