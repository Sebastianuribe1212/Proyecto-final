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

    void setupUi(QWidget *Admin_partidas)
    {
        if (Admin_partidas->objectName().isEmpty())
            Admin_partidas->setObjectName(QString::fromUtf8("Admin_partidas"));
        Admin_partidas->setWindowModality(Qt::WindowModal);
        Admin_partidas->resize(328, 342);
        Admin_partidas->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(Admin_partidas);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 240, 80, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Modern"));
        pushButton_5->setFont(font);
        user = new QPushButton(Admin_partidas);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(90, 30, 147, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Modern"));
        font1.setBold(false);
        font1.setWeight(50);
        user->setFont(font1);
        layoutWidget = new QWidget(Admin_partidas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 90, 88, 137));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Cargarpartida = new QPushButton(layoutWidget);
        Cargarpartida->setObjectName(QString::fromUtf8("Cargarpartida"));
        Cargarpartida->setFont(font);
        Cargarpartida->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(Cargarpartida);

        nuevapartida = new QPushButton(layoutWidget);
        nuevapartida->setObjectName(QString::fromUtf8("nuevapartida"));
        nuevapartida->setFont(font);

        verticalLayout->addWidget(nuevapartida);

        eliminarpartida = new QPushButton(layoutWidget);
        eliminarpartida->setObjectName(QString::fromUtf8("eliminarpartida"));
        eliminarpartida->setFont(font);

        verticalLayout->addWidget(eliminarpartida);

        reiniciarpartida = new QPushButton(layoutWidget);
        reiniciarpartida->setObjectName(QString::fromUtf8("reiniciarpartida"));
        reiniciarpartida->setFont(font);

        verticalLayout->addWidget(reiniciarpartida);


        verticalLayout_2->addLayout(verticalLayout);

        Guardar = new QPushButton(layoutWidget);
        Guardar->setObjectName(QString::fromUtf8("Guardar"));
        Guardar->setFont(font);

        verticalLayout_2->addWidget(Guardar);

        label = new QLabel(Admin_partidas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 290, 81, 16));
        label->setFont(font);
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
        layoutWidget1->setGeometry(QRect(50, 310, 254, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        normal = new QPushButton(layoutWidget1);
        normal->setObjectName(QString::fromUtf8("normal"));
        normal->setFont(font);

        horizontalLayout->addWidget(normal);

        dificil = new QPushButton(layoutWidget1);
        dificil->setObjectName(QString::fromUtf8("dificil"));
        dificil->setFont(font);

        horizontalLayout->addWidget(dificil);


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
    } // retranslateUi

};

namespace Ui {
    class Admin_partidas: public Ui_Admin_partidas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PARTIDAS_H
