/********************************************************************************
** Form generated from reading UI file 'ranking.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKING_H
#define UI_RANKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ranking
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *list;

    void setupUi(QDialog *ranking)
    {
        if (ranking->objectName().isEmpty())
            ranking->setObjectName(QString::fromUtf8("ranking"));
        ranking->resize(400, 300);
        verticalLayout = new QVBoxLayout(ranking);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        list = new QListWidget(ranking);
        list->setObjectName(QString::fromUtf8("list"));

        verticalLayout->addWidget(list);


        retranslateUi(ranking);

        QMetaObject::connectSlotsByName(ranking);
    } // setupUi

    void retranslateUi(QDialog *ranking)
    {
        ranking->setWindowTitle(QApplication::translate("ranking", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ranking: public Ui_ranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKING_H
