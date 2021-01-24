#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include "login.h"
#include "registro.h"
#include <QTimer>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    QTimer *timer;
    Login *login = new Login(0);
    ~Form();

    QString getMundo() const;
    void setMundo(const QString &value);

    QString getUser() const;
    void setUser(const QString &value);

    bool getSalir() const;
    void setSalir(bool value);

    QSqlDatabase getDbmain() const;
    void setDbmain(const QSqlDatabase &value);

private slots:
    void on_boton2_clicked();
    void Actualizacion();
    void on_boton1_clicked();

private:
    Ui::Form *ui;
    QSqlDatabase dbmain;
    QString mundo;
    QString user;
    bool salir = false;

};

#endif // FORM_H
