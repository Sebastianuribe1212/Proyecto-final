#ifndef LAUNCHER_H
#define LAUNCHER_H

#include "juego.h"
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
    juego * juego1 = new juego();

signals:
public slots:
    void Actualizacion1();

};

#endif // LAUNCHER_H
