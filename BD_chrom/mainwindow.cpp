#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QMessageBox>
#include <QtSql/QSqlQuery>



#include <QTextCodec>  // для преобразования кодировки

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->lineEdit->setText("http://avazart.zz.mu");

    // Создаем объект менеджера
     manager = new QNetworkAccessManager(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("Driver={Microsoft Access Driver (*.mdb, *.accdb)};DSN='';DBQ=D:\\User\\Documents\\1\\DBv1.accdb");

        if(db.open()){
         QMessageBox::warning(this, "Warning", "oK");
            QSqlQuery query("SELECT * FROM [Нужная таблица]");
              /*   while (query.next())
                {
                   QString country = query.value(0).toString();
                 QMessageBox::warning(this, "Warning", country);
                }*/
                    }
        else
         QMessageBox::warning(this, "Warning", db.lastError().text());
}

void MainWindow::on_pushButton_2_clicked()
{
    // берем адрес введенный в текстовое поле
    QUrl url(ui->lineEdit->text());

    // создаем объект для запроса
    QNetworkRequest request(url);
    // Выполняем запрос, получаем указатель на объект
    // ответственный за ответ
    QNetworkReply* reply =  manager->get(request);
    // Подписываемся на сигнал о готовности загрузки
 //   connect( reply, SIGNAL(finished()),this, SLOT(replyFinished()) );

    QEventLoop loop;
    connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    // выводим содержимое
    if (reply->error() == QNetworkReply::NoError)
    {
    QByteArray content= reply->readAll();
    QTextCodec *codec = QTextCodec::codecForName("utf8"); // cp-1251
    ui->textEdit->insertPlainText(codec->toUnicode(content.data()) );
    }
    else
    {
    ui->textEdit->setPlainText(reply->errorString());
    }
    reply->deleteLater();
}

void MainWindow::replyFinished()
{
    QNetworkReply *reply=  qobject_cast<QNetworkReply *>(sender());
        if (reply->error() == QNetworkReply::NoError)
        {
        // Получаем содержимое ответа
        QByteArray content= reply->readAll();

        // Реализуем преобразование кодировки
        // (зависит от кодировки сайта)
        QTextCodec *codec = QTextCodec::codecForName("utf8");

        // Выводим результат
         ui->textEdit->setPlainText(codec->toUnicode(content.data()) );
        }
        else
        {
        // Выводим описание ошибки, если она возникает.
        ui->textEdit->setPlainText(reply->errorString());
        }
        // разрешаем объекту-ответа "удалится"
        reply->deleteLater();
}


