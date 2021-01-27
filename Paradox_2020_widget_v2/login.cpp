//Funciona para poner el usuario y la contraseña para cargar la partida que tenias guardada
#include "login.h"
#include "ui_login.h"
#include <QDebug>
#include <QMessageBox>
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("█ »»Login«« █");
}

Login::~Login()
{
    delete ui;
}

void Login::on_entrar_clicked()
{
    QString user=ui->nom->text();
    QString password=ui->password->text();
    QSqlQuery buscar;
    QString pass2;
    QString nombre;
    QString mundo;
    QString Consulta;
    Consulta.append("SELECT * FROM usuario where nombre='"+user+"'");
    buscar.prepare(Consulta);
    if(buscar.exec()){
        qDebug()<<"Consulta realizada";
        while (buscar.next()) {

            pass2=buscar.value(1).toByteArray().constData();
            qDebug()<<pass2;
            nombre=buscar.value(0).toByteArray().constData();
            mundo=buscar.value(2).toByteArray().constData();

        }
    }
    else
    {
        qDebug()<<"Error de consulta";
        QMessageBox::critical(this,tr("ERROR"),tr("Usuario no existe"));

    }
    if(pass2==password){
        QMessageBox::information(this,tr("Bienvenido"),tr("Bienvenido: %1").arg(nombre));
        setMundo(mundo);
        setUser(nombre);
        setSalir(true);
    }
    else{
        QMessageBox::information(this,tr("ERROR"),tr("Contraseña Incorrecta"));
    }

}

QString Login::getUser() const
{
    return user;
}

void Login::setUser(const QString &value)
{
    user = value;
}

QString Login::getMundo() const
{
    return mundo;
}

void Login::setMundo(const QString &value)
{
    mundo = value;
}


bool Login::getSalir() const
{
    return salir;
}

void Login::setSalir(bool value)
{
    salir = value;
}
