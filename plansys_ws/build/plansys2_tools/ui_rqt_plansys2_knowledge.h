/********************************************************************************
** Form generated from reading UI file 'rqt_plansys2_knowledge.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RQT_PLANSYS2_KNOWLEDGE_H
#define UI_RQT_PLANSYS2_KNOWLEDGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RqtPlansys2Knowledge
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *RqtPlansys2Knowledge)
    {
        if (RqtPlansys2Knowledge->objectName().isEmpty())
            RqtPlansys2Knowledge->setObjectName(QString::fromUtf8("RqtPlansys2Knowledge"));
        gridLayoutWidget = new QWidget(RqtPlansys2Knowledge);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 791, 431));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(RqtPlansys2Knowledge);

        QMetaObject::connectSlotsByName(RqtPlansys2Knowledge);
    } // setupUi

    void retranslateUi(QWidget *RqtPlansys2Knowledge)
    {
        RqtPlansys2Knowledge->setWindowTitle(QCoreApplication::translate("RqtPlansys2Knowledge", "RqtPlansys2Knowledge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RqtPlansys2Knowledge: public Ui_RqtPlansys2Knowledge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RQT_PLANSYS2_KNOWLEDGE_H
