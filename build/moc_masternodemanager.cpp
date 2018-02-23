/****************************************************************************
** Meta object code from reading C++ file 'masternodemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/masternodemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeManager_t {
    QByteArrayData data[20];
    char stringdata[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MasternodeManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MasternodeManager_t qt_meta_stringdata_MasternodeManager = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 14),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 20),
QT_MOC_LITERAL(4, 55, 5),
QT_MOC_LITERAL(5, 61, 4),
QT_MOC_LITERAL(6, 66, 7),
QT_MOC_LITERAL(7, 74, 6),
QT_MOC_LITERAL(8, 81, 7),
QT_MOC_LITERAL(9, 89, 13),
QT_MOC_LITERAL(10, 103, 16),
QT_MOC_LITERAL(11, 120, 6),
QT_MOC_LITERAL(12, 127, 23),
QT_MOC_LITERAL(13, 151, 11),
QT_MOC_LITERAL(14, 163, 10),
QT_MOC_LITERAL(15, 174, 15),
QT_MOC_LITERAL(16, 190, 23),
QT_MOC_LITERAL(17, 214, 22),
QT_MOC_LITERAL(18, 237, 25),
QT_MOC_LITERAL(19, 263, 37)
    },
    "MasternodeManager\0updateNodeList\0\0"
    "updateAdrenalineNode\0alias\0addr\0privkey\0"
    "txHash\0txIndex\0rewardAddress\0"
    "rewardPercentage\0status\0on_UpdateButton_clicked\0"
    "copyAddress\0copyPubkey\0showContextMenu\0"
    "on_createButton_clicked\0on_startButton_clicked\0"
    "on_startAllButton_clicked\0"
    "on_tableWidget_2_itemSelectionChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeManager[] = {

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
       1,    0,   64,    2, 0x0a,
       3,    8,   65,    2, 0x0a,
      12,    0,   82,    2, 0x0a,
      13,    0,   83,    2, 0x0a,
      14,    0,   84,    2, 0x0a,
      15,    1,   85,    2, 0x08,
      16,    0,   88,    2, 0x08,
      17,    0,   89,    2, 0x08,
      18,    0,   90,    2, 0x08,
      19,    0,   91,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeManager *_t = static_cast<MasternodeManager *>(_o);
        switch (_id) {
        case 0: _t->updateNodeList(); break;
        case 1: _t->updateAdrenalineNode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 2: _t->on_UpdateButton_clicked(); break;
        case 3: _t->copyAddress(); break;
        case 4: _t->copyPubkey(); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->on_createButton_clicked(); break;
        case 7: _t->on_startButton_clicked(); break;
        case 8: _t->on_startAllButton_clicked(); break;
        case 9: _t->on_tableWidget_2_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeManager.data,
      qt_meta_data_MasternodeManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *MasternodeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeManager.stringdata))
        return static_cast<void*>(const_cast< MasternodeManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
