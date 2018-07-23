#include "second.h"
#include "ui_second.h"
#include <QMenuBar>
#include <QAction>
#include <QMenu>
#include <QMessageBox>
#include <QLineEdit>
#include "mainwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QGraphicsSimpleTextItem>


second::second(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);
  //  tWindow = new third();
  //  fWndow = new QMainWindow();


    QVBoxLayout *boxLayout = new QVBoxLayout(this);
    QMenuBar* menuBar = new QMenuBar();
    QMenu *fileMenu = new QMenu("Файл");
    menuBar->addMenu(fileMenu);
    QAction *newm = fileMenu->addAction("Новый");
    connect(newm,SIGNAL(triggered()),this,SLOT(newm_le()));
    QAction *opem = fileMenu->addAction("Открыть");
    connect(opem,SIGNAL(triggered()),this,SLOT(opem_l()));
    QAction *savm = fileMenu->addAction("Сохранить");
    connect(savm,SIGNAL(triggered()),this,SLOT(savm_l()));
    fileMenu->addSeparator();
    QAction *exit = fileMenu->addAction("Выход");
    connect(exit, SIGNAL(triggered()), this, SLOT(exit_l()));
    QMenu *fileMenu2 = new QMenu("О программе");
    menuBar->addMenu(fileMenu2);
    this->layout()->setMenuBar(menuBar);
    ui->lineEdit_41->setText("7.0");
    ui->lineEdit->setText("0.0");
    ui->lineEdit_26->setText("0.0");
    ui->lineEdit_3->setText("0.0");
    ui->lineEdit_28->setText("0.0");
    ui->lineEdit_2->setText("0.0");
    ui->lineEdit_21->setText("0.0");
    ui->lineEdit_6->setText("0.0");
    ui->lineEdit_24->setText("0.0");
    ui->lineEdit_9->setText("0.0");
    ui->lineEdit_30->setText("0.0");
    ui->lineEdit_8->setText("0.0");
    ui->lineEdit_29->setText("0.0");
    ui->lineEdit_4->setText("0.0");
    ui->lineEdit_23->setText("0.0");
    ui->lineEdit_5->setText("0.0");
    ui->lineEdit_27->setText("0.0");
    ui->lineEdit_11->setText("0.0");
    ui->lineEdit_25->setText("0.0");
    ui->lineEdit_16->setText("0.0");
    ui->lineEdit_36->setText("0.0");
    ui->lineEdit_7->setText("0.0");
    ui->lineEdit_31->setText("0.0");
    ui->lineEdit_18->setText("0.0");
    ui->lineEdit_38->setText("0.0");
    ui->lineEdit_14->setText("0.0");
    ui->lineEdit_34->setText("0.0");
    ui->lineEdit_20->setText("0.0");
    ui->lineEdit_40->setText("0.0");
    ui->lineEdit_19->setText("0.0");
    ui->lineEdit_39->setText("0.0");
    ui->lineEdit_13->setText("0.0");
    ui->lineEdit_33->setText("0.0");
    ui->lineEdit_22->setText("0.0");
    ui->lineEdit_37->setText("0.0");
    ui->lineEdit_32->setText("0.0");
    ui->graphicsView->scale(1.0,-1.0);









}

second::~second()
{
    delete ui;
}

void second::katsum(void)
{
    double kat = ui->lineEdit_26->text().toDouble()+ +ui->lineEdit_28->text().toDouble()+ui->lineEdit_21->text().toDouble()+ui->lineEdit_24->text().toDouble()+ui->lineEdit_30->text().toDouble()+ui->lineEdit_29->text().toDouble()+ui->lineEdit_23->text().toDouble()+ui->lineEdit_27->text().toDouble()+ui->lineEdit_25->text().toDouble();
     ui->lineEdit_22->setText(QString::number( kat));

}

void second::opem_l()
{
    emit opeme_l();
}

void second::newm_l()
{
    emit newme_l();
}

void second::savm_l()
{
    emit savme_l();
}

