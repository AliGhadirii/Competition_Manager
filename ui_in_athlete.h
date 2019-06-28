/********************************************************************************
** Form generated from reading UI file 'in_athlete.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IN_ATHLETE_H
#define UI_IN_ATHLETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_in_athlete
{
public:

    void setupUi(QWidget *in_athlete)
    {
        if (in_athlete->objectName().isEmpty())
            in_athlete->setObjectName(QString::fromUtf8("in_athlete"));
        in_athlete->resize(400, 300);

        retranslateUi(in_athlete);

        QMetaObject::connectSlotsByName(in_athlete);
    } // setupUi

    void retranslateUi(QWidget *in_athlete)
    {
        in_athlete->setWindowTitle(QApplication::translate("in_athlete", "athlete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class in_athlete: public Ui_in_athlete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IN_ATHLETE_H
