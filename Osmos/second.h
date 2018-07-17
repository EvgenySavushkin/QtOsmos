#ifndef SECOND_H
#define SECOND_H

#include <QWidget>
#include <third.h>

namespace Ui {
class second;
}

class second : public QWidget
{
    Q_OBJECT

public:
    explicit second(QWidget *parent = 0);
    ~second();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::second *ui;
    third *tWindow;
};

#endif // SECOND_H
