#include "digit_info.h"
#include "ui_digit_info.h"

digit_info::digit_info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::digit_info)
{
    ui->setupUi(this);
}

digit_info::~digit_info()
{
    delete ui;
}
