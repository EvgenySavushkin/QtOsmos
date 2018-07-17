#include "second.h"
#include "ui_second.h"
#include <QMenuBar>
#include <QAction>
#include <QMenu>

second::second(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);
    tWindow = new third();

    QVBoxLayout *boxLayout = new QVBoxLayout(this);
    QMenuBar* menuBar = new QMenuBar();
    QMenu *fileMenu = new QMenu("Файл");
    menuBar->addMenu(fileMenu);
    fileMenu->addAction("Новый");
    fileMenu->addAction("Открыть");
    fileMenu->addAction("Сохранить");
    fileMenu->addAction("Печать");
    fileMenu->addSeparator();
    fileMenu->addAction("Выход");
    QMenu *fileMenu2 = new QMenu("О программе");
    menuBar->addMenu(fileMenu2);
    this->layout()->setMenuBar(menuBar);
}

second::~second()
{
    delete ui;
}



void second::on_pushButton_2_clicked()
{
    tWindow->show();
    this->hide();
}
