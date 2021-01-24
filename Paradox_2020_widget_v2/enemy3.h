#ifndef ENEMY3_H
#define ENEMY3_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QPixmap>


class enemy3: public QObject, public QGraphicsItem
{
    Q_OBJECT



public:
    explicit enemy3(QObject *parent = nullptr);

    int posx, posy;
    int direccion = 1;
    int velocidad = 8;

    float ancho, alto;

    QTimer *timer;
    QPixmap *pixmap;

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    int getPosx() const;
    void setPosx(int value);

    int getPosy() const;
    void setPosy(int value);

    int getVelocidad() const;
    void setVelocidad(int value);

    void up();
    void down();
    void left();
    void right();



};

#endif // ENEMY3_H
