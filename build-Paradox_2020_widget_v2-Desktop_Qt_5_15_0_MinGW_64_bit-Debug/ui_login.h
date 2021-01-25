/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *entrar;
    QLineEdit *nom;
    QLineEdit *password;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setWindowModality(Qt::ApplicationModal);
        Login->resize(400, 300);
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 47, 13));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 61, 16));
        entrar = new QCommandLinkButton(Login);
        entrar->setObjectName(QString::fromUtf8("entrar"));
        entrar->setGeometry(QRect(70, 140, 168, 41));
        nom = new QLineEdit(Login);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(70, 50, 113, 21));
        password = new QLineEdit(Login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(70, 100, 113, 21));
        password->setFocusPolicy(Qt::ClickFocus);
        password->setEchoMode(QLineEdit::Password);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QCoreApplication::translate("Login", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "contrase\303\261a", nullptr));
        entrar->setText(QCoreApplication::translate("Login", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
