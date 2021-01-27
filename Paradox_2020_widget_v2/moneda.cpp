//me devuelve la creacion de una "moneda" (un objeto que vamos a recoger)
#include "moneda.h"

moneda::moneda()
{
    setPixmap(QPixmap(":/Mon_tapabocas"));
    setScale(0.15);
    setPos(350,250);
}
