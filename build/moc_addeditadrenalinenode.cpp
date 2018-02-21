/****************************************************************************
** Meta object code from reading C++ file 'addeditadrenalinenode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/addeditadrenalinenode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addeditadrenalinenode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddEditAdrenalineNode_t {
    QByteArrayData data[7];
    char stringdata[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AddEditAdrenalineNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AddEditAdrenalineNode_t qt_meta_stringdata_AddEditAdrenalineNode = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 19),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 23),
QT_MOC_LITERAL(4, 67, 36),
QT_MOC_LITERAL(5, 104, 36),
QT_MOC_LITERAL(6, 141, 35)
    },
    "AddEditAdrenalineNode\0on_okButton_clicked\0"
    "\0on_cancelButton_clicked\0"
    "on_AddEditAddressPasteButton_clicked\0"
    "on_AddEditPrivkeyPasteButton_clicked\0"
    "on_AddEditTxhashPasteButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddEditAdrenalineNode[] = {

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
       1,    0,   39,    2, 0x08,
       3,    0,   40,    2, 0x08,
       4,    0,   41,    2, 0x08,
       5,    0,   42,    2, 0x08,
       6,    0,   43,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddEditAdrenalineNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddEditAdrenalineNode *_t = static_cast<AddEditAdrenalineNode *>(_o);
        switch (_id) {
        case 0: _t->on_okButton_clicked(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: _t->on_AddEditAddressPasteButton_clicked(); break;
        case 3: _t->on_AddEditPrivkeyPasteButton_clicked(); break;
        case 4: _t->on_AddEditTxhashPasteButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddEditAdrenalineNode::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddEditAdrenalineNode.data,
      qt_meta_data_AddEditAdrenalineNode,  qt_static_metacall, 0, 0}
};


const QMetaObject *AddEditAdrenalineNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddEditAdrenalineNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddEditAdrenalineNode.stringdata))
        return static_cast<void*>(const_cast< AddEditAdrenalineNode*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddEditAdrenalineNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
