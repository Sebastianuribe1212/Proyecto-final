#include <QApplication>
#include "launcher.h"
#include "admin_partidas.h"

launcher *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     a.setStyle("fusion");
     Admin_partidas w;
     w.show();
    //game = new launcher();
    //game->show();

    return a.exec();
}
