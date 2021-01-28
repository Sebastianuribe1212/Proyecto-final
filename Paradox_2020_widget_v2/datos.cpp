#include "datos.h"
#include "ui_datos.h"

datos::datos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::datos)
{
    ui->setupUi(this);
}

datos::~datos()
{
    delete ui;
}
