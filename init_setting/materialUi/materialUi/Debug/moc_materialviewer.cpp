/****************************************************************************
** Meta object code from reading C++ file 'materialviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../materialviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'materialviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MaterialViewer_t {
    QByteArrayData data[20];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaterialViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaterialViewer_t qt_meta_stringdata_MaterialViewer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MaterialViewer"
QT_MOC_LITERAL(1, 15, 13), // "onPathClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "onApplyButtonClicked"
QT_MOC_LITERAL(4, 51, 20), // "omCurrentTextChanged"
QT_MOC_LITERAL(5, 72, 4), // "text"
QT_MOC_LITERAL(6, 77, 13), // "onItemClicked"
QT_MOC_LITERAL(7, 91, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 108, 4), // "item"
QT_MOC_LITERAL(9, 113, 18), // "updateWidgetsByXml"
QT_MOC_LITERAL(10, 132, 12), // "QDomElement&"
QT_MOC_LITERAL(11, 145, 3), // "xml"
QT_MOC_LITERAL(12, 149, 12), // "QVBoxLayout*"
QT_MOC_LITERAL(13, 162, 6), // "layout"
QT_MOC_LITERAL(14, 169, 5), // "clear"
QT_MOC_LITERAL(15, 175, 16), // "updateByEachItem"
QT_MOC_LITERAL(16, 192, 7), // "setFile"
QT_MOC_LITERAL(17, 200, 8), // "filePath"
QT_MOC_LITERAL(18, 209, 12), // "setChartFile"
QT_MOC_LITERAL(19, 222, 8) // "filename"

    },
    "MaterialViewer\0onPathClicked\0\0"
    "onApplyButtonClicked\0omCurrentTextChanged\0"
    "text\0onItemClicked\0QListWidgetItem*\0"
    "item\0updateWidgetsByXml\0QDomElement&\0"
    "xml\0QVBoxLayout*\0layout\0clear\0"
    "updateByEachItem\0setFile\0filePath\0"
    "setChartFile\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaterialViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    1,   56,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       9,    3,   62,    2, 0x0a /* Public */,
      15,    2,   69,    2, 0x0a /* Public */,
      16,    1,   74,    2, 0x0a /* Public */,
      18,    1,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12, QMetaType::Bool,   11,   13,   14,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void MaterialViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MaterialViewer *_t = static_cast<MaterialViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPathClicked(); break;
        case 1: _t->onApplyButtonClicked(); break;
        case 2: _t->omCurrentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->updateWidgetsByXml((*reinterpret_cast< QDomElement(*)>(_a[1])),(*reinterpret_cast< QVBoxLayout*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->updateByEachItem((*reinterpret_cast< QDomElement(*)>(_a[1])),(*reinterpret_cast< QVBoxLayout*(*)>(_a[2]))); break;
        case 6: _t->setFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setChartFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MaterialViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MaterialViewer.data,
      qt_meta_data_MaterialViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MaterialViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaterialViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MaterialViewer.stringdata0))
        return static_cast<void*>(const_cast< MaterialViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int MaterialViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
