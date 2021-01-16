#include <QApplication>
#include "launcher.h"
launcher *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new launcher();
    //game ->show();

    return a.exec();
}
