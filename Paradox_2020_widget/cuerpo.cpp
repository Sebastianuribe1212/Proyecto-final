
#include "cuerpo.h"

/*
cuerpo::cuerpo(int r_, int x, int y)
{

    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
}

int cuerpo::getR() const
{
    return r;
}

void cuerpo::setR(int value)
{
    r = value;
}

int cuerpo::getPosx() const
{
    return posx;
}

void cuerpo::setPosx(int value)
{
    posx = value;
}

int cuerpo::getPosy() const
{
    return posy;
}

void cuerpo::setPosy(int value)
{
    posy = value;
}



void cuerpo::up()
{
    posy -= 0.5*velocidad;
    setPos(posx, posy);
}

void cuerpo::down()
{
    posy += 0.5*velocidad;
    setPos(posx, posy);
}

void cuerpo::left()
{
    posx -= 0.5*velocidad;
    setPos(posx, posy);
}

void cuerpo::right()
{
    posx += 0.5*velocidad;
    setPos(posx, posy);
}
*/
cuerpo::cuerpo(QObject *parent): QObject(parent)
{
    timer = new QTimer();
    filas = 0;
    columnas = 0;

    pixmap = new QPixmap(":/donalPNG.png");

    ancho = 80;
    alto = 100;

    timer->start(300);
    connect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);


}
void cuerpo::Actualizacion()
{
       columnas += 80;
            if(columnas >= 960)
            {
                columnas = 0;
            }
            this->update(-ancho/2,-alto/2,ancho,alto);
}


QRectF cuerpo::boundingRect() const
    {
        return QRectF(-ancho/2,-alto/2,ancho,alto);
    }

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
        painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);

    }
