//mapa 1 con personaje, setea las paredes, la moneda, el portal, y el personaje (mapa ambientado en las calles)
#include "juego.h"
#include <QMessageBox>
#include <QDebug>
int juego::getDificultad() const
{
    return dificultad;
}

void juego::setDificultad(int value)
{
    dificultad = value;
}

juego :: juego(QWidget * parent)
{

    //Creacion y set de la escena
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);
    setWindowTitle("█ »»CAlles de PÃndemia«« █");
    //creacion y set de personaje
    personaje = new cuerpo();
    personaje->setPos(400,550);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable, true);
    scene->addItem(personaje);
    scene->setFocusItem(personaje);
    personaje->setFocus();

    QMessageBox::information(this,tr("Inicia el juego"),tr("PRESIONA LA TECLA TAB O DALE CLICK SOBRE EL PERSONAJE"));
    //TabFocusReason
    portal1 = new pared(50,50,-380,-550);
    scene->addItem(portal1);

    //Creacion de paredes del mundo

    personaje->setPared(paredaux);

    for(int i = 0 ; i <paredaux.size(); i++){
       scene->addItem(paredaux.at(i));
    }

    enemigo1->setPos(100,80);

        enemigo2->setDireccion(false);
        enemigo2->posx = 700;
        enemigo2->posy = 500;
        enemigo2->setPos(700,500);


    scene->addItem(enemigo1);
    scene->addItem(enemigo2);
    //actualizacion para tomar la moneda
    monedas = new moneda();
    scene->addItem(monedas);
    time = new QTimer;
    time->start(80);
    connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
    connect(time, SIGNAL(timeout()), this,SLOT(portal()));
    connect(time, SIGNAL(timeout()), this,SLOT(MoveEnemy()));
    connect(time, SIGNAL(timeout()), this,SLOT(MoveEnemy2()));
    connect(time, SIGNAL(timeout()), this,SLOT(Dificultad()));

    show();

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
        scene->removeItem(portal1);
        delete portal1;

        scene->removeItem(enemigo1);
        delete enemigo1;

        scene->removeItem(enemigo2);
        delete enemigo2;

        setSalir(true);

        disconnect(time, SIGNAL(timeout()), this,SLOT(MoveEnemy()));
        disconnect(time, SIGNAL(timeout()), this,SLOT(MoveEnemy2()));
        disconnect(time, SIGNAL(timeout()), this,SLOT(portal()));


    }
}

void juego::MoveEnemy()
{
    if(personaje->collidesWithItem(enemigo1) )
      {
        if(take == true){
            take = false;
            monedas = new moneda();
            scene->addItem(monedas);
            connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
        }

        personaje->posx=400;
        personaje->posy=550;
        personaje->setPos(400,550);

        enemigo1->setDireccion(true);
        enemigo1->posx = 100;
        enemigo1 ->posy = 80;
        enemigo1->setPos(100,80);

        enemigo2->setDireccion(false);
        enemigo2->posx = 700;
        enemigo2->posy = 500;
        enemigo2->setPos(700,500);
      }
    if(enemigo1->getDireccion()==true){
        enemigo1->down();
    }
    if(enemigo1->getDireccion()==false){
        enemigo1->up();
    }

    if(enemigo1->collidesWithItem(paredaux.at(0))){
             enemigo1->setDireccion(true);
          }
    if(enemigo1->collidesWithItem(paredaux.at(2))){
             enemigo1->setDireccion(false);
          }

}

void juego::MoveEnemy2()
{
    if(personaje->collidesWithItem(enemigo2) )
      {
        if(take == true){
            take = false;
            monedas = new moneda();
            scene->addItem(monedas);
            connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
        }

        personaje->posx=400;
        personaje->posy=550;
        personaje->setPos(400,550);

        enemigo1->setDireccion(true);
        enemigo1->posx = 100;
        enemigo1 ->posy = 80;
        enemigo1->setPos(100,80);


        enemigo2->setDireccion(false);
        enemigo2->posx = 700;
        enemigo2->posy = 500;
        enemigo2->setPos(700,500);
      }
    if(enemigo2->getDireccion()==true){
        enemigo2->down();
    }
    if(enemigo2->getDireccion()==false){
        enemigo2->up();
    }

    if(enemigo2->collidesWithItem(paredaux.at(0))){
             enemigo2->setDireccion(true);
          }
    if(enemigo2->collidesWithItem(paredaux.at(3))){
             enemigo2->setDireccion(false);
    }
}

void juego::Dificultad()
{
    int aux = this->getDificultad()*3;
    enemigo2->setVelocidad(aux);
    enemigo1->setVelocidad(aux);

    qDebug()<<"dificultad en juego"<<enemigo1->getVelocidad();
    qDebug()<<"dificultad en juego"<<enemigo2->getVelocidad();
}

bool juego::getSalir() const
{
    return salir;
}

void juego::setSalir(bool value)
{
    salir = value;
}
