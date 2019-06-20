/********************************************************************************
** Form generated from reading UI file 'tour_list.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUR_LIST_H
#define UI_TOUR_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_tour_list
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *list;

    void setupUi(QDialog *tour_list)
    {
        if (tour_list->objectName().isEmpty())
            tour_list->setObjectName(QString::fromUtf8("tour_list"));
        tour_list->resize(400, 300);
        horizontalLayout = new QHBoxLayout(tour_list);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QListWidget(tour_list);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout->addWidget(list);


        retranslateUi(tour_list);

        QMetaObject::connectSlotsByName(tour_list);
    } // setupUi

    void retranslateUi(QDialog *tour_list)
    {
        tour_list->setWindowTitle(QApplication::translate("tour_list", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tour_list: public Ui_tour_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOUR_LIST_H
