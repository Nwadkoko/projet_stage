/****************************************************************************
** Meta object code from reading C++ file 'generator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IHM_Peritox/generator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Generator_t {
    QByteArrayData data[11];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Generator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Generator_t qt_meta_stringdata_Generator = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Generator"
QT_MOC_LITERAL(1, 10, 8), // "setOnOff"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "char*"
QT_MOC_LITERAL(4, 26, 6), // "buffer"
QT_MOC_LITERAL(5, 33, 4), // "int*"
QT_MOC_LITERAL(6, 38, 6), // "maxlen"
QT_MOC_LITERAL(7, 45, 4), // "flag"
QT_MOC_LITERAL(8, 50, 7), // "getFreq"
QT_MOC_LITERAL(9, 58, 7), // "setFreq"
QT_MOC_LITERAL(10, 66, 4) // "freq"

    },
    "Generator\0setOnOff\0\0char*\0buffer\0int*\0"
    "maxlen\0flag\0getFreq\0setFreq\0freq"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Generator[] = {

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
       1,    3,   29,    2, 0x0a /* Public */,
       8,    2,   36,    2, 0x0a /* Public */,
       9,    3,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 3,    4,    6,   10,

       0        // eod
};

void Generator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Generator *_t = static_cast<Generator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setOnOff((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3]))); break;
        case 1: _t->getFreq((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 2: _t->setFreq((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Generator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Generator.data,
      qt_meta_data_Generator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Generator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Generator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Generator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Generator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
