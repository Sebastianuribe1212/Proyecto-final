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
#include "enemy2.h"

class juego2: public QGraphicsView
{
    Q_OBJECT
private:
    bool salir = false;
    int dificultad = 2;
public:
    juego2(QWidget * parent = 0);

    QGraphicsScene * scene;

    cuerpo *  personaje = new cuerpo();
    QTimer *time ;

    QTimer *abeja ;

    pared * mund2 ;

    enemy2 * enemigo1 = new enemy2();
    moneda * monedas;
    pared * portal1 ;
    bool take = false;

    QList<pared*>paredaux = mund2->mundo2();
    bool getSalir() const;
    void setSalir(bool value);

    int getDificultad() const;
    void setDificultad(int value);

public slots:
    void Actualizacion();
    void portal();
    void enemy1();
    void Dificultad();
    void Paredes();
};
#endif // JUEGO2_H
