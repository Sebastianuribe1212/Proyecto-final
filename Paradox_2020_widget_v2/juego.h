#ifndef JUEGO_H
#define JUEGO_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QTimer>
#include <QList>

#include "enemy1.h"
#include "pared.h"
#include "cuerpo.h"
#include "moneda.h"

class juego: public QGraphicsView
{
    Q_OBJECT
private:
    bool salir = false;
    int dificultad =1;
public:
    juego(QWidget * parent = 0);

    QGraphicsScene * scene;

    cuerpo *  personaje = new cuerpo();

    QTimer *time ;

    pared * mund1;

    moneda * monedas;

    pared * portal1 ;

    enemy1 * enemigo1 = new enemy1();

    enemy1 * enemigo2 = new enemy1();

    bool take = false;


    QList<pared*>paredaux = mund1->mundo1();

    bool getSalir() const;
    void setSalir(bool value);

    int getDificultad() const;
    void setDificultad(int value);

public slots:
    void Actualizacion();
    void portal();
    void MoveEnemy();
    void MoveEnemy2();
    void Dificultad();
};

#endif // JUEGO_H
