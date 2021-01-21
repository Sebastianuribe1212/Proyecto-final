#ifndef ENEMY2_H
#define ENEMY2_H


#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QPixmap>


class enemy2: public QObject, public QGraphicsItem
{
    Q_OBJECT



public:
    explicit enemy2(QObject *parent = nullptr);

    int posx, posy;
    int direccion = 1;
    int velocidad = 5;

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



;
};

#endif // ENEMY2_H
