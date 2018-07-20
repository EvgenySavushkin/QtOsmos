#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <second.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_action_6_triggered();

    void on_action_3_triggered();

    void on_action_2_triggered();

    void on_action_triggered();

signals:
    void newm();
    void savem(QString);
    void openm(QString);

private:
    Ui::MainWindow *ui;
    second *sWindow;
    QString currentFile;
};

#endif // MAINWINDOW_H
