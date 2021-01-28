#ifndef DATOS_H
#define DATOS_H

#include <QWidget>

namespace Ui {
class datos;
}

class datos : public QWidget
{
    Q_OBJECT

public:
    explicit datos(QWidget *parent = nullptr);
    ~datos();

private:
    Ui::datos *ui;
};

#endif // DATOS_H
