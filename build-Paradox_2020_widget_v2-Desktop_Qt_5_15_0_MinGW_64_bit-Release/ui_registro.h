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
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Registro)
    {
        if (Registro->objectName().isEmpty())
            Registro->setObjectName(QString::fromUtf8("Registro"));
        Registro->setWindowModality(Qt::ApplicationModal);
        Registro->resize(400, 300);
        Registro->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 33, 33);"));
        label = new QLabel(Registro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 100, 47, 13));
        QFont font;
        font.setFamily(QString::fromUtf8("Modern"));
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Registro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 160, 61, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        enviar = new QPushButton(Registro);
        enviar->setObjectName(QString::fromUtf8("enviar"));
        enviar->setGeometry(QRect(160, 230, 80, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Modern"));
        font1.setPointSize(9);
        enviar->setFont(font1);
        enviar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        usuario = new QLineEdit(Registro);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(110, 120, 181, 21));
        usuario->setFont(font1);
        usuario->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        contra = new QLineEdit(Registro);
        contra->setObjectName(QString::fromUtf8("contra"));
        contra->setGeometry(QRect(110, 180, 181, 21));
        contra->setFont(font1);
        contra->setFocusPolicy(Qt::ClickFocus);
        contra->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        contra->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(Registro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 50, 161, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Registro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 50, 91, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cyberway Riders"));
        font2.setPointSize(11);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(Registro);

        QMetaObject::connectSlotsByName(Registro);
    } // setupUi

    void retranslateUi(QWidget *Registro)
    {
        Registro->setWindowTitle(QCoreApplication::translate("Registro", "Form", nullptr));
        label->setText(QCoreApplication::translate("Registro", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("Registro", "Contrase\303\261a", nullptr));
        enviar->setText(QCoreApplication::translate("Registro", "enviar", nullptr));
        label_3->setText(QCoreApplication::translate("Registro", " Registrate para ser parte del", nullptr));
        label_4->setText(QCoreApplication::translate("Registro", "Paradox 20-20", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro: public Ui_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
