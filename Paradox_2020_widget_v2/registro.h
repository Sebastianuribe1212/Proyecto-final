#ifndef REGISTRO_H
#define REGISTRO_H

#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QWidget>

namespace Ui {
class Registro;
}

class Registro : public QWidget
{
    Q_OBJECT

public:
    explicit Registro(QWidget *parent = nullptr);
    ~Registro();
    void CrearTabla();

private slots:
    void on_enviar_clicked();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
