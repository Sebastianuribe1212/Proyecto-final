#include "launcher.h"

launcher::launcher(QWidget * parent)
{

   time = new QTimer;
   time->start(80);
   connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
}
void launcher::Actualizacion1()
{
    if(juego1->getSalir() == true){
        delete juego1;
    }
}
/*time->start(80);
 * connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()))
 * connect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);
connect(time, SIGNAL);*/
