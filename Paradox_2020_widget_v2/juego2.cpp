//mapa 2 con personaje, setea las paredes, la moneda, el portal, y el personaje (mapa ambientado en Australia)
#include "juego2.h"
#include <QMessageBox>
#include <QDebug>
int juego2::getDificultad() const
{
    return dificultad;
}

void juego2::setDificultad(int value)
{
    dificultad = value;
}

juego2 :: juego2(QWidget * parent)
{
    //Creacion y set de la escena
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setBackgroundBrush(QBrush(QImage(":/Mundo2-100.jpg")));
    setFixedSize(800,600);

    //creacion y set de personaje
    personaje = new cuerpo();
    personaje->setPosx(750);
    personaje->setPosy(50);
    personaje->setPos(750,50);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable);
    personaje->setFocus();
    scene->addItem(personaje);
    setWindowTitle("█ »»04/01/202Ó Austrlýa«« █");
    portal1 = new pared(50,50,-740,-30);
    scene->addItem(portal1);

    QMessageBox::information(this,tr("Inicia el juego"),tr("PRESIONA LA TECLA TAB O DALE CLICK SOBRE EL PERSONAJE"));

    //Creacion de paredes del mundo

    personaje->setPared(paredaux);

    /*for(int i = 0 ; i <paredaux.size(); i++){
       scene->addItem(paredaux.at(i));
    }*/


    //actualizacion para tomar la moneda
    monedas = new moneda();
    monedas->setPos(20,80);
    scene->addItem(monedas);
    time = new QTimer;
    time->start(80);
     connect(time, SIGNAL(timeout()), this,SLOT(Paredes()));
    connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
    connect(time, SIGNAL(timeout()), this,SLOT(portal()));



    show();


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
        setSalir(true);
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

void juego2::Dificultad()
{
    int aux =8-(this->getDificultad()) ;
    personaje->setVelocidad(aux);
}

void juego2::Paredes()
{
   // QList<pared*>paredaux = mund2->mundo2();
    qDebug()<<"Entra a paredes";
    for(int i = 0 ; i <paredaux.size(); i++){
        if(personaje->collidesWithItem(paredaux.at(i))){
                if(take == true){
                    take = false;
                    monedas = new moneda();
                    monedas->setPos(20,80);
                    scene->addItem(monedas);
                    connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
                    scene->removeItem(enemigo1);
                    enemigo1->posx = 100;
                    enemigo1 ->posy = 80;
                    enemigo1->setPos(100,80);


                    disconnect(time, SIGNAL(timeout()), this,SLOT(enemy1()));

                }
                qDebug()<<"Entra a collides";
                personaje->posx=750;
                personaje->posy=50;
                personaje->setPos(750,50);


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
