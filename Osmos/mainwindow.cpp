#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow = new second();
    connect(sWindow,SIGNAL( newme_l()),this,SLOT( on_action_triggered()));
    connect(this,SIGNAL( savem(QString)),sWindow,SLOT( savem(QString)));
    connect(sWindow,SIGNAL( savme_l()),this,SLOT( on_action_3_triggered()));
    connect(sWindow,SIGNAL( opeme_l()),this,SLOT( on_action_2_triggered()));
    connect(this,SIGNAL( openm(QString)),sWindow,SLOT( openm(QString)));
    connect(this,SIGNAL( newm()),sWindow,SLOT( newm()));

}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_2_clicked()
{
    sWindow->show();
    //this->hide();


}

void MainWindow::on_pushButton_3_clicked()
{

}
void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_action_6_triggered()
{
    QCoreApplication::quit();
}

void MainWindow::on_action_3_triggered()
{
    QString fileName;
        // If we don't have a filename from before, get one.
        if (currentFile.isEmpty()) {
            fileName = QFileDialog::getSaveFileName(this, "Save");
            currentFile = fileName;
        } else {
            QMessageBox::StandardButton reply;
            //QMessageBox msgBox;
            //msgBox.setText("Question");
              reply = QMessageBox::question(this, "**** ++++ ****", "Хотите сохранить файл?",QMessageBox::Yes|QMessageBox::No);
              if (reply == QMessageBox::Yes) {
               // msgBox.setText("Yes was clicked");
                //msgBox.exec();
                fileName = currentFile;
               // QApplication::quit();
              } else {
               // msgBox.setText("Yes was *not* clicked");
               // msgBox.exec();
                  return;
              }


        }
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
            return;
        }
         QTextStream out(&file);
         out<<ui->lineEdit->text()<<endl;
         out<<ui->lineEdit_2->text()<<endl;
         out<<ui->lineEdit_3->text()<<endl;
         out<<ui->comboBox->currentText()<<endl;
         out<<ui->lineEdit_4->text()<<endl;
         out<<ui->dateEdit->text()<<endl;

        file.close();
        emit savem(currentFile);
}

void MainWindow::on_action_2_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
        QFile file(fileName);
        currentFile = fileName;
        if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
            return;
        }

        QTextStream in(&file);
        QString text = in.readLine();
        ui->lineEdit->setText(text);
        text = in.readLine();
        ui->lineEdit_2->setText(text);
        text = in.readLine();
        ui->lineEdit_3->setText(text);
        text = in.readLine();
        ui->comboBox->setCurrentText(text);
        text = in.readLine();
        ui->lineEdit_4->setText(text);
        text = in.readLine();
        QDate date= QDate::fromString(text);
        ui->dateEdit->setDate(date);
        file.close();
        emit openm(currentFile);
}

void MainWindow::on_action_triggered()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    this->show();
    currentFile ="";
    emit newm();
}
