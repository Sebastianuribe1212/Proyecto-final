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
    monedas->setPos(20,80);
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
      enemigo1->posx =100;
      enemigo1 ->posy = 10;
      enemigo1->setPos(100,80);

      scene->addItem(enemigo1);



      connect(time, SIGNAL(timeout()), this,SLOT(enemy1()));
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

        scene->removeItem(enemigo1);
        delete enemigo1;


        disconnect(time, SIGNAL(timeout()), this,SLOT(enemy1()));
        disconnect(time, SIGNAL(timeout()), this,SLOT(portal()));

    }
}

void juego2::enemy1()
{
    if(personaje->collidesWithItem(enemigo1) )
      {
        if(take == true){
            take = false;
            monedas = new moneda();
            monedas->setPos(20,80);
            scene->addItem(monedas);
            connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));

        }

        personaje->posx=750;
        personaje->posy=50;
        personaje->setPos(750,50);

        scene->removeItem(enemigo1);
        enemigo1->posx = 100;
        enemigo1 ->posy = 80;
        enemigo1->setPos(100,80);


        disconnect(time, SIGNAL(timeout()), this,SLOT(enemy1()));
    }
    if(enemigo1->x() < personaje->x()){
        enemigo1->right();
        for(int i = 0 ; i <paredaux.size(); i++){
            if(enemigo1->collidesWithItem(paredaux.at(i))){
               enemigo1->left();
            }
        }
    }

    else if (enemigo1->x() > personaje->x()){
        enemigo1->left();
        for(int i = 0 ; i <paredaux.size(); i++){
                    if(enemigo1->collidesWithItem(paredaux.at(i))){
                       enemigo1->right();
                    }
                }
            }

    if(enemigo1->y() < personaje->y()){
        enemigo1->down();
        for(int i = 0 ; i <paredaux.size(); i++){
                    if(enemigo1->collidesWithItem(paredaux.at(i))){
                       enemigo1->up();
                    }
                }
            }
    else if(enemigo1->y() > personaje->y()){
        enemigo1->up();
        for(int i = 0 ; i <paredaux.size(); i++){
                    if(enemigo1->collidesWithItem(paredaux.at(i))){
                       enemigo1->down();
                    }
                }
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
