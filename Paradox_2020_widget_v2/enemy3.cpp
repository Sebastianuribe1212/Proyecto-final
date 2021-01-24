#include "enemy3.h"


enemy3::enemy3(QObject *parent): QObject(parent)
{
    pixmap = new QPixmap(":/abeja.png");
    ancho = 1920;
    alto = 1846;
    posx=50;
    posy=80;
    setScale(0.015);

}

QRectF enemy3::boundingRect() const
    {
        return QRectF(-ancho/2,-alto/2,ancho,alto);
    }
void enemy3::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
       painter->drawPixmap(-ancho/2,-alto/2,*pixmap,1,0,ancho,alto);//ancho y alto, lo que mida la imagen

    }
int enemy3::getPosy() const
{
    return posy;
}

void enemy3::setPosy(int value)
{
    posy = value;
}

int enemy3::getVelocidad() const
{
    return velocidad;
}

void enemy3::setVelocidad(int value)
{
    velocidad = value;
}


int enemy3::getPosx() const
{
    return posx;
}

void enemy3::setPosx(int value)
{
    posx = value;
}

void enemy3::up()
{
    posy -= 1*velocidad;
    setPos(posx, posy);
}

void enemy3::down()
{
    posy += 1*velocidad;
    setPos(posx, posy);
}

void enemy3::left()
{
    posx -= 1*velocidad;
    setPos(posx, posy);
}

void enemy3::right()
{
    posx += 1*velocidad;
    setPos(posx, posy);

}
