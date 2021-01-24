#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include "login.h"
#include "registro.h"
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_boton2_clicked();

    void on_boton1_clicked();

private:
    Ui::Form *ui;
    QSqlDatabase dbmain;
};

#endif // FORM_H
