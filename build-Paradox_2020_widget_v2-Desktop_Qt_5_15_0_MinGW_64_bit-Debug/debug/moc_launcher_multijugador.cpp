/****************************************************************************
** Meta object code from reading C++ file 'launcher_multijugador.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Paradox_2020_widget_v2/launcher_multijugador.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'launcher_multijugador.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Launcher_multijugador_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Launcher_multijugador_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Launcher_multijugador_t qt_meta_stringdata_Launcher_multijugador = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Launcher_multijugador"
QT_MOC_LITERAL(1, 22, 14), // "Actualizacion1"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "Actualizacion2"
QT_MOC_LITERAL(4, 53, 16), // "Actualizacion2_2"
QT_MOC_LITERAL(5, 70, 14), // "Actualizacion3"
QT_MOC_LITERAL(6, 85, 16), // "Actualizacion3_3"
QT_MOC_LITERAL(7, 102, 14), // "Actualizacion4"
QT_MOC_LITERAL(8, 117, 16) // "Actualizacion4_2"

    },
    "Launcher_multijugador\0Actualizacion1\0"
    "\0Actualizacion2\0Actualizacion2_2\0"
    "Actualizacion3\0Actualizacion3_3\0"
    "Actualizacion4\0Actualizacion4_2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Launcher_multijugador[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Launcher_multijugador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Launcher_multijugador *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Actualizacion1(); break;
        case 1: _t->Actualizacion2(); break;
        case 2: _t->Actualizacion2_2(); break;
        case 3: _t->Actualizacion3(); break;
        case 4: _t->Actualizacion3_3(); break;
        case 5: _t->Actualizacion4(); break;
        case 6: _t->Actualizacion4_2(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Launcher_multijugador::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_Launcher_multijugador.data,
    qt_meta_data_Launcher_multijugador,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Launcher_multijugador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Launcher_multijugador::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Launcher_multijugador.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int Launcher_multijugador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
