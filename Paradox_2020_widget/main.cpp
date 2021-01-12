#include <QApplication>
#include "juego.h"
juego *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new juego();
    game ->show();

    return a.exec();
}
