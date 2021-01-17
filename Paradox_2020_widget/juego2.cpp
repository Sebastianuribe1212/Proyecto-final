#include "juego2.h"

juego2 :: juego2(QWidget * parent)
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

    portal1 = new pared(50,50,-380,-550);
    scene->addItem(portal1);

    //Creacion de paredes del mundo

    personaje->setPared(paredaux);

    for(int i = 0 ; i <paredaux.size(); i++){
       scene->addItem(paredaux.at(i));
    }


    //actualizacion para tomar la moneda
    monedas = new moneda(10,400,300);
    scene->addItem(monedas);
    time = new QTimer;
    time->start(80);
    connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
    connect(time, SIGNAL(timeout()), this,SLOT(portal()));

    show();

    if(finish == true){
        setSalir(true);
    }
}

void juego2::Actualizacion()
{
  if(monedas->collidesWithItem(personaje) )
    {
      take = true;
      scene->removeItem(monedas);
      delete monedas;
      disconnect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
    }
}

void juego2::portal()
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
}

bool juego2::getSalir() const
{
    return salir;
}

void juego2::setSalir(bool value)
{
    salir = value;
}
