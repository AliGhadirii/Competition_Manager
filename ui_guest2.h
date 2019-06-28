/********************************************************************************
** Form generated from reading UI file 'guest2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUEST2_H
#define UI_GUEST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guest2
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *t_ranking;
    QPushButton *ranking;
    QPushButton *results;

    void setupUi(QWidget *guest2)
    {
        if (guest2->objectName().isEmpty())
            guest2->setObjectName(QString::fromUtf8("guest2"));
        guest2->resize(400, 300);
        horizontalLayout_2 = new QHBoxLayout(guest2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        t_ranking = new QPushButton(guest2);
        t_ranking->setObjectName(QString::fromUtf8("t_ranking"));

        horizontalLayout->addWidget(t_ranking);

        ranking = new QPushButton(guest2);
        ranking->setObjectName(QString::fromUtf8("ranking"));

        horizontalLayout->addWidget(ranking);

        results = new QPushButton(guest2);
        results->setObjectName(QString::fromUtf8("results"));

        horizontalLayout->addWidget(results);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(guest2);

        QMetaObject::connectSlotsByName(guest2);
    } // setupUi

    void retranslateUi(QWidget *guest2)
    {
        guest2->setWindowTitle(QApplication::translate("guest2", "guest", nullptr));
        t_ranking->setText(QApplication::translate("guest2", "tournaments ranking", nullptr));
        ranking->setText(QApplication::translate("guest2", "total ranking", nullptr));
        results->setText(QApplication::translate("guest2", "tournaments results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guest2: public Ui_guest2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUEST2_H
