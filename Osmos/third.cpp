#include "third.h"
#include "ui_third.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>

third::third(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::third)
{
    ui->setupUi(this);

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

third::~third()
{
    delete ui;
}

void third::on_pushButton_clicked()
{

}
