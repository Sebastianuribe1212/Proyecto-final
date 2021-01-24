#include "admin_partidas.h"
#include "ui_admin_partidas.h"

Admin_partidas::Admin_partidas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin_partidas)
{

    ui->setupUi(this);
    timer = new QTimer;
    timer->start(80);
    connect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion1()));

}

Admin_partidas::~Admin_partidas()
{
    delete ui;
}

void Admin_partidas::on_pushButton_clicked()
{

}
QString Admin_partidas::getMundo() const
{
    return mundo;
}

void Admin_partidas::setMundo(const QString &value)
{
    mundo = value;
}

QString Admin_partidas::getUser() const
{
    return user;
}

void Admin_partidas::setUser(const QString &value)
{
    user = value;
}

void Admin_partidas::Actualizacion1()
{
    if(w->getSalir() == true){
           setMundo(w->getMundo());
           setUser(w->getUser());
           w->hide();
           disconnect(timer,SIGNAL(timeout()), this,SLOT(Actualizacion1()));
    }


}


void Admin_partidas::on_user_clicked()
{

    w->show();
}
