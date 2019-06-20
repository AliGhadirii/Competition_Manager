/********************************************************************************
** Form generated from reading UI file 'in_organizer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IN_ORGANIZER_H
#define UI_IN_ORGANIZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_in_organizer
{
public:

    void setupUi(QWidget *in_organizer)
    {
        if (in_organizer->objectName().isEmpty())
            in_organizer->setObjectName(QString::fromUtf8("in_organizer"));
        in_organizer->resize(400, 300);

        retranslateUi(in_organizer);

        QMetaObject::connectSlotsByName(in_organizer);
    } // setupUi

    void retranslateUi(QWidget *in_organizer)
    {
        in_organizer->setWindowTitle(QApplication::translate("in_organizer", "organizer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class in_organizer: public Ui_in_organizer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IN_ORGANIZER_H
