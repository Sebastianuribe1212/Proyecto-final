
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

int cuerpo::getDir() const
{
    return dir;
}

void cuerpo::setDir(int value)
{
    dir = value;
}

cuerpo::cuerpo(QObject *parent): QObject(parent)
{
    posx = 400;
    posy = 550;
    timer = new QTimer();
    filas = 0;
    columnas = 0;
    pixmap = new QPixmap(":/trump");

    ancho = 100;
    alto = 100;


    disconnect(timer, &QTimer::timeout, this, &cuerpo::Actualizacion);
    timer->start(100);

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

    pared * muro1  = new pared(40,260,0,0);


    if (evento->key()== Qt::Key_A){
           left();
           setDir(300);
            if(collidesWithItem(muro1)){
               right();
            }
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
    else if (evento->key()== Qt::Key_R){
        //delete personaje;
    }


}