void second::anisum(void)
{
    double ani= ui->lineEdit_36->text().toDouble()+ui->lineEdit_31->text().toDouble()+ui->lineEdit_38->text().toDouble()+ui->lineEdit_34->text().toDouble()+ui->lineEdit_40->text().toDouble()+ui->lineEdit_39->text().toDouble()+ui->lineEdit_33->text().toDouble();
     ui->lineEdit_37->setText(QString::number(ani ));

}
void second::totsum(void)
{
    double tot = ui->lineEdit_22->text().toDouble()+ +ui->lineEdit_37->text().toDouble();//ui->lineEdit->text().toDouble()+ +ui->lineEdit_3->text().toDouble()+ui->lineEdit_2->text().toDouble()+ui->lineEdit_6->text().toDouble()+ui->lineEdit_9->text().toDouble()+ui->lineEdit_8->text().toDouble()+ui->lineEdit_4->text().toDouble()+ui->lineEdit_5->text().toDouble()+ui->lineEdit_11->text().toDouble()+ui->lineEdit_16->text().toDouble()+ui->lineEdit_7->text().toDouble()+ui->lineEdit_18->text().toDouble()+ui->lineEdit_14->text().toDouble()+ui->lineEdit_20->text().toDouble()+ui->lineEdit_28->text().toDouble()+ui->lineEdit_13->text().toDouble();
    ui->lineEdit_32->setText(QString::number(tot));
    second::paintGR();
}
void second::on_pushButton_2_clicked()
{
    //tWindow->show();
    //this->hide();

}

void second::on_lineEdit_textEdited(const QString &arg1)
{

}

void second::on_pushButton_clicked(){}

void second::on_lineEdit_textChanged(const QString &arg1)
{

    double natr = arg1.toDouble()/22.99;
    ui->lineEdit_26->setText(QString::number(natr));
    second::katsum();
    second::totsum();

}

void second::on_lineEdit_2_textChanged(const QString &arg1)
{
    double kali = arg1.toDouble()/39.1;
    ui->lineEdit_21->setText(QString::number(kali));
    second::katsum();
    second::totsum();
}

void second::exit_l()
{
    QCoreApplication::quit();
}

void second::newm_le()
{

   // this->hide();
    emit  newme_l();

//  Parent->Show();
}


void second::newm()
{
    ui->lineEdit_41->setText("7.0");
    ui->lineEdit->setText("0.0");
    ui->lineEdit_26->setText("0.0");
    ui->lineEdit_3->setText("0.0");
    ui->lineEdit_28->setText("0.0");
    ui->lineEdit_2->setText("0.0");
    ui->lineEdit_21->setText("0.0");
    ui->lineEdit_6->setText("0.0");
    ui->lineEdit_24->setText("0.0");
    ui->lineEdit_9->setText("0.0");
    ui->lineEdit_30->setText("0.0");
    ui->lineEdit_8->setText("0.0");
    ui->lineEdit_29->setText("0.0");
    ui->lineEdit_4->setText("0.0");
    ui->lineEdit_23->setText("0.0");
    ui->lineEdit_5->setText("0.0");
    ui->lineEdit_27->setText("0.0");
    ui->lineEdit_11->setText("0.0");
    ui->lineEdit_25->setText("0.0");
    ui->lineEdit_16->setText("0.0");
    ui->lineEdit_36->setText("0.0");
    ui->lineEdit_7->setText("0.0");
    ui->lineEdit_31->setText("0.0");
    ui->lineEdit_18->setText("0.0");
    ui->lineEdit_38->setText("0.0");
    ui->lineEdit_14->setText("0.0");
    ui->lineEdit_34->setText("0.0");
    ui->lineEdit_20->setText("0.0");
    ui->lineEdit_40->setText("0.0");
    ui->lineEdit_19->setText("0.0");
    ui->lineEdit_39->setText("0.0");
    ui->lineEdit_13->setText("0.0");
    ui->lineEdit_33->setText("0.0");
    ui->lineEdit_22->setText("0.0");
    ui->lineEdit_37->setText("0.0");
    ui->lineEdit_32->setText("0.0");


}

void second::openm(QString a)
{

    QFile file(a);
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    QTextStream in(&file);
    for (int i=0;i<6;i++) in.readLine();


    QString text = in.readLine();
    ui->lineEdit->setText(text);
    text = in.readLine();
    ui->lineEdit_3->setText(text);
    text = in.readLine();
    ui->lineEdit_2->setText(text);
    text = in.readLine();
    ui->lineEdit_6->setText(text);
    text = in.readLine();
    ui->lineEdit_9->setText(text);
    text = in.readLine();
    ui->lineEdit_8->setText(text);
    text = in.readLine();
    ui->lineEdit_4->setText(text);
    text = in.readLine();
    ui->lineEdit_5->setText(text);
    text = in.readLine();
    ui->lineEdit_11->setText(text);
    text = in.readLine();
    ui->lineEdit_16->setText(text);
    text = in.readLine();
    ui->lineEdit_7->setText(text);
    text = in.readLine();
    ui->lineEdit_18->setText(text);
    text = in.readLine();
    ui->lineEdit_14->setText(text);
    text = in.readLine();
    ui->lineEdit_20->setText(text);
    text = in.readLine();
    ui->lineEdit_19->setText(text);
    text = in.readLine();
    ui->lineEdit_13->setText(text);
    file.close();
}

