/****************************************************************************
** Meta object code from reading C++ file 'dialoggrayscalethreshold.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/dialoggrayscalethreshold.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoggrayscalethreshold.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogGrayscaleThreshold_t {
    QByteArrayData data[11];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogGrayscaleThreshold_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogGrayscaleThreshold_t qt_meta_stringdata_DialogGrayscaleThreshold = {
    {
QT_MOC_LITERAL(0, 0, 24), // "DialogGrayscaleThreshold"
QT_MOC_LITERAL(1, 25, 27), // "signalSetGrayscaleThreshold"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 35), // "signalSetGrayscaleThresholdFi..."
QT_MOC_LITERAL(4, 90, 7), // "QImage&"
QT_MOC_LITERAL(5, 98, 31), // "emitSignalSetGrayscaleThreshold"
QT_MOC_LITERAL(6, 130, 16), // "setLineEditValue"
QT_MOC_LITERAL(7, 147, 14), // "setSliderValue"
QT_MOC_LITERAL(8, 162, 21), // "setGrayscaleThreshold"
QT_MOC_LITERAL(9, 184, 7), // "QImage*"
QT_MOC_LITERAL(10, 192, 11) // "originImage"

    },
    "DialogGrayscaleThreshold\0"
    "signalSetGrayscaleThreshold\0\0"
    "signalSetGrayscaleThresholdFinished\0"
    "QImage&\0emitSignalSetGrayscaleThreshold\0"
    "setLineEditValue\0setSliderValue\0"
    "setGrayscaleThreshold\0QImage*\0originImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogGrayscaleThreshold[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void DialogGrayscaleThreshold::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogGrayscaleThreshold *_t = static_cast<DialogGrayscaleThreshold *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSetGrayscaleThreshold(); break;
        case 1: _t->signalSetGrayscaleThresholdFinished((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->emitSignalSetGrayscaleThreshold(); break;
        case 3: _t->setLineEditValue(); break;
        case 4: _t->setSliderValue(); break;
        case 5: _t->setGrayscaleThreshold((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DialogGrayscaleThreshold::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogGrayscaleThreshold::signalSetGrayscaleThreshold)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DialogGrayscaleThreshold::*_t)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogGrayscaleThreshold::signalSetGrayscaleThresholdFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DialogGrayscaleThreshold::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogGrayscaleThreshold.data,
      qt_meta_data_DialogGrayscaleThreshold,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogGrayscaleThreshold::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogGrayscaleThreshold::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogGrayscaleThreshold.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogGrayscaleThreshold::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void DialogGrayscaleThreshold::signalSetGrayscaleThreshold()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogGrayscaleThreshold::signalSetGrayscaleThresholdFinished(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
