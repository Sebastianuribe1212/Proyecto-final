#include "enemy1.h"


enemy1::enemy1(QObject *parent): QObject(parent)
{
    pixmap = new QPixmap(":/Slimeball_JE2_BE2.png");
    ancho = 150;
    alto = 150;
    posx=100;
    posy=80;
    setScale(0.25);


}

QRectF enemy1::boundingRect() const
    {
        return QRectF(-ancho/2,-alto/2,ancho,alto);
    }
void enemy1::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
       painter->drawPixmap(-ancho/2,-alto/2,*pixmap,1,0,ancho,alto);//ancho y alto, lo que mida la imagen

    }
int enemy1::getPosy() const
{
    return posy;
}

void enemy1::setPosy(int value)
{
    posy = value;
}

int enemy1::getVelocidad() const
{
    return velocidad;
}

void enemy1::setVelocidad(int value)
{
    velocidad = value;
}


int enemy1::getPosx() const
{
    return posx;
}

void enemy1::setPosx(int value)
{
    posx = value;
}

void enemy1::up()
{
    posy -= 1*velocidad;
    setPos(posx, posy);
}

void enemy1::down()
{
    posy += 1*velocidad;
    setPos(posx, posy);
}
bool enemy1::getDireccion() const
{
    return direccion;
}

void enemy1::setDireccion(bool value)
{
    direccion = value;
}

