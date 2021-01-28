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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_partidas
{
public:
    QPushButton *pushButton_5;
    QPushButton *user;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *Cargarpartida;
    QPushButton *nuevapartida;
    QPushButton *eliminarpartida;
    QPushButton *reiniciarpartida;
    QPushButton *Guardar;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *normal;
    QPushButton *dificil;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Admin_partidas)
    {
        if (Admin_partidas->objectName().isEmpty())
            Admin_partidas->setObjectName(QString::fromUtf8("Admin_partidas"));
        Admin_partidas->setWindowModality(Qt::WindowModal);
        Admin_partidas->setEnabled(true);
        Admin_partidas->resize(328, 342);
        Admin_partidas->setMinimumSize(QSize(328, 342));
        Admin_partidas->setMaximumSize(QSize(328, 342));
        QFont font;
        font.setFamily(QString::fromUtf8("Cyberway Riders"));
        Admin_partidas->setFont(font);
        Admin_partidas->setFocusPolicy(Qt::NoFocus);
        Admin_partidas->setAutoFillBackground(false);
        Admin_partidas->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(38, 38, 38);\n"
"background-color: rgb(42, 42, 42);"));
        pushButton_5 = new QPushButton(Admin_partidas);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 240, 80, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Modern"));
        font1.setPointSize(9);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(17, 87, 152);\n"
"color: rgb(170, 0, 127);"));
        user = new QPushButton(Admin_partidas);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(90, 30, 147, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Modern"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        user->setFont(font2);
        user->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(Admin_partidas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 80, 88, 143));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Cargarpartida = new QPushButton(layoutWidget);
        Cargarpartida->setObjectName(QString::fromUtf8("Cargarpartida"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Modern"));
        Cargarpartida->setFont(font3);
        Cargarpartida->setFocusPolicy(Qt::NoFocus);
        Cargarpartida->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(207, 0, 103);"));

        verticalLayout->addWidget(Cargarpartida);

        nuevapartida = new QPushButton(layoutWidget);
        nuevapartida->setObjectName(QString::fromUtf8("nuevapartida"));
        nuevapartida->setFont(font3);
        nuevapartida->setStyleSheet(QString::fromUtf8("color: rgb(207, 0, 103);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(nuevapartida);

        eliminarpartida = new QPushButton(layoutWidget);
        eliminarpartida->setObjectName(QString::fromUtf8("eliminarpartida"));
        eliminarpartida->setFont(font3);
        eliminarpartida->setStyleSheet(QString::fromUtf8("color: rgb(207, 0, 103);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(eliminarpartida);

        reiniciarpartida = new QPushButton(layoutWidget);
        reiniciarpartida->setObjectName(QString::fromUtf8("reiniciarpartida"));
        reiniciarpartida->setFont(font3);
        reiniciarpartida->setStyleSheet(QString::fromUtf8("color: rgb(207, 0, 103);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(reiniciarpartida);


        verticalLayout_2->addLayout(verticalLayout);

        Guardar = new QPushButton(layoutWidget);
        Guardar->setObjectName(QString::fromUtf8("Guardar"));
        Guardar->setFont(font3);
        Guardar->setStyleSheet(QString::fromUtf8("color: rgb(207, 0, 103);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(Guardar);

        label = new QLabel(Admin_partidas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 290, 81, 16));
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(207, 0, 103);\n"
"color: rgb(255, 255, 255);"));
        line = new QFrame(Admin_partidas);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(60, 70, 201, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Admin_partidas);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(60, 220, 201, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Admin_partidas);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(60, 260, 201, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(Admin_partidas);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 310, 254, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 255);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(207, 0, 103);"));

        horizontalLayout->addWidget(pushButton);

        normal = new QPushButton(layoutWidget1);
        normal->setObjectName(QString::fromUtf8("normal"));
        normal->setFont(font3);
        normal->setStyleSheet(QString::fromUtf8("color: rgb(207, 0, 103);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(normal);

        dificil = new QPushButton(layoutWidget1);
        dificil->setObjectName(QString::fromUtf8("dificil"));
        dificil->setFont(font3);
        dificil->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(dificil);

        pushButton_2 = new QPushButton(Admin_partidas);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 280, 31, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(Admin_partidas);

        QMetaObject::connectSlotsByName(Admin_partidas);
    } // setupUi

    void retranslateUi(QWidget *Admin_partidas)
    {
        Admin_partidas->setWindowTitle(QCoreApplication::translate("Admin_partidas", "Form", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Admin_partidas", "Multijugador", nullptr));
        user->setText(QCoreApplication::translate("Admin_partidas", "Click Para ingresar tu usuario", nullptr));
        Cargarpartida->setText(QCoreApplication::translate("Admin_partidas", "Cargar partida", nullptr));
        nuevapartida->setText(QCoreApplication::translate("Admin_partidas", "Nueva partida", nullptr));
        eliminarpartida->setText(QCoreApplication::translate("Admin_partidas", "Eliminar partida", nullptr));
        reiniciarpartida->setText(QCoreApplication::translate("Admin_partidas", "Reiniciar", nullptr));
        Guardar->setText(QCoreApplication::translate("Admin_partidas", "Guardar partida", nullptr));
        label->setText(QCoreApplication::translate("Admin_partidas", "Dificultad:", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin_partidas", "Facil", nullptr));
        normal->setText(QCoreApplication::translate("Admin_partidas", "Nomal", nullptr));
        dificil->setText(QCoreApplication::translate("Admin_partidas", "Dificil", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admin_partidas", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_partidas: public Ui_Admin_partidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PARTIDAS_H
