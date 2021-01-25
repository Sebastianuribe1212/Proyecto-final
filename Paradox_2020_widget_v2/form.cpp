#include "form.h"
#include "ui_form.h"
#include <QDebug>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    timer = new QTimer;
    timer->start(80);
    connect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion()));
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

void Form::Actualizacion()
{
    if(login->getSalir() == true){
           setMundo(login->getMundo());
           setUser(login->getUser());
           login->hide();
           setSalir(true);
           disconnect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion()));
    }
}

void Form::on_boton1_clicked()
{

    login->show();
}


bool Form::getSalir() const
{
    return salir;
}

void Form::setSalir(bool value)
{
    salir = value;
}

QString Form::getUser() const
{
    return user;
}

void Form::setUser(const QString &value)
{
    user = value;
}

QString Form::getMundo() const
{
    return mundo;
}

void Form::setMundo(const QString &value)
{
    mundo = value;
}
