#ifndef JUEGO_H
#define JUEGO_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QKeyEvent>
#include "pared.h"
#include <QTimer>
#include <QList>
#include "pared.h"
#include "cuerpo.h"


class juego: public QGraphicsView
{
    Q_OBJECT
public:
    juego(QWidget * parent = 0);

    QGraphicsScene * scene;

    cuerpo *  personaje = new cuerpo();
    //pared * muro2  = new pared(40,60,-100,-100);

    QTimer *time ;

    QList<pared*>mundo1();

public slots:
    void Actualizacion();
};

#endif // JUEGO_H
