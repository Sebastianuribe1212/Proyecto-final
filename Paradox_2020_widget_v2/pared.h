
#ifndef PARED_H
#define PARED_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPainter>
#include <QPixmap>
#include <list>

class pared: public QGraphicsItem
{

    int w,h;
    int posx, posy;
public:
    pared(int w_, int h_, int x, int y);

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    QList<pared*>mundo1();

    QList<pared*>mundo2();
    QList<pared*>mundo3();

};

#endif // PARED_H
