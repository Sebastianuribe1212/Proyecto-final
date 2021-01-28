/*
Launcher reune a las clases juego para ir lanzandolos a medida que el
jugador vaya avanzando
*/
#include "launcher.h"
#include <QDebug>
#include <QMessageBox>
launcher::launcher(QWidget * parent)
{

   time = new QTimer;
   time->start(80);

   connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

   //connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));

}

void launcher::Actualizacion1()
{


     if(this->getMundo() == "1"){

            play1 = new juego(0);
            play1->setDificultad(this->getDificultad());

        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

    }
    else if(this->getMundo() == "2"){
        play2 = new juego2(0);
        play2->setDificultad(this->getDificultad());
        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }
    else if(this->getMundo() == "3"){
        play3 = new juego3(0);
        play3->setDificultad(this->getDificultad());
        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion4()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }
    else{
        qDebug()<<"Error en leer el mundo";
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2()));

        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }

}

void launcher::Actualizacion2()
{
    if(play1->getSalir() == true){
          this->setMundo("2");
          play1->setSalir(false);
          connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2()));
          delete play1;
    }
}

void launcher::Actualizacion3()
{
    if(play2->getSalir() == true){
          this->setMundo("3");
          play2->setSalir(false);
          connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          delete play2;
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));
    }
}

void launcher::Actualizacion4()
{
    if(play3->getSalir() == true){
          this->setMundo("1");
          play3->setSalir(false);
          //connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          delete play3;
          QMessageBox::information(this,tr("GANASTEEEE"),tr("ACABASTE TODAS TUS MISIONES!!!"));
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion4()));
    }
}

int launcher::getDificultad() const
{
    return dificultad;
}

void launcher::setDificultad(int value)
{
    dificultad = value;
}

bool launcher::getSalir() const
{
    return salir;
}

void launcher::setSalir(bool value)
{
    salir = value;
}

QString launcher::getMundo() const
{
    return mundo;
}

void launcher::setMundo(const QString &value)
{
    mundo = value;
}

