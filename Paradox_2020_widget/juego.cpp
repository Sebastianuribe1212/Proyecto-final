#include "juego.h"

juego :: juego(QWidget * parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(800,600);

    personaje = new cuerpo(20,400,300);

    personaje->setPos(width()/2,height()/2);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable);
    personaje->setFocus();

    muro1 = new pared(40,260,0,0);

    scene->addItem(personaje);

    scene->addItem(muro1);
    show();
}

void juego::keyPressEvent(QKeyEvent *evento)
{
   //cuerpo *  personaje = new cuerpo(50,400,300);
    if (evento->key()== Qt::Key_A){
             personaje->left();

    }
    else if (evento->key()== Qt::Key_S){
          personaje->down();
    }
    else if (evento->key()== Qt::Key_D){

            personaje->right();
    }
    else if (evento->key()== Qt::Key_W){
            personaje->up();
    }
}
