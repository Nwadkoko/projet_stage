/****************************************************************************
** Meta object code from reading C++ file 'connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IHM_Peritox/connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Connection_t {
    QByteArrayData data[18];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connection_t qt_meta_stringdata_Connection = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Connection"
QT_MOC_LITERAL(1, 11, 16), // "ipAddressChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "getIpAddress"
QT_MOC_LITERAL(4, 42, 12), // "setIpAddress"
QT_MOC_LITERAL(5, 55, 12), // "newIpAddress"
QT_MOC_LITERAL(6, 68, 7), // "getPort"
QT_MOC_LITERAL(7, 76, 7), // "setPort"
QT_MOC_LITERAL(8, 84, 7), // "newPort"
QT_MOC_LITERAL(9, 92, 10), // "connection"
QT_MOC_LITERAL(10, 103, 4), // "port"
QT_MOC_LITERAL(11, 108, 5), // "char*"
QT_MOC_LITERAL(12, 114, 10), // "serverName"
QT_MOC_LITERAL(13, 125, 8), // "readData"
QT_MOC_LITERAL(14, 134, 4), // "data"
QT_MOC_LITERAL(15, 139, 6), // "maxlen"
QT_MOC_LITERAL(16, 146, 9), // "writeData"
QT_MOC_LITERAL(17, 156, 9) // "closeSock"

    },
    "Connection\0ipAddressChanged\0\0getIpAddress\0"
    "setIpAddress\0newIpAddress\0getPort\0"
    "setPort\0newPort\0connection\0port\0char*\0"
    "serverName\0readData\0data\0maxlen\0"
    "writeData\0closeSock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
       9,    2,   74,    2, 0x0a /* Public */,
      13,    2,   79,    2, 0x0a /* Public */,
      16,    2,   84,    2, 0x0a /* Public */,
      17,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Int,
    QMetaType::Int, QMetaType::UShort, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Long,   14,   15,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Long,   14,   15,
    QMetaType::Void,

       0        // eod
};

void Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Connection *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ipAddressChanged(); break;
        case 1: { QString _r = _t->getIpAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setIpAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->getPort();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setPort((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { int _r = _t->connection();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->connection((*reinterpret_cast< unsigned short(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->readData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 8: _t->writeData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 9: _t->closeSock(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::ipAddressChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Connection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Connection.data,
      qt_meta_data_Connection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Connection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Connection::ipAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
