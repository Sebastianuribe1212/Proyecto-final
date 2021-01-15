#ifndef JUEGO_H
#define JUEGO_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QTimer>
#include <QList>

#include "pared.h"
#include "cuerpo.h"
#include "moneda.h"

class juego: public QGraphicsView
{
    Q_OBJECT
public:
    juego(QWidget * parent = 0);

    QGraphicsScene * scene;
    cuerpo *  personaje = new cuerpo();
    QTimer *time ;
    moneda * monedas;

    QList<pared*>mundo1();

public slots:
    void Actualizacion();
};

#endif // JUEGO_H
