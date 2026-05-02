/****************************************************************************
** Meta object code from reading C++ file 'adminmenu.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../adminmenu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9AdminmenuE_t {};
} // unnamed namespace

template <> constexpr inline auto Adminmenu::qt_create_metaobjectdata<qt_meta_tag_ZN9AdminmenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Adminmenu",
        "on_btnBack_clicked",
        "",
        "on_pushButton_addplane_clicked",
        "on_pushButton_updateplane_clicked",
        "on_pushButton_addflight_clicked",
        "on_pushButton_updateflight_clicked",
        "on_pushButton_searchadmin_clicked",
        "on_pushButton_addplane_2_clicked",
        "on_pushButton_searchcode_clicked",
        "on_pushButton_updateplane_2_clicked",
        "on_btnAddFlight_clicked",
        "on_btnFindFlight_clicked",
        "on_btnUpdateFlight_clicked",
        "on_btnSearch_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_btnBack_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_addplane_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_updateplane_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_addflight_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_updateflight_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_searchadmin_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_addplane_2_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_searchcode_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_updateplane_2_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnAddFlight_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnFindFlight_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnUpdateFlight_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSearch_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Adminmenu, qt_meta_tag_ZN9AdminmenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Adminmenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9AdminmenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9AdminmenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9AdminmenuE_t>.metaTypes,
    nullptr
} };

void Adminmenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Adminmenu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_btnBack_clicked(); break;
        case 1: _t->on_pushButton_addplane_clicked(); break;
        case 2: _t->on_pushButton_updateplane_clicked(); break;
        case 3: _t->on_pushButton_addflight_clicked(); break;
        case 4: _t->on_pushButton_updateflight_clicked(); break;
        case 5: _t->on_pushButton_searchadmin_clicked(); break;
        case 6: _t->on_pushButton_addplane_2_clicked(); break;
        case 7: _t->on_pushButton_searchcode_clicked(); break;
        case 8: _t->on_pushButton_updateplane_2_clicked(); break;
        case 9: _t->on_btnAddFlight_clicked(); break;
        case 10: _t->on_btnFindFlight_clicked(); break;
        case 11: _t->on_btnUpdateFlight_clicked(); break;
        case 12: _t->on_btnSearch_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Adminmenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Adminmenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9AdminmenuE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Adminmenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
