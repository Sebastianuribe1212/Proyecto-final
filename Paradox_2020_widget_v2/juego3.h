#ifndef JUEGO3_H
#define JUEGO3_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QTimer>
#include <QList>
#include <cmath>

#include "pared.h"
#include "cuerpo.h"
#include "moneda.h"
#include "enemy3.h"

class juego3: public QGraphicsView
{
    Q_OBJECT
private:
    bool salir = false;
    int t = 0;
public:
    juego3(QWidget * parent = 0);

    QGraphicsScene * scene;

    cuerpo *  personaje = new cuerpo();
    QTimer *time ;
    QTimer *move ;


    pared * mund3;

    moneda * monedas;
    pared * portal1 ;
    bool take = false;
    bool finish = false;
    enemy3 * enemigo1 = new enemy3();

    QList<pared*>paredaux = mund3->mundo3();
    bool getSalir() const;
    void setSalir(bool value);

public slots:
    void Actualizacion();
    void portal();
    void enemy1();
};

#endif // JUEGO3_H
