#ifndef JUEGO_H
#define JUEGO_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>

class juego: public QGraphicsView
{
public:
    juego(QWidget * parent = 0);
    QGraphicsScene * scene;
};

#endif // JUEGO_H
