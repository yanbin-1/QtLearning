/****************************************************************************
** Meta object code from reading C++ file 'mywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TableWidget/mywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyWidget_t {
    QByteArrayData data[14];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyWidget_t qt_meta_stringdata_MyWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyWidget"
QT_MOC_LITERAL(1, 9, 23), // "on_btnSetHeader_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_btnSetRows_clicked"
QT_MOC_LITERAL(4, 56, 25), // "on_chkBoxRowColor_clicked"
QT_MOC_LITERAL(5, 82, 7), // "checked"
QT_MOC_LITERAL(6, 90, 21), // "on_btnIniData_clicked"
QT_MOC_LITERAL(7, 112, 23), // "on_btnInsertRow_clicked"
QT_MOC_LITERAL(8, 136, 23), // "on_btnAppendRow_clicked"
QT_MOC_LITERAL(9, 160, 23), // "on_btnDelCurRow_clicked"
QT_MOC_LITERAL(10, 184, 23), // "on_btnDelAllRow_clicked"
QT_MOC_LITERAL(11, 208, 23), // "on_btnAutoHeght_clicked"
QT_MOC_LITERAL(12, 232, 23), // "on_btnAutoWidth_clicked"
QT_MOC_LITERAL(13, 256, 24) // "on_btnReadToEdit_clicked"

    },
    "MyWidget\0on_btnSetHeader_clicked\0\0"
    "on_btnSetRows_clicked\0on_chkBoxRowColor_clicked\0"
    "checked\0on_btnIniData_clicked\0"
    "on_btnInsertRow_clicked\0on_btnAppendRow_clicked\0"
    "on_btnDelCurRow_clicked\0on_btnDelAllRow_clicked\0"
    "on_btnAutoHeght_clicked\0on_btnAutoWidth_clicked\0"
    "on_btnReadToEdit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyWidget *_t = static_cast<MyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSetHeader_clicked(); break;
        case 1: _t->on_btnSetRows_clicked(); break;
        case 2: _t->on_chkBoxRowColor_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_btnIniData_clicked(); break;
        case 4: _t->on_btnInsertRow_clicked(); break;
        case 5: _t->on_btnAppendRow_clicked(); break;
        case 6: _t->on_btnDelCurRow_clicked(); break;
        case 7: _t->on_btnDelAllRow_clicked(); break;
        case 8: _t->on_btnAutoHeght_clicked(); break;
        case 9: _t->on_btnAutoWidth_clicked(); break;
        case 10: _t->on_btnReadToEdit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyWidget.data,
      qt_meta_data_MyWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyWidget.stringdata0))
        return static_cast<void*>(const_cast< MyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
