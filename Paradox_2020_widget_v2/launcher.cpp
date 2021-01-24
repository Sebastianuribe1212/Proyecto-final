#include "launcher.h"
launcher::launcher(QWidget * parent)
{

   time = new QTimer;
   time->start(80);
   connect(time,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

}
void launcher::Actualizacion1()
{

   /* juego3 * juego_3 = new juego3();
    if(juego_3->getSalir() == true){
        delete juego_3;

    }*/
}
