#include "moneda.h"

<<<<<<< HEAD
moneda::moneda()
{
    setPixmap(QPixmap(":/negro.png"));
    setScale(0.35);
}

=======
moneda::moneda(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
}

int moneda::getR() const
{
    return r;
}

void moneda::setR(int value)
{
    r = value;
}

int moneda::getPosy() const
{
    return posy;
}

void moneda::setPosy(int value)
{
    posy = value;
}


int moneda::getPosx() const
{
    return posx;
}

void moneda::setPosx(int value)
{
    posx = value;

}
QRectF moneda::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void moneda::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkYellow);
    painter->drawEllipse(boundingRect());
}
>>>>>>> 137af9f2218192a3e100fc976ab3a81a1ae156dc
