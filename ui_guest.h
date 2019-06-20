/********************************************************************************
** Form generated from reading UI file 'guest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUEST_H
#define UI_GUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guest
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *select;
    QRadioButton *football;
    QRadioButton *pingpong;
    QRadioButton *badminton;
    QPushButton *ok;

    void setupUi(QWidget *guest)
    {
        if (guest->objectName().isEmpty())
            guest->setObjectName(QString::fromUtf8("guest"));
        guest->resize(400, 300);
        widget = new QWidget(guest);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 70, 79, 113));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        select = new QLabel(widget);
        select->setObjectName(QString::fromUtf8("select"));

        verticalLayout->addWidget(select);

        football = new QRadioButton(widget);
        football->setObjectName(QString::fromUtf8("football"));

        verticalLayout->addWidget(football);

        pingpong = new QRadioButton(widget);
        pingpong->setObjectName(QString::fromUtf8("pingpong"));

        verticalLayout->addWidget(pingpong);

        badminton = new QRadioButton(widget);
        badminton->setObjectName(QString::fromUtf8("badminton"));

        verticalLayout->addWidget(badminton);

        ok = new QPushButton(widget);
        ok->setObjectName(QString::fromUtf8("ok"));

        verticalLayout->addWidget(ok);


        retranslateUi(guest);

        QMetaObject::connectSlotsByName(guest);
    } // setupUi

    void retranslateUi(QWidget *guest)
    {
        guest->setWindowTitle(QApplication::translate("guest", "guest", nullptr));
        select->setText(QApplication::translate("guest", "select the sprot", nullptr));
        football->setText(QApplication::translate("guest", "football", nullptr));
        pingpong->setText(QApplication::translate("guest", "pingpong", nullptr));
        badminton->setText(QApplication::translate("guest", "badminton", nullptr));
        ok->setText(QApplication::translate("guest", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guest: public Ui_guest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUEST_H
