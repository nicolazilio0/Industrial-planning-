/********************************************************************************
** Form generated from reading UI file 'rqt_plansys2_performers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RQT_PLANSYS2_PERFORMERS_H
#define UI_RQT_PLANSYS2_PERFORMERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RqtPlansys2Performers
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *RqtPlansys2Performers)
    {
        if (RqtPlansys2Performers->objectName().isEmpty())
            RqtPlansys2Performers->setObjectName(QString::fromUtf8("RqtPlansys2Performers"));
        gridLayoutWidget = new QWidget(RqtPlansys2Performers);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 791, 431));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(RqtPlansys2Performers);

        QMetaObject::connectSlotsByName(RqtPlansys2Performers);
    } // setupUi

    void retranslateUi(QWidget *RqtPlansys2Performers)
    {
        RqtPlansys2Performers->setWindowTitle(QCoreApplication::translate("RqtPlansys2Performers", "RqtPlansys2Performers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RqtPlansys2Performers: public Ui_RqtPlansys2Performers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RQT_PLANSYS2_PERFORMERS_H
