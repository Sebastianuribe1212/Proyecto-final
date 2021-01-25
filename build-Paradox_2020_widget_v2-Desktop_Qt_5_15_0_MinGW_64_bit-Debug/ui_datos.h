/********************************************************************************
** Form generated from reading UI file 'datos.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATOS_H
#define UI_DATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datos
{
public:
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;

    void setupUi(QWidget *datos)
    {
        if (datos->objectName().isEmpty())
            datos->setObjectName(QString::fromUtf8("datos"));
        datos->resize(250, 300);
        label = new QLabel(datos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 90, 111, 16));
        label_2 = new QLabel(datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 170, 111, 16));
        plainTextEdit = new QPlainTextEdit(datos);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(50, 110, 141, 21));
        plainTextEdit_2 = new QPlainTextEdit(datos);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(50, 200, 141, 21));

        retranslateUi(datos);

        QMetaObject::connectSlotsByName(datos);
    } // setupUi

    void retranslateUi(QWidget *datos)
    {
        datos->setWindowTitle(QCoreApplication::translate("datos", "Form", nullptr));
        label->setText(QCoreApplication::translate("datos", "Ingresa usuario", nullptr));
        label_2->setText(QCoreApplication::translate("datos", "Ingresa contrase\303\261a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datos: public Ui_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATOS_H
