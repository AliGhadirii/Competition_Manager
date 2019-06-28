/********************************************************************************
** Form generated from reading UI file 't_ranking.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_RANKING_H
#define UI_T_RANKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_t_ranking
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *list;

    void setupUi(QDialog *t_ranking)
    {
        if (t_ranking->objectName().isEmpty())
            t_ranking->setObjectName(QString::fromUtf8("t_ranking"));
        t_ranking->resize(400, 300);
        horizontalLayout = new QHBoxLayout(t_ranking);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QListWidget(t_ranking);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout->addWidget(list);


        retranslateUi(t_ranking);

        QMetaObject::connectSlotsByName(t_ranking);
    } // setupUi

    void retranslateUi(QDialog *t_ranking)
    {
        t_ranking->setWindowTitle(QApplication::translate("t_ranking", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class t_ranking: public Ui_t_ranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_RANKING_H
