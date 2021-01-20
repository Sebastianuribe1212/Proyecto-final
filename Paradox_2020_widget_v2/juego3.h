#ifndef JUEGO3_H
#define JUEGO3_H

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

class juego3: public QGraphicsView
{
    Q_OBJECT
private:
    bool salir = false;
public:
    juego3(QWidget * parent = 0);

    QGraphicsScene * scene;

    cuerpo *  personaje = new cuerpo();
    QTimer *time ;

    pared * mund3;

    moneda * monedas;
    pared * portal1 ;
    bool take = false;
    bool finish = false;

    QList<pared*>paredaux = mund3->mundo3();
    bool getSalir() const;
    void setSalir(bool value);

public slots:
    void Actualizacion();
    void portal();
};

#endif // JUEGO3_H
