#include "juego.h"

juego :: juego(QWidget * parent)
{
    //Creacion y set de la escena
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(800,600);

    //creacion y set de personaje
    personaje = new cuerpo();
    personaje->setPos(400,550);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable);
    personaje->setFocus();
    scene->addItem(personaje);

<<<<<<< HEAD
    portal1 = new pared(50,50,-380,-550);
    scene->addItem(portal1);

    //Creacion de paredes del mundo

    personaje->setPared(paredaux);
=======
    QList<pared*>pared = mundo1();
    personaje->setPared(pared);
>>>>>>> 137af9f2218192a3e100fc976ab3a81a1ae156dc

    for(int i = 0 ; i <paredaux.size(); i++){
       scene->addItem(paredaux.at(i));
    }


    //actualizacion para tomar la moneda
    monedas = new moneda();
    scene->addItem(monedas);
    time = new QTimer;
    time->start(80);
    connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
<<<<<<< HEAD
    connect(time, SIGNAL(timeout()), this,SLOT(portal()));
=======

    monedas = new moneda(10,400,300);
    scene->addItem(monedas);
>>>>>>> 137af9f2218192a3e100fc976ab3a81a1ae156dc

    show();

    if(finish == true){
        setSalir(true);
    }
}

void juego::Actualizacion()
{
  if(monedas->collidesWithItem(personaje) )
    {
<<<<<<< HEAD
      take = true;
      scene->removeItem(monedas);
      delete monedas;
      disconnect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
    }
}

void juego::portal()
{
    if(portal1->collidesWithItem(personaje) && take == true )
      {
        finish = true;
        scene->removeItem(personaje);
        delete personaje;
        for(int i = 0 ; i <paredaux.size(); i++){
           scene->removeItem(paredaux.at(i));
        }
        disconnect(time, SIGNAL(timeout()), this,SLOT(portal()));

      }
=======
      scene->removeItem(monedas);
      delete monedas;
    disconnect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));


    }
>>>>>>> 137af9f2218192a3e100fc976ab3a81a1ae156dc
}

bool juego::getSalir() const
{
    return salir;
}

void juego::setSalir(bool value)
{
    salir = value;
}
