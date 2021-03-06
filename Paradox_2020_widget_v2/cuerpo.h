#ifndef CUERPO_H
#define CUERPO_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QPixmap>
#include <QKeyEvent>
#include <QList>
#include "pared.h"
class cuerpo:  public QObject, public QGraphicsItem
{
    Q_OBJECT

private:

    int posx, posy;
    int velocidad = 5;
    int dir = 0;
    QList<pared *> paredes;

public:
    explicit cuerpo(QObject *parent = nullptr);
   // cuerpo(int r_, int x, int y);

    QTimer *timer;
    QPixmap *pixmap;

    float filas, columnas;
    float ancho, alto;



    int getR() const;
    void setR(int radio);
    int getPosx() const;
    void setPosx(int px);
    int getPosy() const;
    void setPosy(int py);

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void up();
    void down();
    void left();
    void right();

    void keyPressEvent(QKeyEvent * evento);
    int getDir() const;
    void setDir(int value);

    QList<pared*>getPared();
    void setPared(QList<pared*>lista);


signals:
public slots:
    void Actualizacion();
};

#endif // CUERPO_H
