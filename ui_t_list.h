/********************************************************************************
** Form generated from reading UI file 't_list.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_LIST_H
#define UI_T_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_t_list
{
public:

    void setupUi(QWidget *t_list)
    {
        if (t_list->objectName().isEmpty())
            t_list->setObjectName(QString::fromUtf8("t_list"));
        t_list->resize(400, 300);

        retranslateUi(t_list);

        QMetaObject::connectSlotsByName(t_list);
    } // setupUi

    void retranslateUi(QWidget *t_list)
    {
        t_list->setWindowTitle(QApplication::translate("t_list", "tournaments list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class t_list: public Ui_t_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_LIST_H
