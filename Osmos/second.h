#ifndef SECOND_H
#define SECOND_H

#include <QWidget>
#include <third.h>
#include <QMainWindow>

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

    void exit_l();


    void newm_l();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_lineEdit_9_textChanged(const QString &arg1);

    void on_lineEdit_8_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_lineEdit_11_textChanged(const QString &arg1);

    void on_lineEdit_16_textChanged(const QString &arg1);

    void on_lineEdit_7_textChanged(const QString &arg1);

    void on_lineEdit_18_textChanged(const QString &arg1);

    void on_lineEdit_14_textChanged(const QString &arg1);

    void on_lineEdit_20_textChanged(const QString &arg1);

    void on_lineEdit_19_textChanged(const QString &arg1);

    void on_lineEdit_13_textChanged(const QString &arg1);

signals:
    void newm();

private:
    Ui::second *ui;
    third *tWindow;
    QMainWindow * fWindow;


    void katsum(void);
    void anisum(void);
    void totsum(void);


};

#endif // SECOND_H
