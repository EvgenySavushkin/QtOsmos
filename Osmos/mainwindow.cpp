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
    connect(sWindow,SIGNAL( newm()),this,SLOT( newm()));


}

void MainWindow::newm()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    sWindow->show();
    this->hide();


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
            fileName = currentFile;
        }
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
            return;
        }
         QTextStream out(&file);
         out<<ui->lineEdit->text();
         out<<ui->lineEdit_2->text();
         out<<ui->lineEdit_3->text();
         out<<ui->lineEdit_4->text();
        file.close();
}
