#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QUrlQuery>
#include <QNetworkCookieJar>
#include <QDebug>
#include <QNetworkCookie>




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
    QUrl url(ui->lineEdit->text());
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    QNetworkReply* reply =  manager->get(request);
    connect( reply, SIGNAL(finished()),this, SLOT(replyFinished()) );

 /*   QEventLoop loop;
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
    reply->deleteLater();*/
}

void MainWindow::replyFinished()
{
    QNetworkReply *reply=  qobject_cast<QNetworkReply *>(sender());
        if (reply->error() == QNetworkReply::NoError)
        {
        QByteArray content= reply->readAll();

        QList<QNetworkCookie> a = qvariant_cast<QList<QNetworkCookie> >(reply->header(QNetworkRequest::SetCookieHeader).toList());

       if (reply->header(QNetworkRequest::SetCookieHeader).isValid()){
        //{QMessageBox::warning(this, "Warning", "oK")
        if (a.empty()==false){
       QNetworkCookie c =a[0];
       content.append(QString(c.toRawForm()));
         QMessageBox::warning(this, "Warning", "oK");}}



        QTextCodec *codec = QTextCodec::codecForName("utf8");
        ui->textEdit->setPlainText(codec->toUnicode(content.data()) );
        }
        else
        {
        ui->textEdit->setPlainText(reply->errorString());
        }
        reply->deleteLater();
}

void MainWindow::replyFinished2()
{
    QNetworkReply *reply=  qobject_cast<QNetworkReply *>(sender());
        if (reply->error() == QNetworkReply::NoError)
        {
        QByteArray content= reply->readAll();

        //QNetworkCookieJar *a = manager->cookieJar();
         QList<QNetworkCookie> a = qvariant_cast<QList<QNetworkCookie> >(reply->header(QNetworkRequest::SetCookieHeader).toList());

         if (reply->header(QNetworkRequest::SetCookieHeader).isValid()){
             //{QMessageBox::warning(this, "Warning", "oK")
             if (a.empty()==false){
            QNetworkCookie c =a[0];
            content.append(QString(c.toRawForm()));
              QMessageBox::warning(this, "Warning", "oK");}}

        QTextCodec *codec = QTextCodec::codecForName("utf8");
        ui->textEdit_2->setPlainText(codec->toUnicode(content.data()) );
        }
        else
        {
        ui->textEdit_2->setPlainText(reply->errorString());
        }
        reply->deleteLater();
}


void MainWindow::on_pushButton_3_clicked()
{

     manager->setCookieJar(new QNetworkCookieJar);
   //  connect(manager, SIGNAL(finished(QNetworkReply*)),SLOT(readResponse(QNetworkReply*)));


     QNetworkRequest searchReq;
     searchReq.setUrl(QUrl("https://vk.com/login"));
     searchReq.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");
    // manager->get(QNetworkRequest(QUrl("https://vk.com/login")));
     QUrlQuery params;
     QByteArray data;

     params.addQueryItem("email","user@ya.ru");
     params.addQueryItem("pass","key");
     data.append(params.toString());
     data.remove(0,1);
     QNetworkReply* reply =  manager->post(searchReq,data);
     QNetworkReply* replya = manager->get(QNetworkRequest(QUrl("https://vk.com/login")));
     connect( replya, SIGNAL(finished()),this, SLOT(replyFinished()) );




  // Подписываемся на сигнал о готовности загрузки
     connect( reply, SIGNAL(finished()),this, SLOT(replyFinished2()) );
     //lblStatus->setText("Getting cookie");
     //manager->cookieJar()->
}



void MainWindow::readResponse (QNetworkReply  *reply)
{

}


