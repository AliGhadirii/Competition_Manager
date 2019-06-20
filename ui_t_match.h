/********************************************************************************
** Form generated from reading UI file 't_match.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_MATCH_H
#define UI_T_MATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_t_match
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *list;

    void setupUi(QDialog *t_match)
    {
        if (t_match->objectName().isEmpty())
            t_match->setObjectName(QString::fromUtf8("t_match"));
        t_match->resize(400, 300);
        horizontalLayout = new QHBoxLayout(t_match);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QListWidget(t_match);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout->addWidget(list);


        retranslateUi(t_match);

        QMetaObject::connectSlotsByName(t_match);
    } // setupUi

    void retranslateUi(QDialog *t_match)
    {
        t_match->setWindowTitle(QApplication::translate("t_match", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class t_match: public Ui_t_match {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_MATCH_H
