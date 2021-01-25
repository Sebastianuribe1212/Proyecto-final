#ifndef ADMIN_PARTIDAS_H
#define ADMIN_PARTIDAS_H

#include "form.h"
#include "launcher.h"
#include <QWidget>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
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
    Form * w = new Form(0);

    QString getUser() const;
    void setUser(const QString &value);

    QString getMundo() const;
    void setMundo(const QString &value);

    QSqlDatabase getDbmain() const;
    void setDbmain(const QSqlDatabase &value);

private slots:

    void Actualizacion1();
    void on_user_clicked();
    void on_Cargarpartida_clicked();

    void on_Guardar_clicked();

private:
    Ui::Admin_partidas *ui;
    QSqlDatabase dbmain;
    QString mundo;
    QString user;
};

#endif // ADMIN_PARTIDAS_H
