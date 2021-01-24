/********************************************************************************
** Form generated from reading UI file 'admin_partidas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PARTIDAS_H
#define UI_ADMIN_PARTIDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_partidas
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *user;

    void setupUi(QWidget *Admin_partidas)
    {
        if (Admin_partidas->objectName().isEmpty())
            Admin_partidas->setObjectName(QString::fromUtf8("Admin_partidas"));
        Admin_partidas->setWindowModality(Qt::WindowModal);
        Admin_partidas->resize(207, 342);
        pushButton = new QPushButton(Admin_partidas);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 110, 80, 21));
        pushButton_2 = new QPushButton(Admin_partidas);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 150, 80, 21));
        pushButton_3 = new QPushButton(Admin_partidas);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 190, 80, 21));
        pushButton_4 = new QPushButton(Admin_partidas);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 230, 80, 21));
        pushButton_5 = new QPushButton(Admin_partidas);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 270, 131, 41));
        user = new QPushButton(Admin_partidas);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(20, 30, 171, 61));

        retranslateUi(Admin_partidas);

        QMetaObject::connectSlotsByName(Admin_partidas);
    } // setupUi

    void retranslateUi(QWidget *Admin_partidas)
    {
        Admin_partidas->setWindowTitle(QCoreApplication::translate("Admin_partidas", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin_partidas", "Nueva partida", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admin_partidas", "Cargar partida", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Admin_partidas", "Eliminar partida", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Admin_partidas", "Reiniciar", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Admin_partidas", "Multijugador", nullptr));
        user->setText(QCoreApplication::translate("Admin_partidas", "Click para ingresar tu usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_partidas: public Ui_Admin_partidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PARTIDAS_H
