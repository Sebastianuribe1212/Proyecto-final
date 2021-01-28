#ifndef ADMIN_PARTIDAS_H
#define ADMIN_PARTIDAS_H

#include "form.h"
#include "launcher.h"
#include "about.h"
#include <QWidget>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include "launcher_multijugador.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QDebug>

namespace Ui {
class Admin_partidas;
}

class Admin_partidas : public QWidget
{
    Q_OBJECT

public:
    explicit Admin_partidas(QWidget *parent = nullptr);
    ~Admin_partidas();
    QTimer *timer;

    launcher * juego;
    Launcher_multijugador * juegoMulti;
    Form * w = new Form(0);

    About * D = new About(0);

    QString getUser() const;
    void setUser(const QString &value);

    QString getMundo() const;
    void setMundo(const QString &value);

    QSqlDatabase getDbmain() const;
    void setDbmain(const QSqlDatabase &value);

    int getDificultad() const;
    void setDificultad(int value);

private slots:

    void Actualizacion1();

    void on_user_clicked();

    void on_Cargarpartida_clicked();

    void on_Guardar_clicked();

    void on_nuevapartida_clicked();

    void on_eliminarpartida_clicked();

    void on_reiniciarpartida_clicked();

    void on_pushButton_clicked();

    void on_normal_clicked();

    void on_dificil_clicked();

    void on_pushButton_5_clicked();

    void Actualizacion_salir();

    void on_pushButton_2_clicked();

private:
    Ui::Admin_partidas *ui;
    QSqlDatabase dbmain;
    QString mundo;
    QString user;
    int dificultad;
};

#endif // ADMIN_PARTIDAS_H