void second::savem(QString a)
{

    QString fileName = a;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append|QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }

    QTextStream out(&file);
    out<<ui->lineEdit->text()<<endl\
    <<ui->lineEdit_3->text()<<endl\
    <<ui->lineEdit_2->text()<<endl\
    <<ui->lineEdit_6->text()<<endl\
    <<ui->lineEdit_9->text()<<endl\
    <<ui->lineEdit_8->text()<<endl\
    <<ui->lineEdit_4->text()<<endl\
    <<ui->lineEdit_5->text()<<endl;
    out<<ui->lineEdit_11->text()<<endl;
    out<<ui->lineEdit_16->text()<<endl;
    out<<ui->lineEdit_7->text()<<endl;
    out<<ui->lineEdit_18->text()<<endl;
    out<<ui->lineEdit_14->text()<<endl;
    out<<ui->lineEdit_20->text()<<endl;
    out<<ui->lineEdit_19->text()<<endl;
    out<<ui->lineEdit_13->text()<<endl;
    file.close();
}

void second::on_lineEdit_3_textChanged(const QString &arg1)
{
    double kalc = arg1.toDouble()*2/40.08;
    ui->lineEdit_28->setText(QString::number(kalc));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_6_textChanged(const QString &arg1)
{
    double magn = arg1.toDouble()*2/24.305;
    ui->lineEdit_24->setText(QString::number(magn));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_9_textChanged(const QString &arg1)
{
    double iron = arg1.toDouble();
    ui->lineEdit_30->setText(QString::number(iron));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_8_textChanged(const QString &arg1)
{
    double marg = arg1.toDouble();
    ui->lineEdit_29->setText(QString::number(marg));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_4_textChanged(const QString &arg1)
{
    double bari = arg1.toDouble()*2/137.33;
    ui->lineEdit_23->setText(QString::number(bari));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_5_textChanged(const QString &arg1)
{
    double strn = arg1.toDouble()*2/87.62;
    ui->lineEdit_27->setText(QString::number(strn));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_11_textChanged(const QString &arg1)
{
    double alum = arg1.toDouble()*3/26.981;
    ui->lineEdit_25->setText(QString::number(alum));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_16_textChanged(const QString &arg1)
{
    double clor = arg1.toDouble()/35.453;
    ui->lineEdit_36->setText(QString::number(clor));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_7_textChanged(const QString &arg1)
{
    double sulf = arg1.toDouble()*2/(32.06+4*16);
    ui->lineEdit_31->setText(QString::number(sulf));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_18_textChanged(const QString &arg1)
{
    double bicr = arg1.toDouble()/(1+12+3*16);
    ui->lineEdit_38->setText(QString::number(bicr));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_14_textChanged(const QString &arg1)
{
    double nitr = arg1.toDouble()/(14+16*3);
    ui->lineEdit_34->setText(QString::number(nitr));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_20_textChanged(const QString &arg1)
{
    double ftor = arg1.toDouble()/18.98;
    ui->lineEdit_40->setText(QString::number(ftor));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_19_textChanged(const QString &arg1)
{
    double slct = arg1.toDouble();
    ui->lineEdit_39->setText(QString::number(slct));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_13_textChanged(const QString &arg1)
{
    double fosf = arg1.toDouble()*3/(30.97+4*16);
    ui->lineEdit_33->setText(QString::number(fosf));
    second::anisum();
    second::totsum();
}


void second::paintGR()
{

    QGraphicsScene *scene =new QGraphicsScene(this);
    //scene->addText("Hello, world!");
    scene->addRect(QRectF(0, 100, 30, 200), QPen(Qt::black), QBrush(Qt::green));
    scene->addRect(QRectF(32, 100, 30, 200), QPen(Qt::black), QBrush(Qt::darkYellow));
    scene->addRect(QRectF(64, 100, 30, 200), QPen(Qt::black), QBrush(Qt::blue));
    scene->addRect(QRectF(96, 100, 30, 200), QPen(Qt::black), QBrush(Qt::yellow));
    scene->addRect(QRectF(128, 100, 30, 200), QPen(Qt::black), QBrush(Qt::magenta));
    scene->addRect(QRectF(160, 100, 30, ui->lineEdit_30->text().toInt()), QPen(Qt::black), QBrush(Qt::cyan));
    scene->addRect(QRectF(192, 100, 30, 200), QPen(Qt::black), QBrush(Qt::darkBlue));
    scene->addRect(QRectF(224, 100, 30, 200), QPen(Qt::black), QBrush(Qt::darkRed));
    scene->addRect(QRectF(256, 100, 30, 200), QPen(Qt::black), QBrush(Qt::darkGreen));
    scene->addRect(QRectF(288, 100, 30, 200), QPen(Qt::black), QBrush(Qt::darkGray));
    scene->addRect(QRectF(320, 100, 30, 200), QPen(Qt::black), QBrush(Qt::gray));
    scene->addLine(-10,90,355,90,QPen(Qt::black));
    scene->addLine(-10,200,355,200,QPen(Qt::red));
    scene->addLine(-10,90,-10,300,QPen(Qt::black));
   // scene->addLine(0,0,1,0,QPen(Qt::black));

    QGraphicsTextItem * io = new QGraphicsTextItem;
    io->setPos(-10,0);
    io->setPlainText("CaSO4");
    QTransform transform;
    transform.scale(2, -2);
    io->setTransform(transform);
    io->setRotation(270);
    QGraphicsTextItem * io1 = new QGraphicsTextItem;
    io1->setPos(22,0);
    io1->setPlainText("BaSO4");
    io1->setTransform(transform);
    io1->setRotation(270);
    QGraphicsTextItem * io2 = new QGraphicsTextItem;
    io2->setPos(54,0);
    io2->setPlainText("SrSO4");
    io2->setTransform(transform);
    io2->setRotation(270);
    QGraphicsTextItem * io3 = new QGraphicsTextItem;
    io3->setPos(86,0);
    io3->setPlainText("Fe+Mn");
    io3->setTransform(transform);
    io3->setRotation(270);
    QGraphicsTextItem * io4 = new QGraphicsTextItem;
    io4->setPos(118,0);
    io4->setPlainText("CaF");
    io4->setTransform(transform);
    io4->setRotation(270);
    QGraphicsTextItem * io5 = new QGraphicsTextItem;
    io5->setPos(150,0);
    io5->setPlainText("Al");
    io5->setTransform(transform);
    io5->setRotation(270);
    QGraphicsTextItem * io6 = new QGraphicsTextItem;
    io6->setPos(182,0);
    io6->setPlainText("SiO2");
    io6->setTransform(transform);
    io6->setRotation(270);
    QGraphicsTextItem * io7 = new QGraphicsTextItem;
    io7->setPos(214,0);
    io7->setPlainText("CaPO4");
    io7->setTransform(transform);
    io7->setRotation(270);
    QGraphicsTextItem * io8 = new QGraphicsTextItem;
    io8->setPos(246,0);
    io8->setPlainText("MgOH");
    io8->setTransform(transform);
    io8->setRotation(270);
    QGraphicsTextItem * io9 = new QGraphicsTextItem;
    io9->setPos(278,0);
    io9->setPlainText("CaCO3");
    io9->setTransform(transform);
    io9->setRotation(270);
    QGraphicsTextItem * io10 = new QGraphicsTextItem;
    io10->setPos(310,0);
    io10->setPlainText("LSI");
    io10->setTransform(transform);
    io10->setRotation(270);
    QGraphicsTextItem * io11 = new QGraphicsTextItem;
    io11->setPos(-50,100);
    io11->setPlainText("Насыщение %");
    io11->setTransform(transform);
    io11->setRotation(270);


    scene->addItem(io);
    scene->addItem(io1);
    scene->addItem(io2);
    scene->addItem(io3);
    scene->addItem(io4);
    scene->addItem(io5);
    scene->addItem(io6);
    scene->addItem(io7);
    scene->addItem(io8);
    scene->addItem(io9);
    scene->addItem(io10);
    scene->addItem(io11);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //QRectF bounds = scene->itemsBoundingRect();
    //ui->graphicsView->centerOn(-10, -100);
    //ui->graphicsView->fitInView(bounds,Qt::KeepAspectRatio);

    ui->graphicsView->show();
}

