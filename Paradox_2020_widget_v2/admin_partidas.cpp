#include "admin_partidas.h"
#include "ui_admin_partidas.h"
#include <QMessageBox>

Admin_partidas::Admin_partidas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin_partidas)
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

    timer = new QTimer;
    timer->start(80);


}

Admin_partidas::~Admin_partidas()
{
    delete ui;
}

QString Admin_partidas::getMundo() const
{
    return mundo;
}

void Admin_partidas::setMundo(const QString &value)
{
    mundo = value;
}

QString Admin_partidas::getUser() const
{
    return user;
}

void Admin_partidas::setUser(const QString &value)
{
    user = value;
}

void Admin_partidas::Actualizacion1()
{
    if(w->getSalir() == true){
           setMundo(w->getMundo());
           setUser(w->getUser());
           w->hide();
           qDebug()<<getMundo();
           qDebug()<<getUser();
           disconnect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }

}


void Admin_partidas::on_user_clicked()
{
    w->show();
    connect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
}

void Admin_partidas::on_Cargarpartida_clicked()
{
     juego = new launcher();

    juego->setMundo(this->getMundo());
}

void Admin_partidas::on_Guardar_clicked()
{
    if (!dbmain.isOpen())
       dbmain.open();

    this->setMundo(juego->getMundo());
    QString aux = getMundo();
    QSqlQuery query(QString("UPDATE usuario SET (mundo)= (\'%0\') WHERE nombre = \'%1\';").arg(aux).arg(getUser()));
    if(query.exec()){
              qDebug()<<"Datos Ingresados a la tabla";
              QMessageBox::information(this,tr("Guardado"),tr("guardado existoso"));
              this->hide();
          }
          else
          {
              qDebug()<<"Error al ingresar los datos"<<query.lastError();
              QMessageBox::critical(this,tr("ERROR"),tr("error"));
          }
    dbmain.close();
   /* query.prepare("UPDATE SET mundo=:mundo");
    query.bindValue(":mundo",aux);
    if (query.exec())
           {
                //emit updateTable();
            QMessageBox::information(this,"", "Success!");
           }
           else
           {
            QMessageBox::information(this,"", query.lastError().text());

           }*/


}

QSqlDatabase Admin_partidas::getDbmain() const
{
    return dbmain;
}

void Admin_partidas::setDbmain(const QSqlDatabase &value)
{
    dbmain = value;
}
