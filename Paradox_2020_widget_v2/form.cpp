#include "form.h"
#include "ui_form.h"
#include <QDebug>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    QString nombre;
    nombre = "BasDeDatos.sqlite";
    dbmain=QSqlDatabase::addDatabase("QSQLITE");
    dbmain.setDatabaseName(nombre);
    if(dbmain.open())
    {
        qDebug()<<"Base de datos creada";
    }
    else
    {
        qDebug()<<"Error";
    }
}

Form::~Form()
{
    delete ui;
}


void Form::on_boton2_clicked()
{
    Registro *registro = new Registro(0);
    registro->show();
}

void Form::on_boton1_clicked()
{
    Login *login = new Login(0);
    login->show();
}
