#include "registro.h"
#include "ui_registro.h"
#include "QDebug"
Registro::Registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
}

Registro::~Registro()
{
    delete ui;
}


void Registro::on_enviar_clicked()
{
    QString user=ui->usuario->text();
    QString password=ui->password->text();
    qDebug()<<user;
    qDebug()<<password;
}
