/****************************************************************************
** Meta object code from reading C++ file 'CsvConverterDialogImpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/CsvConverterDialogImpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CsvConverterDialogImpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CsvConverterDialogImpl_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CsvConverterDialogImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CsvConverterDialogImpl_t qt_meta_stringdata_CsvConverterDialogImpl = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CsvConverterDialogImpl"
QT_MOC_LITERAL(1, 23, 15), // "csvFileSelected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "fileName"
QT_MOC_LITERAL(4, 49, 6), // "accept"
QT_MOC_LITERAL(5, 56, 6), // "reject"
QT_MOC_LITERAL(6, 63, 11), // "updateTable"
QT_MOC_LITERAL(7, 75, 13), // "doTypeToggled"
QT_MOC_LITERAL(8, 89, 3) // "rhs"

    },
    "CsvConverterDialogImpl\0csvFileSelected\0"
    "\0fileName\0accept\0reject\0updateTable\0"
    "doTypeToggled\0rhs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CsvConverterDialogImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void CsvConverterDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CsvConverterDialogImpl *_t = static_cast<CsvConverterDialogImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->csvFileSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->reject(); break;
        case 3: _t->updateTable(); break;
        case 4: _t->doTypeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CsvConverterDialogImpl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CsvConverterDialogImpl.data,
      qt_meta_data_CsvConverterDialogImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CsvConverterDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CsvConverterDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CsvConverterDialogImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ConvertCsvDialog"))
        return static_cast< Ui::ConvertCsvDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int CsvConverterDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
