
#include "cuerpo.h"


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
    posy -= 1*velocidad;
    setPos(posx, posy);
}

void cuerpo::down()
{
    posy += 1*velocidad;
    setPos(posx, posy);
}

void cuerpo::left()
{
    posx -= 1*velocidad;
    setPos(posx, posy);
}

void cuerpo::right()
{
    posx += 1*velocidad;
    setPos(posx, posy);

}

cuerpo::cuerpo(QObject *parent): QObject(parent)
{
    posx = 400;
    posy = 300;
    timer = new QTimer();
    filas = 0;
    columnas = 0;
    //dddsetPos(400,600);
    pixmap = new QPixmap(":/trump");

    ancho = 100;
    alto = 100;


    disconnect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);
    timer->start(200);

    dir = 0;

}
void cuerpo::Actualizacion()
{
       columnas += 100;
            if(columnas >= 600)
            {
                columnas = 0;
            }
            this->update(-ancho/2,-alto/2,ancho,alto);
            disconnect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);

}


QRectF cuerpo::boundingRect() const
    {
        return QRectF(-ancho/2,-alto/2,ancho,alto);
    }

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
    {
        painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,dir,ancho,alto);

    }
void cuerpo::keyPressEvent(QKeyEvent *evento)
{

    if (evento->key()== Qt::Key_A){
            left();
            dir = 300 ;
    connect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);
    }

    else if (evento->key()== Qt::Key_S){
            down();
            dir = 0 ;
    connect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);
    }

    else if (evento->key()== Qt::Key_D){

           right();
           dir = 100;
    connect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);
    }

    else if (evento->key()== Qt::Key_W){
           up();
           dir = 200;
    connect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);
    }


}

