/********************************************************************************
** Form generated from reading UI file 'rqt_plansys2_plan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RQT_PLANSYS2_PLAN_H
#define UI_RQT_PLANSYS2_PLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RqtPlansys2Plan
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *RqtPlansys2Plan)
    {
        if (RqtPlansys2Plan->objectName().isEmpty())
            RqtPlansys2Plan->setObjectName(QString::fromUtf8("RqtPlansys2Plan"));
        gridLayoutWidget = new QWidget(RqtPlansys2Plan);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 1600, 431));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(RqtPlansys2Plan);

        QMetaObject::connectSlotsByName(RqtPlansys2Plan);
    } // setupUi

    void retranslateUi(QWidget *RqtPlansys2Plan)
    {
        RqtPlansys2Plan->setWindowTitle(QCoreApplication::translate("RqtPlansys2Plan", "RqtPlansys2Plan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RqtPlansys2Plan: public Ui_RqtPlansys2Plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RQT_PLANSYS2_PLAN_H
