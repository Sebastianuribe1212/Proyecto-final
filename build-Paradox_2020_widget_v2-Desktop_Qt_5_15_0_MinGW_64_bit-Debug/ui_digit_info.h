/********************************************************************************
** Form generated from reading UI file 'digit_info.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGIT_INFO_H
#define UI_DIGIT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digit_info
{
public:
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *digit_info)
    {
        if (digit_info->objectName().isEmpty())
            digit_info->setObjectName(QString::fromUtf8("digit_info"));
        digit_info->resize(400, 300);
        plainTextEdit = new QPlainTextEdit(digit_info);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(110, 100, 171, 21));
        plainTextEdit_2 = new QPlainTextEdit(digit_info);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(110, 170, 171, 21));
        label = new QLabel(digit_info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 81, 16));
        label_2 = new QLabel(digit_info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 150, 101, 16));

        retranslateUi(digit_info);

        QMetaObject::connectSlotsByName(digit_info);
    } // setupUi

    void retranslateUi(QWidget *digit_info)
    {
        digit_info->setWindowTitle(QCoreApplication::translate("digit_info", "Form", nullptr));
        label->setText(QCoreApplication::translate("digit_info", "Ingresa usuario", nullptr));
        label_2->setText(QCoreApplication::translate("digit_info", "Ingresa contrase\303\261a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class digit_info: public Ui_digit_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGIT_INFO_H
