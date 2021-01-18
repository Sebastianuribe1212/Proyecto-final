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
private:
    bool salir = false;
public:
    juego(QWidget * parent = 0);

    QGraphicsScene * scene;
    cuerpo *  personaje = new cuerpo();
    QTimer *time ;
    moneda * monedas;

    pared * mund1;

    moneda * monedas;
    pared * portal1 ;
    bool take = false;
    bool finish = false;

    QList<pared*>paredaux = mund1->mundo1();
    bool getSalir() const;
    void setSalir(bool value);

public slots:
    void Actualizacion();
    void portal();
};

#endif // JUEGO_H
