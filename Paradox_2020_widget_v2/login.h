#ifndef LOGIN_H
#define LOGIN_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QWidget>


namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    bool getSalir() const;
    void setSalir(bool value);



    QString getMundo() const;
    void setMundo(const QString &value);

    QString getUser() const;
    void setUser(const QString &value);

private slots:
    void on_entrar_clicked();

private:
    Ui::Login *ui;
    bool salir = false;
    QString mundo;
    QString user;

};

#endif // LOGIN_H
