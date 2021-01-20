#include "launcher.h"

launcher::launcher(QWidget * parent)
{

   time = new QTimer;
   time->start(80);
   connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
}
void launcher::Actualizacion1()
{
    if(juego_2->getSalir() == true){
        delete juego_2;
    }
}
