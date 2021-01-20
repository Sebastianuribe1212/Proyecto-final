
#include "pared.h"


pared::pared(int w_, int h_, int x, int y)
{
    w = w_;
    h = h_;
    posx = x;
    posy = y;
}

QRectF pared::boundingRect() const
{
    return QRectF(-posx,-posy,w, h);
}

void pared::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::transparent);
    painter->drawRect(boundingRect());
}

QList<pared *> pared::mundo1()
{
    QList<pared*>paredes1;
    pared * muro1  = new pared(800,50,0,0);
    paredes1.push_back(muro1);
    pared * muro2  = new pared(50,800,-750,0);
    paredes1.push_back(muro2);
    pared * muro3  = new pared(350,50,0,-550);
    paredes1.push_back(muro3);
    pared * muro4  = new pared(350,50,-450,-550);
    paredes1.push_back(muro4);
    pared * muro5  = new pared(50,800,0,0);
    paredes1.push_back(muro5);
    pared * muro6 = new pared(150,100,-150,-150);
    paredes1.push_back(muro6);
    pared * muro7 = new pared(500,100,-150,-350);
    paredes1.push_back(muro7);

    pared * muro7_1 = new pared(5,100,-300,-250);
    paredes1.push_back(muro7_1);

    pared * muro8 = new pared(150,100,-500,-150);
    paredes1.push_back(muro8);
    //pared * muro9 = new pared(50,100,-600,-350);
    //paredes1.push_back(muro9);
    pared * muro9_1 = new pared(5,100,-500,-250);
    paredes1.push_back(muro9_1);



    return paredes1;
}

QList<pared *> pared::mundo2()
{
    QList<pared*>paredes1;
    pared * muro1  = new pared(50,800,-800,0);
    paredes1.push_back(muro1);
    pared * muro2  = new pared(50,800,75,0);
    paredes1.push_back(muro2);
    pared * muro3  = new pared(800,50,0,75);
    paredes1.push_back(muro3);
    pared * muro4  = new pared(800,50,0,-600);
    paredes1.push_back(muro4);
    pared * muro5  = new pared(50,450,-600,0);
    paredes1.push_back(muro5);
    pared * muro6  = new pared(50,450,-370,-150);
    paredes1.push_back(muro6);
    pared * muro7  = new pared(50,450,-150,0);
    paredes1.push_back(muro7);
    return paredes1;
}

QList<pared *> pared::mundo3()
{
    QList<pared*>paredes1;
    pared * muro1  = new pared(50,800,-800,0);
    paredes1.push_back(muro1);
    pared * muro2  = new pared(50,800,75,0);
    paredes1.push_back(muro2);
    pared * muro3  = new pared(800,50,0,75);
    paredes1.push_back(muro3);
    pared * muro4  = new pared(800,50,0,-600);
    paredes1.push_back(muro4);

    return paredes1;
}
