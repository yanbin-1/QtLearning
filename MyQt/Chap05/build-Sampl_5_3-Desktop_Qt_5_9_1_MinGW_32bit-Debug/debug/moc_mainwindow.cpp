/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Sampl_5_3/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_theSelection_Changed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "cur"
QT_MOC_LITERAL(4, 40, 3), // "pre"
QT_MOC_LITERAL(5, 44, 20), // "on_actOpen_triggered"
QT_MOC_LITERAL(6, 65, 20), // "on_actSave_triggered"
QT_MOC_LITERAL(7, 86, 25), // "on_actModelData_triggered"
QT_MOC_LITERAL(8, 112, 22), // "on_actInsert_triggered"
QT_MOC_LITERAL(9, 135, 22), // "on_actAppend_triggered"
QT_MOC_LITERAL(10, 158, 22), // "on_actDelete_triggered"
QT_MOC_LITERAL(11, 181, 21), // "on_actAlign_triggered"
QT_MOC_LITERAL(12, 203, 13), // "Qt::Alignment"
QT_MOC_LITERAL(13, 217, 14), // "atextAlignment"
QT_MOC_LITERAL(14, 232, 25), // "on_actAlignLeft_triggered"
QT_MOC_LITERAL(15, 258, 27), // "on_actAlignCenter_triggered"
QT_MOC_LITERAL(16, 286, 26), // "on_actAlignRight_triggered"
QT_MOC_LITERAL(17, 313, 24), // "on_actFontBold_triggered"
QT_MOC_LITERAL(18, 338, 20) // "on_actExit_triggered"

    },
    "MainWindow\0on_theSelection_Changed\0\0"
    "cur\0pre\0on_actOpen_triggered\0"
    "on_actSave_triggered\0on_actModelData_triggered\0"
    "on_actInsert_triggered\0on_actAppend_triggered\0"
    "on_actDelete_triggered\0on_actAlign_triggered\0"
    "Qt::Alignment\0atextAlignment\0"
    "on_actAlignLeft_triggered\0"
    "on_actAlignCenter_triggered\0"
    "on_actAlignRight_triggered\0"
    "on_actFontBold_triggered\0on_actExit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x08 /* Private */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    0,   96,    2, 0x08 /* Private */,
      18,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_theSelection_Changed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->on_actOpen_triggered(); break;
        case 2: _t->on_actSave_triggered(); break;
        case 3: _t->on_actModelData_triggered(); break;
        case 4: _t->on_actInsert_triggered(); break;
        case 5: _t->on_actAppend_triggered(); break;
        case 6: _t->on_actDelete_triggered(); break;
        case 7: _t->on_actAlign_triggered((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 8: _t->on_actAlignLeft_triggered(); break;
        case 9: _t->on_actAlignCenter_triggered(); break;
        case 10: _t->on_actAlignRight_triggered(); break;
        case 11: _t->on_actFontBold_triggered(); break;
        case 12: _t->on_actExit_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
