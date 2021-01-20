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
    personaje->setPosx(750);
    personaje->setPosy(50);
    personaje->setPos(750,50);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable);
    personaje->setFocus();
    scene->addItem(personaje);

    portal1 = new pared(50,50,-740,-30);
    scene->addItem(portal1);

    //Creacion de paredes del mundo

    personaje->setPared(paredaux);

    for(int i = 0 ; i <paredaux.size(); i++){
       scene->addItem(paredaux.at(i));
    }


    //actualizacion para tomar la moneda
    monedas = new moneda();
    monedas->setPos(20,50);
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
        scene->removeItem(portal1);
        delete portal1;
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
