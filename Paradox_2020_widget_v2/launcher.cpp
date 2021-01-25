#include "launcher.h"
#include <QDebug>
#include <QMessageBox>
launcher::launcher(QWidget * parent)
{

   time = new QTimer;
   time->start(80);

   connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
   connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2()));
   //connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));

}

void launcher::Actualizacion1()
{

    if(this->getMundo() == "1"){
            play1 = new juego(0);

        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

    }
    else if(this->getMundo() == "2"){
        play2 = new juego2(0);
        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }
    else if(this->getMundo() == "3"){
        play3 = new juego3(0);
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
{   qDebug()<<"llega a actualizacion";
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
          play2->setSalir(false);
          //connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          delete play3;
          //disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));
    }
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

