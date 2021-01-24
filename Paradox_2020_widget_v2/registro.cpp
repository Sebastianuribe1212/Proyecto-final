#include "registro.h"
#include "ui_registro.h"
#include "QDebug"
#include <QMessageBox>
Registro::Registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
    CrearTabla();
}

Registro::~Registro()
{
    delete ui;
}

void Registro::CrearTabla()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS usuario("
                    "nombre VARCHAR(25) PRIMARY KEY,"
                    "contras VARCHAR(25),"
                    "mundo VARCHAR(25)"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);
    if(crear.exec())
    {
        qDebug()<<"Tabla Creada";
    }
    else
    {
        qDebug()<<"Tabla no creada"<<crear.lastError();
    }

}
void Registro::on_enviar_clicked()
{
    QString mundAux="1";
    QString user=ui->usuario->text();
    QString password=ui->contra->text();
    qDebug()<<user;
    qDebug()<<password;
    qDebug()<<mundAux;
    QString insertar;
    insertar.append("INSERT INTO usuario(nombre,contras,mundo)"
                    "values(:nombre,:contras,:mundo);");
    QSqlQuery insertar_db;
    insertar_db.prepare(insertar);
    insertar_db.bindValue(":nombre",user);
    insertar_db.bindValue(":contras",password);
    insertar_db.bindValue(":mundo",mundAux);

    if(insertar_db.exec()){
        qDebug()<<"Datos Ingresados a la tabla";
        QMessageBox::information(this,tr("Exito"),tr("Registro existoso"));
        this->hide();
    }
    else
    {
        qDebug()<<"Error al ingresar los datos"<<insertar_db.lastError();
        QMessageBox::critical(this,tr("ERROR"),tr("El usuario ya esta en uso"));
    }
}
