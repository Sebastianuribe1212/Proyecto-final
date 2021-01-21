#ifndef ENEMY1_H
#define ENEMY1_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QPixmap>


class enemy1: public QObject, public QGraphicsItem
{
    Q_OBJECT


    bool direccion = true;
public:
    explicit enemy1(QObject *parent = nullptr);

    int velocidad = 5;
    int posx, posy;

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

    bool getDireccion() const;
    void setDireccion(bool value);



};

#endif // ENEMY1_H
