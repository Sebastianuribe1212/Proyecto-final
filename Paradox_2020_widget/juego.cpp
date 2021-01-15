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
}

QList<pared *> juego::mundo1()
{
    QList<pared*>paredes1;
    pared * muro1  = new pared(800,50,0,0);
    paredes1.push_back(muro1);
    pared * muro2  = new pared(50,800,-750,0);
    paredes1.push_back(muro2);
    pared * muro3  = new pared(350,50,0,-550);
    paredes1.push_back(muro3);
    pared * muro4  = new pared(350,50,-450,-550);
    paredes1.push_back(muro4);
    pared * muro5  = new pared(50,800,0,0);
    paredes1.push_back(muro5);
    pared * muro6 = new pared(150,100,-150,-150);
    paredes1.push_back(muro6);
    pared * muro7 = new pared(500,100,-150,-350);
    paredes1.push_back(muro7);

    pared * muro7_1 = new pared(5,100,-300,-250);
    paredes1.push_back(muro7_1);

    pared * muro8 = new pared(150,100,-500,-150);
    paredes1.push_back(muro8);
    //pared * muro9 = new pared(50,100,-600,-350);
    //paredes1.push_back(muro9);
    pared * muro9_1 = new pared(5,100,-500,-250);
    paredes1.push_back(muro9_1);



    return paredes1;

}

void juego::Actualizacion()
{
  if(monedas->collidesWithItem(personaje) )
    {
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
        scene->removeItem(personaje);
        delete personaje;
        for(int i = 0 ; i <paredaux.size(); i++){
           scene->removeItem(paredaux.at(i));
        }
        disconnect(time, SIGNAL(timeout()), this,SLOT(portal()));
      }
}
