#ifndef DIGIT_INFO_H
#define DIGIT_INFO_H

#include <QWidget>

namespace Ui {
class digit_info;
}

class digit_info : public QWidget
{
    Q_OBJECT

public:
    explicit digit_info(QWidget *parent = nullptr);
    ~digit_info();

private:
    Ui::digit_info *ui;
};

#endif // DIGIT_INFO_H
