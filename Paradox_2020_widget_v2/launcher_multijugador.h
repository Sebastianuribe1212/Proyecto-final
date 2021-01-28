#ifndef LAUNCHER_MULTIJUGADOR_H
#define LAUNCHER_MULTIJUGADOR_H

#include <QWidget>

#include "juego.h"
#include "juego2.h"
#include "juego3.h"
#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include "form.h"

class Launcher_multijugador:  public QGraphicsView

        {
            Q_OBJECT
        public:

            Launcher_multijugador(QWidget * parent = 0);
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

            QString getMundoAux() const;
            void setMundoAux(const QString &value);

public slots:
            void Actualizacion1();
            void Actualizacion2();
            void Actualizacion2_2();
            void Actualizacion3();
            void Actualizacion3_3();
            void Actualizacion4();
            void Actualizacion4_2();
        private:
            QString mundo;
            QString mundoAux;
            bool salir = false;
            int dificultad = 1;
        };

#endif // LAUNCHER_MULTIJUGADOR_H
