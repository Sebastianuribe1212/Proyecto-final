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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_partidas
{
public:
    QPushButton *pushButton_5;
    QPushButton *user;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *Cargarpartida;
    QPushButton *nuevapartida;
    QPushButton *eliminarpartida;
    QPushButton *reiniciarpartida;
    QPushButton *Guardar;

    void setupUi(QWidget *Admin_partidas)
    {
        if (Admin_partidas->objectName().isEmpty())
            Admin_partidas->setObjectName(QString::fromUtf8("Admin_partidas"));
        Admin_partidas->setWindowModality(Qt::WindowModal);
        Admin_partidas->resize(207, 342);
        Admin_partidas->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(Admin_partidas);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 270, 80, 21));
        user = new QPushButton(Admin_partidas);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(30, 30, 147, 41));
        widget = new QWidget(Admin_partidas);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 90, 86, 133));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Cargarpartida = new QPushButton(widget);
        Cargarpartida->setObjectName(QString::fromUtf8("Cargarpartida"));
        Cargarpartida->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(Cargarpartida);

        nuevapartida = new QPushButton(widget);
        nuevapartida->setObjectName(QString::fromUtf8("nuevapartida"));

        verticalLayout->addWidget(nuevapartida);

        eliminarpartida = new QPushButton(widget);
        eliminarpartida->setObjectName(QString::fromUtf8("eliminarpartida"));

        verticalLayout->addWidget(eliminarpartida);

        reiniciarpartida = new QPushButton(widget);
        reiniciarpartida->setObjectName(QString::fromUtf8("reiniciarpartida"));

        verticalLayout->addWidget(reiniciarpartida);


        verticalLayout_2->addLayout(verticalLayout);

        Guardar = new QPushButton(widget);
        Guardar->setObjectName(QString::fromUtf8("Guardar"));

        verticalLayout_2->addWidget(Guardar);


        retranslateUi(Admin_partidas);

        QMetaObject::connectSlotsByName(Admin_partidas);
    } // setupUi

    void retranslateUi(QWidget *Admin_partidas)
    {
        Admin_partidas->setWindowTitle(QCoreApplication::translate("Admin_partidas", "Form", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Admin_partidas", "Multijugador", nullptr));
        user->setText(QCoreApplication::translate("Admin_partidas", "Click para ingresar tu usuario", nullptr));
        Cargarpartida->setText(QCoreApplication::translate("Admin_partidas", "Cargar partida", nullptr));
        nuevapartida->setText(QCoreApplication::translate("Admin_partidas", "Nueva partida", nullptr));
        eliminarpartida->setText(QCoreApplication::translate("Admin_partidas", "Eliminar partida", nullptr));
        reiniciarpartida->setText(QCoreApplication::translate("Admin_partidas", "Reiniciar", nullptr));
        Guardar->setText(QCoreApplication::translate("Admin_partidas", "Guardar partida", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_partidas: public Ui_Admin_partidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PARTIDAS_H
