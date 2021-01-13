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

    personaje->setPos(400,300);
    personaje->setFlag(QGraphicsItem::ItemIsFocusable);
    personaje->setFocus();

    muro1 = new pared(40,260,0,0);

    scene->addItem(personaje);

    //scene->addItem(muro1);
    show();
}

