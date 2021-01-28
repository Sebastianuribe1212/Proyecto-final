/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QLabel *label_7;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(586, 316);
        About->setStyleSheet(QString::fromUtf8("background-color: rgb(49, 49, 49);\n"
"background-color: rgb(33, 33, 33);"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 40, 211, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Cyberway Riders"));
        font.setPointSize(28);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(About);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 260, 111, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Old English Text MT"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setWeight(50);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget = new QWidget(About);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 180, 491, 101));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Modern"));
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Form", nullptr));
        label->setText(QCoreApplication::translate("About", "Paradox 20-20", nullptr));
        label_7->setText(QCoreApplication::translate("About", "-the paradox", nullptr));
        label_2->setText(QCoreApplication::translate("About", "Tu personaje es descendiente de viajeros temporales, ha ocurido una catastrofe en la tierra, ", nullptr));
        label_3->setText(QCoreApplication::translate("About", "recorre distintos tiempos y encuentra la manera de llegar al tapabocas, luego vuelve a tu portal", nullptr));
        label_4->setText(QCoreApplication::translate("About", "el portal es la unica manera de salir de all\303\255, puedes viajar en el tiempo asi que si te matan", nullptr));
        label_5->setText(QCoreApplication::translate("About", "vuelve a iniciar, esquiva todos los obstaculos sin que se detecten, suerte,", nullptr));
        label_6->setText(QCoreApplication::translate("About", "eres nuestro \303\272ltimo recurso, que la fuerza te acompa\303\261e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
