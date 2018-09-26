#ifndef FORM1_H
#define FORM1_H

#include <QWidget>
#include <QMainWindow>
namespace Ui {
class Form1;
}

class Form1 : public QWidget
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = 0);
    ~Form1();

private:
    Ui::Form1 *ui;
    QMainWindow *fWindow;
};

#endif // FORM1_H
