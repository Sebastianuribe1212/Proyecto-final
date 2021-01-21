#ifndef LAUNCHER_H
#define LAUNCHER_H

#include "juego.h"
#include "juego2.h"
#include "juego3.h"
#include <QWidget>
#include <QObject>
#include <QTimer>
#include <QGraphicsView>
class launcher: public QObject
{
    Q_OBJECT
public:

    launcher(QWidget * parent = 0);
    QTimer *time ;
    //juego * juego1 = new juego();
    juego2 * juego_2 = new juego2();
   //juego3 * juego_3 = new juego3();

signals:
public slots:
    void Actualizacion1();
};

#endif // LAUNCHER_H
