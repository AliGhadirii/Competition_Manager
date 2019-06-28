/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QFormLayout *formLayout;
    QLabel *select;
    QRadioButton *football;
    QRadioButton *pingpong;
    QRadioButton *badminton;
    QLabel *l_name;
    QLineEdit *name;
    QLabel *l_username;
    QLineEdit *username;
    QLabel *l_password;
    QLineEdit *password;
    QPushButton *ok;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(400, 300);
        formLayout = new QFormLayout(signup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        select = new QLabel(signup);
        select->setObjectName(QString::fromUtf8("select"));

        formLayout->setWidget(0, QFormLayout::FieldRole, select);

        football = new QRadioButton(signup);
        football->setObjectName(QString::fromUtf8("football"));

        formLayout->setWidget(1, QFormLayout::FieldRole, football);

        pingpong = new QRadioButton(signup);
        pingpong->setObjectName(QString::fromUtf8("pingpong"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pingpong);

        badminton = new QRadioButton(signup);
        badminton->setObjectName(QString::fromUtf8("badminton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, badminton);

        l_name = new QLabel(signup);
        l_name->setObjectName(QString::fromUtf8("l_name"));

        formLayout->setWidget(4, QFormLayout::LabelRole, l_name);

        name = new QLineEdit(signup);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(4, QFormLayout::FieldRole, name);

        l_username = new QLabel(signup);
        l_username->setObjectName(QString::fromUtf8("l_username"));

        formLayout->setWidget(5, QFormLayout::LabelRole, l_username);

        username = new QLineEdit(signup);
        username->setObjectName(QString::fromUtf8("username"));

        formLayout->setWidget(5, QFormLayout::FieldRole, username);

        l_password = new QLabel(signup);
        l_password->setObjectName(QString::fromUtf8("l_password"));

        formLayout->setWidget(6, QFormLayout::LabelRole, l_password);

        password = new QLineEdit(signup);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(6, QFormLayout::FieldRole, password);

        ok = new QPushButton(signup);
        ok->setObjectName(QString::fromUtf8("ok"));

        formLayout->setWidget(7, QFormLayout::FieldRole, ok);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "sign up", nullptr));
        select->setText(QApplication::translate("signup", "select your sport", nullptr));
        football->setText(QApplication::translate("signup", "football", nullptr));
        pingpong->setText(QApplication::translate("signup", "pingpong", nullptr));
        badminton->setText(QApplication::translate("signup", "badminton", nullptr));
        l_name->setText(QApplication::translate("signup", "name", nullptr));
        l_username->setText(QApplication::translate("signup", "user name", nullptr));
        l_password->setText(QApplication::translate("signup", "password", nullptr));
        ok->setText(QApplication::translate("signup", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
