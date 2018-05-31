/****************************************************************************
** Meta object code from reading C++ file 'amplificator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IHM_Peritox/amplificator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amplificator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Amplificator_t {
    QByteArrayData data[19];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Amplificator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Amplificator_t qt_meta_stringdata_Amplificator = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Amplificator"
QT_MOC_LITERAL(1, 13, 15), // "setValueChannel"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 7), // "channel"
QT_MOC_LITERAL(5, 44, 15), // "getValueChannel"
QT_MOC_LITERAL(6, 60, 4), // "ping"
QT_MOC_LITERAL(7, 65, 7), // "lecture"
QT_MOC_LITERAL(8, 73, 5), // "char*"
QT_MOC_LITERAL(9, 79, 6), // "sortie"
QT_MOC_LITERAL(10, 86, 13), // "decodeLecture"
QT_MOC_LITERAL(11, 100, 5), // "trame"
QT_MOC_LITERAL(12, 106, 5), // "stock"
QT_MOC_LITERAL(13, 112, 9), // "puissance"
QT_MOC_LITERAL(14, 122, 2), // "nb"
QT_MOC_LITERAL(15, 125, 13), // "puissanceChar"
QT_MOC_LITERAL(16, 139, 5), // "plage"
QT_MOC_LITERAL(17, 145, 11), // "commutation"
QT_MOC_LITERAL(18, 157, 4) // "voie"

    },
    "Amplificator\0setValueChannel\0\0value\0"
    "channel\0getValueChannel\0ping\0lecture\0"
    "char*\0sortie\0decodeLecture\0trame\0stock\0"
    "puissance\0nb\0puissanceChar\0plage\0"
    "commutation\0voie"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Amplificator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       5,    1,   69,    2, 0x0a /* Public */,
       6,    0,   72,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      13,    2,   82,    2, 0x0a /* Public */,
      15,    1,   87,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x0a /* Public */,
      17,    2,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Int,    3,    4,
    QMetaType::Int, QMetaType::Int,    4,
    QMetaType::QString,
    0x80000000 | 8, QMetaType::Int,    9,
    QMetaType::QString, 0x80000000 | 8,   11,
    QMetaType::QString, QMetaType::Int,    9,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   14,    9,
    0x80000000 | 8, QMetaType::QString,   13,
    QMetaType::QString, QMetaType::QString,   14,
    QMetaType::QString, QMetaType::Int, QMetaType::QString,    9,   18,

       0        // eod
};

void Amplificator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Amplificator *_t = static_cast<Amplificator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValueChannel((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: { int _r = _t->getValueChannel((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->ping();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { char* _r = _t->lecture((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->decodeLecture((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->stock((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->puissance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { char* _r = _t->puissanceChar((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char**>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->plage((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->commutation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Amplificator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Amplificator.data,
      qt_meta_data_Amplificator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Amplificator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Amplificator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Amplificator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Amplificator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
