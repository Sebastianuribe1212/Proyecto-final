/*
Launcher reune a las clases juego para ir lanzandolos a medida que el
jugador vaya avanzando, se diferencia de launcher normal ya que nos permite jugar multijugador por turnos
*/
#include "launcher_multijugador.h"
#include <QDebug>
#include <QMessageBox>
Launcher_multijugador::Launcher_multijugador(QWidget * parent)
{

   time = new QTimer;
   time->start(80);

   connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

   //connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));

}

/*Se conecta cada que un "play" pone su setsalir como true (quiere decir que el personaje tomo la "moneda y llegó al portal")*/
void Launcher_multijugador::Actualizacion1()
{
     if(this->getMundoAux() == "1"){

            play1 = new juego(0);
            play1->setDificultad(this->getDificultad());

        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

    }

     else if(this->getMundoAux() == "1_2"){

            play1 = new juego(0);
            play1->setDificultad(this->getDificultad());

        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2_2()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

    }
    else if(this->getMundoAux() == "2"){
        play2 = new juego2(0);
        play2->setDificultad(this->getDificultad());
        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }
     else if(this->getMundoAux() == "2_2"){
         play2 = new juego2(0);
         play2->setDificultad(this->getDificultad());
         connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3_3()));
         disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
     }
    else if(this->getMundoAux() == "3"){
        play3 = new juego3(0);
        play3->setDificultad(this->getDificultad());
        connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion4()));
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }
     else if(this->getMundoAux() == "3_3"){
         play3 = new juego3(0);
         play3->setDificultad(this->getDificultad());
         connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion4_2()));
         disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
     }
    else{
        qDebug()<<"Error en leer el mundo";
        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2()));

        disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }

}
/*nos conecta el mundo 1 con el 1_2 nos deja hacer el segundo turno*/
void Launcher_multijugador::Actualizacion2()
{
    if(play1->getSalir() == true){
          this->setMundoAux("1_2");
          this->setMundo("1");
          play1->setSalir(false);
          connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2()));
          delete play1;
    }
}
/*nos conecta el mundo 1_2 con el 2 nos deja hacer el segundo turno*/
void Launcher_multijugador::Actualizacion2_2()
{
    if(play1->getSalir() == true){
          this->setMundo("2");
          this->setMundoAux("2");
          play1->setSalir(false);
           delete play1;
          connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion2_2()));

    }
}
/*nos conecta el mundo 2 con el 2_2 nos deja hacer el segundo turno*/
void Launcher_multijugador::Actualizacion3()
{
    if(play2->getSalir() == true){
          this->setMundoAux("2_2");
          this->setMundo("2");
          play2->setSalir(false);
          connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          delete play2;
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3()));
    }
}
/*nos conecta el mundo 2_2 con el 3 nos deja hacer el segundo turno*/
void Launcher_multijugador::Actualizacion3_3()
{

    if(play2->getSalir() == true){
          this->setMundo("3");
          this->setMundoAux("3");
          play2->setSalir(false);
          connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          delete play2;
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion3_3()));
    }
}
/*nos conecta el mundo 2_2 con el 3 nos deja hacer el segundo turno*/
void Launcher_multijugador::Actualizacion4()
{
    if(play3->getSalir() == true){
          this->setMundo("3");
          this->setMundoAux("3_3");
          play3->setSalir(false);
          connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          delete play3;
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion4()));
    }
}
/*nos conecta el mundo 3_3 con el final total del juego*/
void Launcher_multijugador::Actualizacion4_2()
{
    if(play3->getSalir() == true){
          this->setMundo("1");
          play3->setSalir(false);
          QMessageBox::information(this,tr("GANASTEEEE"),tr("ACABASTE TODAS TUS MISIONES!!!"));
         // connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
          delete play3;
          disconnect(time,SIGNAL(timeout()), this,SLOT(Actualizacion4_2()));
    }

}


//Funciones que nos dan valores privados necesarios para el funcionamiento
QString Launcher_multijugador::getMundoAux() const
{
    return mundoAux;
}

void Launcher_multijugador::setMundoAux(const QString &value)
{
    mundoAux = value;
}

int Launcher_multijugador::getDificultad() const
{
    return dificultad;
}

void Launcher_multijugador::setDificultad(int value)
{
    dificultad = value;
}

bool Launcher_multijugador::getSalir() const
{
    return salir;
}

void Launcher_multijugador::setSalir(bool value)
{
    salir = value;
}

QString Launcher_multijugador::getMundo() const
{
    return mundo;
}

void Launcher_multijugador::setMundo(const QString &value)
{
    mundo = value;
}

