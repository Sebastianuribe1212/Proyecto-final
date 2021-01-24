/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *enviar;
    QLineEdit *usuario;
    QLineEdit *contra;

    void setupUi(QWidget *Registro)
    {
        if (Registro->objectName().isEmpty())
            Registro->setObjectName(QString::fromUtf8("Registro"));
        Registro->setWindowModality(Qt::ApplicationModal);
        Registro->resize(400, 300);
        label = new QLabel(Registro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 47, 13));
        label_2 = new QLabel(Registro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 61, 16));
        enviar = new QPushButton(Registro);
        enviar->setObjectName(QString::fromUtf8("enviar"));
        enviar->setGeometry(QRect(150, 200, 80, 21));
        usuario = new QLineEdit(Registro);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(70, 70, 181, 21));
        contra = new QLineEdit(Registro);
        contra->setObjectName(QString::fromUtf8("contra"));
        contra->setGeometry(QRect(70, 130, 181, 21));
        contra->setEchoMode(QLineEdit::Password);

        retranslateUi(Registro);

        QMetaObject::connectSlotsByName(Registro);
    } // setupUi

    void retranslateUi(QWidget *Registro)
    {
        Registro->setWindowTitle(QCoreApplication::translate("Registro", "Form", nullptr));
        label->setText(QCoreApplication::translate("Registro", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("Registro", "Contrase\303\261a", nullptr));
        enviar->setText(QCoreApplication::translate("Registro", "enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro: public Ui_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
