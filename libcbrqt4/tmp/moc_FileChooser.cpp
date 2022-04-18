/****************************************************************************
** Meta object code from reading C++ file 'FileChooser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/FileChooser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileChooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileChooser_t {
    QByteArrayData data[22];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileChooser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileChooser_t qt_meta_stringdata_FileChooser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileChooser"
QT_MOC_LITERAL(1, 12, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "setFileName"
QT_MOC_LITERAL(4, 41, 2), // "fn"
QT_MOC_LITERAL(5, 44, 7), // "setMode"
QT_MOC_LITERAL(6, 52, 4), // "Mode"
QT_MOC_LITERAL(7, 57, 1), // "m"
QT_MOC_LITERAL(8, 59, 7), // "setType"
QT_MOC_LITERAL(9, 67, 4), // "Type"
QT_MOC_LITERAL(10, 72, 1), // "t"
QT_MOC_LITERAL(11, 74, 10), // "setPreview"
QT_MOC_LITERAL(12, 85, 3), // "rhs"
QT_MOC_LITERAL(13, 89, 10), // "chooseFile"
QT_MOC_LITERAL(14, 100, 4), // "mode"
QT_MOC_LITERAL(15, 105, 4), // "type"
QT_MOC_LITERAL(16, 110, 8), // "fileName"
QT_MOC_LITERAL(17, 119, 7), // "preview"
QT_MOC_LITERAL(18, 127, 4), // "File"
QT_MOC_LITERAL(19, 132, 9), // "Directory"
QT_MOC_LITERAL(20, 142, 4), // "Open"
QT_MOC_LITERAL(21, 147, 4) // "Save"

    },
    "FileChooser\0fileNameChanged\0\0setFileName\0"
    "fn\0setMode\0Mode\0m\0setType\0Type\0t\0"
    "setPreview\0rhs\0chooseFile\0mode\0type\0"
    "fileName\0preview\0File\0Directory\0Open\0"
    "Save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileChooser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   60, // properties
       2,   72, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
      11,    1,   56,    2, 0x0a /* Public */,
      13,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 6, 0x0009510b,
      15, 0x80000000 | 9, 0x0009510b,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    2,   82,
       9,    9, 0x0,    2,   86,

 // enum data: key, value
      18, uint(FileChooser::File),
      19, uint(FileChooser::Directory),
      20, uint(FileChooser::Open),
      21, uint(FileChooser::Save),

       0        // eod
};

void FileChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileChooser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 3: _t->setType((*reinterpret_cast< Type(*)>(_a[1]))); break;
        case 4: _t->setPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->chooseFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileChooser::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileChooser::fileNameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileChooser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->preview(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileChooser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 1: _t->setType(*reinterpret_cast< Type*>(_v)); break;
        case 2: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPreview(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FileChooser::staticMetaObject = { {
    &QHBoxLayout::staticMetaObject,
    qt_meta_stringdata_FileChooser.data,
    qt_meta_data_FileChooser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileChooser.stringdata0))
        return static_cast<void*>(this);
    return QHBoxLayout::qt_metacast(_clname);
}

int FileChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHBoxLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileChooser::fileNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
