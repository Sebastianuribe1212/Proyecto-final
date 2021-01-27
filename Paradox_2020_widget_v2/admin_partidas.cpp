/*Administra las ui para lanzar el launcher es la primera ui que vemos donde seleccionamos demás opciones,
 * tambien despliega el ingresar usuario*/
#include "admin_partidas.h"
#include "ui_admin_partidas.h"
#include <QMessageBox>

Admin_partidas::Admin_partidas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin_partidas)
{

    ui->setupUi(this);



    setWindowTitle("█ »»Paradox 20-20«« █");
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

          }
          else
          {
              qDebug()<<"Error al ingresar los datos"<<query.lastError();
              QMessageBox::critical(this,tr("ERROR"),tr("error"));
          }
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
    if(this->getDificultad() == 2 )
    {
        juego = new launcher();
        qDebug()<<"Dificultad en admin"<<this->getDificultad();
        juego->setDificultad(this->getDificultad());
        juego->setMundo(this->getMundo());
    }
    else if(this->getDificultad()== 3 )
    {
        juego = new launcher();
        qDebug()<<"Dificultad en admin"<<this->getDificultad();
        juego->setDificultad(this->getDificultad());
        juego->setMundo(this->getMundo());
    }
    else if(this->getDificultad()== 5)
    {
        juego = new launcher();
        qDebug()<<"Dificultad en admin"<<this->getDificultad();
        juego->setDificultad(this->getDificultad());
        juego->setMundo(this->getMundo());
    }
    else{
      QMessageBox::information(this,tr("Dificultad"),tr("Por favor selecciona una dificultad"));
    }

}
void Admin_partidas::on_nuevapartida_clicked()
{
    this->setMundo("1");
    this->on_Cargarpartida_clicked();
}

void Admin_partidas::on_eliminarpartida_clicked()
{
    this->setMundo("1");
    QMessageBox::information(this,tr("Partida"),tr("Partida eliminada"));
}

void Admin_partidas::on_reiniciarpartida_clicked()
{
    juego->setMundo(this->getMundo());

    delete juego;
    juego = new launcher();
}

void Admin_partidas::on_pushButton_clicked()//facil
{
    this->setDificultad(2);
    QMessageBox::information(this,tr("Dificultad"),tr("cambiada exitosamente A facil"));
}
void Admin_partidas::on_normal_clicked()
{
    this->setDificultad(3);
    QMessageBox::information(this,tr("Dificultad"),tr("cambiada exitosamente A normal"));
}
void Admin_partidas::on_dificil_clicked()
{
    this->setDificultad(5);
    QMessageBox::information(this,tr("Dificultad"),tr("cambiada exitosamente A dificil"));
}


//lanzamos la partida multijugador depende de su dificultad
void Admin_partidas::on_pushButton_5_clicked()// Multijugador
{
    if(this->getDificultad() == 2 )
    {
        juegoMulti = new Launcher_multijugador();
        qDebug()<<"Dificultad en admin"<<this->getDificultad();
        juegoMulti->setDificultad(this->getDificultad());
        juegoMulti->setMundo(this->getMundo());
        juegoMulti->setMundoAux(this->getMundo());
        connect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion_salir()));
    }
    else if(this->getDificultad()== 3 )
    {
        juegoMulti = new Launcher_multijugador();
        qDebug()<<"Dificultad en admin"<<this->getDificultad();
        juegoMulti->setDificultad(this->getDificultad());
        juegoMulti->setMundo(this->getMundo());
        juegoMulti->setMundoAux(this->getMundo());
        connect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion_salir()));
    }
    else if(this->getDificultad()== 5)
    {
        juegoMulti = new Launcher_multijugador();
        qDebug()<<"Dificultad en admin"<<this->getDificultad();
        juegoMulti->setDificultad(this->getDificultad());
        juegoMulti->setMundo(this->getMundo());
        juegoMulti->setMundoAux(this->getMundo());
        connect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion_salir()));
    }
    else{
      QMessageBox::information(this,tr("Dificultad"),tr("Por favor selecciona una dificultad"));
    }
}
//detecta si hemos finalizado la partida multijugador, totalmente
void Admin_partidas::Actualizacion_salir()
{
    if(juegoMulti->getSalir()==true)
    {
        juegoMulti->setSalir(false);
        delete juegoMulti;
        disconnect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion_salir()));
    }
}

// funciones get y set de variables privadas para el funcionamiento interno de la clase
int Admin_partidas::getDificultad() const
{
    return dificultad;
}
void Admin_partidas::setDificultad(int value)
{
    dificultad = value;
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
QSqlDatabase Admin_partidas::getDbmain() const
{
    return dbmain;
}

void Admin_partidas::setDbmain(const QSqlDatabase &value)
{
    dbmain = value;

}
