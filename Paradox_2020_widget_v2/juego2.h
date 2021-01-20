#ifndef JUEGO2_H
#define JUEGO2_H
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

class juego2: public QGraphicsView
{
    Q_OBJECT
private:
    bool salir = false;
public:
    juego2(QWidget * parent = 0);

    QGraphicsScene * scene;

    cuerpo *  personaje = new cuerpo();
    QTimer *time ;

    pared * mund2;

    moneda * monedas;
    pared * portal1 ;
    bool take = false;
    bool finish = false;

    QList<pared*>paredaux = mund2->mundo2();
    bool getSalir() const;
    void setSalir(bool value);

public slots:
    void Actualizacion();
    void portal();
};
#endif // JUEGO2_H
