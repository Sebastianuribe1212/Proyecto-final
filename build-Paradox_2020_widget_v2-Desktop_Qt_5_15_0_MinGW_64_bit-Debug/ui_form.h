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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *boton2;
    QPushButton *boton1;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->setEnabled(true);
        Form->resize(668, 443);
        boton2 = new QPushButton(Form);
        boton2->setObjectName(QString::fromUtf8("boton2"));
        boton2->setGeometry(QRect(240, 80, 181, 81));
        boton1 = new QPushButton(Form);
        boton1->setObjectName(QString::fromUtf8("boton1"));
        boton1->setGeometry(QRect(240, 210, 181, 101));

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
