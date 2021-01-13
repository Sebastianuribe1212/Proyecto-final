#ifndef JUEGO_H
#define JUEGO_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QKeyEvent>
#include "pared.h"
#include "cuerpo.h"


class juego: public QGraphicsView
{
public:
    juego(QWidget * parent = 0);

    QGraphicsScene * scene;

    pared *muro1;


    cuerpo *  personaje = new cuerpo();

};

#endif // JUEGO_H
