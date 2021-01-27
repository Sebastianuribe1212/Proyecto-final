#ifndef LAUNCHER_H
#define LAUNCHER_H

#include "juego.h"
#include "juego2.h"
#include "juego3.h"
#include <QObject>
#include <QTimer>
#include <QGraphicsView>
#include "form.h"



class launcher: public QGraphicsView
{
    Q_OBJECT
public:

    launcher(QWidget * parent = 0);
    QTimer *time ;
    juego * play1;
    juego2 * play2;
    juego3 * play3 ;
    QString getMundo() const;
    void setMundo(const QString &value);

    bool getSalir() const;
    void setSalir(bool value);


    int getDificultad() const;
    void setDificultad(int value);

public slots:
    void Actualizacion1();
    void Actualizacion2();
    void Actualizacion3();
    void Actualizacion4();
private:
    QString mundo;
    bool salir = false;
    int dificultad = 1;
};

#endif // LAUNCHER_H
