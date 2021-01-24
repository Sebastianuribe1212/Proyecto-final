#include <QApplication>
#include "launcher.h"
#include "form.h"

launcher *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
      a.setStyle("fusion");
       Form w;
       w.show();
    //game = new launcher();
    //game ->show();

    return a.exec();
}
