/****************************************************************************
** Meta object code from reading C++ file 'RangeLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/RangeLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RangeLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RangeLineEdit_t {
    QByteArrayData data[16];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RangeLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RangeLineEdit_t qt_meta_stringdata_RangeLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RangeLineEdit"
QT_MOC_LITERAL(1, 14, 15), // "rangeAlreadySet"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "setText"
QT_MOC_LITERAL(4, 39, 4), // "text"
QT_MOC_LITERAL(5, 44, 10), // "setRangeOk"
QT_MOC_LITERAL(6, 55, 3), // "rhs"
QT_MOC_LITERAL(7, 59, 11), // "setEditType"
QT_MOC_LITERAL(8, 71, 8), // "EditType"
QT_MOC_LITERAL(9, 80, 4), // "type"
QT_MOC_LITERAL(10, 85, 10), // "setEditMin"
QT_MOC_LITERAL(11, 96, 3), // "min"
QT_MOC_LITERAL(12, 100, 10), // "setEditMax"
QT_MOC_LITERAL(13, 111, 3), // "max"
QT_MOC_LITERAL(14, 115, 15), // "setRangeEnabled"
QT_MOC_LITERAL(15, 131, 15) // "setRangeAllowed"

    },
    "RangeLineEdit\0rangeAlreadySet\0\0setText\0"
    "text\0setRangeOk\0rhs\0setEditType\0"
    "EditType\0type\0setEditMin\0min\0setEditMax\0"
    "max\0setRangeEnabled\0setRangeAllowed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RangeLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   57,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      14,    1,   72,    2, 0x0a /* Public */,
      15,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void RangeLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RangeLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangeAlreadySet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setRangeOk((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setEditType((*reinterpret_cast< EditType(*)>(_a[1]))); break;
        case 4: _t->setEditMin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setEditMax((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setRangeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setRangeAllowed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RangeLineEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RangeLineEdit::rangeAlreadySet)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RangeLineEdit::staticMetaObject = { {
    &QLineEdit::staticMetaObject,
    qt_meta_stringdata_RangeLineEdit.data,
    qt_meta_data_RangeLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RangeLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RangeLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RangeLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int RangeLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RangeLineEdit::rangeAlreadySet(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
