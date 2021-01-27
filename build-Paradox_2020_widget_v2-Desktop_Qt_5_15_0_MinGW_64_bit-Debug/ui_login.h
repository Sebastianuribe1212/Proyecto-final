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
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setWindowModality(Qt::ApplicationModal);
        Login->resize(371, 300);
        QFont font;
        font.setPointSize(8);
        Login->setFont(font);
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 80, 47, 13));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Modern"));
        font1.setPointSize(8);
        label->setFont(font1);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 130, 61, 16));
        label_2->setFont(font1);
        entrar = new QCommandLinkButton(Login);
        entrar->setObjectName(QString::fromUtf8("entrar"));
        entrar->setGeometry(QRect(190, 190, 71, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Modern"));
        font2.setPointSize(10);
        entrar->setFont(font2);
        nom = new QLineEdit(Login);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(90, 100, 181, 21));
        nom->setFont(font1);
        password = new QLineEdit(Login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(90, 150, 181, 21));
        password->setFocusPolicy(Qt::ClickFocus);
        password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 40, 47, 21));
        label_3->setFont(font2);
        label_4 = new QLabel(Login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 40, 81, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cyberway Riders"));
        font3.setPointSize(10);
        label_4->setFont(font3);
        label_5 = new QLabel(Login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 40, 101, 21));
        label_5->setFont(font2);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QCoreApplication::translate("Login", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "contrase\303\261a", nullptr));
        entrar->setText(QCoreApplication::translate("Login", "Entrar", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Estas en ", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "Paradox 20-20", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "por favor logueate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
