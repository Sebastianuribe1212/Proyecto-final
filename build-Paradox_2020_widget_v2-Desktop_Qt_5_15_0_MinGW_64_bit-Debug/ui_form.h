/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *boton2;
    QPushButton *boton1;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->setWindowModality(Qt::WindowModal);
        Form->setEnabled(true);
        Form->resize(252, 357);
        widget = new QWidget(Form);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 60, 201, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        boton2 = new QPushButton(widget);
        boton2->setObjectName(QString::fromUtf8("boton2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Modern"));
        boton2->setFont(font);

        verticalLayout->addWidget(boton2);

        boton1 = new QPushButton(widget);
        boton1->setObjectName(QString::fromUtf8("boton1"));
        boton1->setFont(font);

        verticalLayout->addWidget(boton1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        boton2->setText(QCoreApplication::translate("Form", "Crear usuario", nullptr));
        boton1->setText(QCoreApplication::translate("Form", "Iniciar sesion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
