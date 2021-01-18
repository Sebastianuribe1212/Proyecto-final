#ifndef MONEDA_H
#define MONEDA_H

#include <QObject>

#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
class moneda: public QGraphicsItem
{


    int r;
    int posx, posy;
    int velocidad = 5;

public:
    moneda(int r_,int x, int y);
    //moneda(string nom, float sc);

    int getPosx() const;
    void setPosx(int value);
    int getPosy() const;
    void setPosy(int value);

    int getR() const;
    void setR(int value);


    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr );
};

#endif // MONEDA_H
