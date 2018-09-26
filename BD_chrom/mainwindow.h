#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <form1.h>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QUrl>


#include <QTextCodec>  // для преобразования кодировки
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
    // cлот выполняемый при завершении запроса:
    void replyFinished();





private:
    Ui::MainWindow *ui;
    Form1 * sWindow;
    QNetworkAccessManager* manager;
};

#endif // MAINWINDOW_H
