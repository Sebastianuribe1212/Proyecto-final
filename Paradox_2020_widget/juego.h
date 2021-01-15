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
    QList<pared*>mundo1();

    moneda * monedas;
    pared * portal1 ;
    bool take = false;

    QList<pared*>paredaux = mundo1();
public slots:
    void Actualizacion();
    void portal();
};

#endif // JUEGO_H
