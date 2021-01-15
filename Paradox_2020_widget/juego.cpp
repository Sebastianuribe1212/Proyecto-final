#include "juego.h"

juego :: juego(QWidget * parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(800,600);




    personaje = new cuerpo();


    personaje->setPos(400,550);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable);
    personaje->setFocus();



    scene->addItem(personaje);

    QList<pared*>pared = mundo1();
    personaje->setPared(pared);

    for(int i = 0 ; i <pared.size(); i++){
       scene->addItem(pared.at(i));
    }


    time = new QTimer;
    time->start(80);
    connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));


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
   /* if(muro2->collidesWithItem(personaje) )
    {
      scene->removeItem(personaje);
      delete personaje;
      disconnect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));

       // personaje->setPos(width()/2-30,((height()/2)/2)-105);
    }*/
}

