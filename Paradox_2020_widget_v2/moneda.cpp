//me devuelve la creacion de una "moneda" (un objeto que vamos a recoger)
#include "moneda.h"

moneda::moneda()
{
    setPixmap(QPixmap(":/Tapabocas-baratos.png"));
    setScale(0.10);
    setPos(350,250);
}
