#ifndef ADMIN_PARTIDAS_H
#define ADMIN_PARTIDAS_H

#include "form.h"
#include <QWidget>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QTimer>

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

    Form * w = new Form(0);

    QString getUser() const;
    void setUser(const QString &value);

    QString getMundo() const;
    void setMundo(const QString &value);

private slots:
    void on_pushButton_clicked();
    void Actualizacion1();
    void on_user_clicked();

private:
    Ui::Admin_partidas *ui;
    QString mundo;
    QString user;
};

#endif // ADMIN_PARTIDAS_H
