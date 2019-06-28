/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *list;

    void setupUi(QWidget *result)
    {
        if (result->objectName().isEmpty())
            result->setObjectName(QString::fromUtf8("result"));
        result->resize(400, 300);
        horizontalLayout = new QHBoxLayout(result);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QListWidget(result);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout->addWidget(list);


        retranslateUi(result);

        QMetaObject::connectSlotsByName(result);
    } // setupUi

    void retranslateUi(QWidget *result)
    {
        result->setWindowTitle(QApplication::translate("result", "results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
