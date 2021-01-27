//mapa 3 con personaje, setea las paredes, la moneda, el portal, y el personaje (mapa ambientado en china)
#include "juego3.h"
#include <QMessageBox>
int juego3::getDificultad() const
{
    return dificultad;
}

void juego3::setDificultad(int value)
{
    dificultad = value;
}

juego3 :: juego3(QWidget * parent)
{
    //Creacion y set de la escena
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setWindowTitle("█ »»0/Ø/0 ChïnÃ«« █");
    setFixedSize(800,600);

    //creacion y set de personaje
    personaje = new cuerpo();
    personaje->setPosx(750);
    personaje->setPosy(50);
    personaje->setPos(750,50);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable);
    personaje->setFocus();
    scene->addItem(personaje);
    QMessageBox::information(this,tr("Inicia el juego"),tr("PRESIONA LA TECLA TAB O DALE CLICK SOBRE EL PERSONAJE"));
    portal1 = new pared(50,50,-740,-30);
    scene->addItem(portal1);



    //Creacion de paredes del mundo

    personaje->setPared(paredaux);

    for(int i = 0 ; i <paredaux.size(); i++){
       scene->addItem(paredaux.at(i));
    }

    //enemigo1->posx =100;
    //enemigo1 ->posy = 10;
    //enemigo1->setPos(100,80);

    scene->addItem(enemigo1);

    //actualizacion para tomar la moneda
    monedas = new moneda();
    monedas->setPos(350,280);
    scene->addItem(monedas);
    time = new QTimer;
    time->start(80);

    connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
    connect(time, SIGNAL(timeout()), this,SLOT(portal()));
    connect(time, SIGNAL(timeout()), this,SLOT(enemy1()));

    show();


}

void juego3::Actualizacion()
{
  if(monedas->collidesWithItem(personaje) )
    {
      take = true;
      scene->removeItem(monedas);
      delete monedas;


      disconnect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));
    }
}

void juego3::portal()
{
    if(portal1->collidesWithItem(personaje) && take == true )
      {
        this->setSalir(true);
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

void juego3::enemy1()
{
    int centrox = 390, centroy = 280, x , y;

    if(personaje->collidesWithItem(enemigo1) )
      {
        if(take == true){
            take = false;
            monedas = new moneda();
            monedas->setPos(350,280);
            scene->addItem(monedas);
            connect(time, SIGNAL(timeout()), this,SLOT(Actualizacion()));

        }

        personaje->posx=750;
        personaje->posy=50;
        personaje->setPos(750,50);

        enemigo1->posx =100;
        enemigo1 ->posy = 10;
        enemigo1->setPos(100,80);

    }

    t += 20;

  x = centrox + 200  * cos(t*0.01);
    y = centroy + 200 * sin(t*0.01);

    enemigo1->posx =x;
    enemigo1 ->posy = y;
    enemigo1->setPos(x,y);


}

void juego3::Dificultad()
{
    int aux =8-(this->getDificultad()) ;
    personaje->setVelocidad(aux);
}


bool juego3::getSalir() const
{
    return salir;
}

void juego3::setSalir(bool value)
{
    salir = value;


}
