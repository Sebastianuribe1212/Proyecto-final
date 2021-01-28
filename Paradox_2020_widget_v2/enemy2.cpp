//Enemigo del mundo 2 (Es una abeja que sigue al jugador), el jugador al tocarlo muere y se reinica la partida
#include "enemy2.h"


enemy2::enemy2(QObject *parent): QObject(parent)
{
    pixmap = new QPixmap(":/abeja.png");
    ancho = 1920;
    alto = 1846;
    posx=50;
    posy=80;
    setScale(0.025);

}

QRectF enemy2::boundingRect() const
    {
        return QRectF(-ancho/2,-alto/2,ancho,alto);
    }
void enemy2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
       painter->drawPixmap(-ancho/2,-alto/2,*pixmap,1,0,ancho,alto);//ancho y alto, lo que mida la imagen

    }
int enemy2::getPosy() const
{
    return posy;
}

void enemy2::setPosy(int value)
{
    posy = value;
}

int enemy2::getVelocidad() const
{
    return velocidad;
}

void enemy2::setVelocidad(int value)
{
    velocidad = value;
}


int enemy2::getPosx() const
{
    return posx;
}

void enemy2::setPosx(int value)
{
    posx = value;
}

void enemy2::up()
{
    posy -= 1*velocidad;
    setPos(posx, posy);
}

void enemy2::down()
{
    posy += 1*velocidad;
    setPos(posx, posy);
}

void enemy2::left()
{
    posx -= 1*velocidad;
    setPos(posx, posy);
}

void enemy2::right()
{
    posx += 1*velocidad;
    setPos(posx, posy);

}
