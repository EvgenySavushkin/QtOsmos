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
#include <QPrinter>
#include <QAbstractPrintDialog>
#include <QPrintDialog>
#include <QPainter>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>


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
    QAction *pechm = fileMenu->addAction("Печать");
    connect(pechm,SIGNAL(triggered()),this,SLOT(pechm_l()));
    fileMenu->addSeparator();
    QAction *exit = fileMenu->addAction("Выход");
    connect(exit, SIGNAL(triggered()), this, SLOT(exit_l()));
    QMenu *fileMenu2 = new QMenu("О программе");
    menuBar->addMenu(fileMenu2);
    this->layout()->setMenuBar(menuBar);
    ui->doubleSpinBox->setValue(7);
    ui->spinBox_3->setValue(0);
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
    double kat = ui->lineEdit_26->text().toDouble() +ui->lineEdit_28->text().toDouble()+ui->lineEdit_21->text().toDouble()+ui->lineEdit_24->text().toDouble()+ui->lineEdit_30->text().toDouble()+ui->lineEdit_29->text().toDouble()+ui->lineEdit_23->text().toDouble()+ui->lineEdit_27->text().toDouble()+ui->lineEdit_25->text().toDouble();
     ui->lineEdit_22->setText(QString::number( kat,'f',5));

}

void second::opem_l()
{
    emit opeme_l();
}

void second::newm_l()
{
    emit newme_l();
}

void second::pechm_l()
{
    emit pechme_l();
}

void second::savm_l()
{
    emit savme_l();
}

void second::anisum(void)
{
    double ani= ui->lineEdit_36->text().toDouble()+ui->lineEdit_31->text().toDouble()+ui->lineEdit_38->text().toDouble()+ui->lineEdit_34->text().toDouble()+ui->lineEdit_40->text().toDouble()+ui->lineEdit_39->text().toDouble()+ui->lineEdit_33->text().toDouble();
     ui->lineEdit_37->setText(QString::number(ani ,'f',5));

}
void second::totsum(void)
{
    double tot = ui->lineEdit_22->text().toDouble() +ui->lineEdit_37->text().toDouble();//ui->lineEdit->text().toDouble()+ +ui->lineEdit_3->text().toDouble()+ui->lineEdit_2->text().toDouble()+ui->lineEdit_6->text().toDouble()+ui->lineEdit_9->text().toDouble()+ui->lineEdit_8->text().toDouble()+ui->lineEdit_4->text().toDouble()+ui->lineEdit_5->text().toDouble()+ui->lineEdit_11->text().toDouble()+ui->lineEdit_16->text().toDouble()+ui->lineEdit_7->text().toDouble()+ui->lineEdit_18->text().toDouble()+ui->lineEdit_14->text().toDouble()+ui->lineEdit_20->text().toDouble()+ui->lineEdit_28->text().toDouble()+ui->lineEdit_13->text().toDouble();
    ui->lineEdit_32->setText(QString::number(tot,'f',5));
    second::IonPower();
    second::paintGR();
}

void second::IonPower(void)
{
    double I= ui->lineEdit_36->text().toDouble()+ui->lineEdit_31->text().toDouble()*4+ui->lineEdit_38->text().toDouble()+ui->lineEdit_34->text().toDouble()+ui->lineEdit_40->text().toDouble()+ui->lineEdit_39->text().toDouble()*4+ui->lineEdit_33->text().toDouble()*9+ui->lineEdit_26->text().toDouble()+ +ui->lineEdit_28->text().toDouble()*4+ui->lineEdit_21->text().toDouble()+ui->lineEdit_24->text().toDouble()*4+ui->lineEdit_30->text().toDouble()*4+ui->lineEdit_29->text().toDouble()*4+ui->lineEdit_23->text().toDouble()*4+ui->lineEdit_27->text().toDouble()*4+ui->lineEdit_25->text().toDouble()*9;
    I=I/2/1000;
    ui->lineEdit_35->setText(QString::number(I,'f',5));

}



void second::on_pushButton_2_clicked()
{

    this->hide();
    emit back_l();

}

void second::on_lineEdit_textEdited(const QString &arg1)
{

}

void second::on_pushButton_clicked(){}

void second::on_lineEdit_textChanged(const QString &arg1)
{

    double natr = arg1.toDouble()/22.99;
    ui->lineEdit_26->setText(QString::number(natr,'f',5));
    second::katsum();
    second::totsum();

}

void second::on_lineEdit_2_textChanged(const QString &arg1)
{
    double kali = arg1.toDouble()/39.1;
    ui->lineEdit_21->setText(QString::number(kali,'f',5));
    second::katsum();
    second::totsum();
}

void second::exit_l()
{
    QCoreApplication::quit();
}

void second::newm_le()
{

    this->hide();
    emit  newme_l();

//  Parent->Show();
}

void second::pechm(QString a)
{

    QPrinter printer(QPrinter::HighResolution);
    printer.setPageSize(QPrinter::A4);
    printer.setOrientation(QPrinter::Portrait);
    printer.setPageMargins (15,15,15,15,QPrinter::Millimeter);
    printer.setFullPage(false);
    //printer.setOutputFileName("output.pdf");
    printer.setOutputFormat(QPrinter::NativeFormat);


    QStringList b = a.split(';');
    QPainter painter(&printer); // create a painter which will paint 'on printer'.
    painter.setFont(QFont("Tahoma",8));
    painter.drawText(200,240,b.at(0));
    painter.drawText(200,340,b.at(1));
    painter.drawText(200,440,b.at(2));
    painter.drawText(200,540,b.at(3));
    painter.drawText(200,640,b.at(4));
    painter.drawText(200,740,"Йон                    Концентрация");
    painter.drawText(200,840,"Натрий              " ); painter.drawText(1200,840,ui->lineEdit_26->text() +"  мэк/л");
    painter.drawText(200,940,"Калий               " ); painter.drawText(1200,940,ui->lineEdit_28->text() +"  мэк/л");
    painter.drawText(200,1040,"Кальций             " ); painter.drawText(1200,1040,ui->lineEdit_24->text() +"  мэк/л");
    painter.drawText(200,1140,"Магний              " ); painter.drawText(1200,1140,ui->lineEdit_30->text() +"  мэк/л");
    painter.drawText(200,1240,"Железо              " ); painter.drawText(1200,1240,ui->lineEdit_29->text() +"  мэк/л");
    painter.drawText(200,1340,"Марганец            " ); painter.drawText(1200,1340,ui->lineEdit_23->text() +"  мэк/л");
    painter.drawText(200,1440,"Барий               " ); painter.drawText(1200,1440,ui->lineEdit_27->text() +"  мэк/л");
    painter.drawText(200,1540,"Стронций            " ); painter.drawText(1200,1540,ui->lineEdit_25->text() +"  мэк/л");
    painter.drawText(200,1640,"Алюминий            " ); painter.drawText(1200,1640,ui->lineEdit_36->text() +"  мэк/л");
    painter.drawText(200,1740,"Сульфат             " ); painter.drawText(1200,1740,ui->lineEdit_31->text() +"  мэк/л");
    painter.drawText(200,1840,"Бикарбонат          " ); painter.drawText(1200,1840,ui->lineEdit_38->text() +"  мэк/л");
    painter.drawText(200,1940,"Нитрат              " ); painter.drawText(1200,1940,ui->lineEdit_34->text() +"  мэк/л");
    painter.drawText(200,2040,"Фторид              " ); painter.drawText(1200,2040,ui->lineEdit_40->text() +"  мэк/л");
    painter.drawText(200,2140,"Силикат             " ); painter.drawText(1200,2140,ui->lineEdit_39->text() +"  мэк/л");
    painter.drawText(200,2240,"Фосфат              " ); painter.drawText(1200,2240,ui->lineEdit_33->text() +"  мэк/л");
    painter.drawText(200,2340,"Минерализация, TDS: " + ui->lineEdit_32->text() +"  ионая сила: "+ ui->lineEdit_35->text() + " pH: " + ui->doubleSpinBox->text() );

 // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    QBrush *i = new QBrush();
    double gamma1,gamma2,gamma3,scale,ysh,z,konc;
    scale =8;
    ysh=3500;
    konc=100/(100-ui->spinBox_3->value());

    if(ui->lineEdit_35->text().toDouble()*konc<0.01)
    {
        gamma1 = pow(10,-1*0.5*sqrt(ui->lineEdit_35->text().toDouble()*konc));
        gamma2 = pow(10,-1*0.5*4*sqrt(ui->lineEdit_35->text().toDouble()*konc));
        gamma3 = pow(10,-1*0.5*9*sqrt(ui->lineEdit_35->text().toDouble()*konc));
    }
    else if(ui->lineEdit_35->text().toDouble()>=0.01 && ui->lineEdit_35->text().toDouble()<0.1)
    {
        gamma1 = pow(10,-1*0.5*sqrt(ui->lineEdit_35->text().toDouble()*konc)/1+3*0.33*sqrt(ui->lineEdit_35->text().toDouble()*konc));
        gamma2 = pow(10,-1*0.5*4*sqrt(ui->lineEdit_35->text().toDouble()*konc)/1+3*0.33*sqrt(ui->lineEdit_35->text().toDouble()*konc));
        gamma3 = pow(10,-1*0.5*9*sqrt(ui->lineEdit_35->text().toDouble()*konc)/1+3*0.33*sqrt(ui->lineEdit_35->text().toDouble()*konc));
    }


    //QGraphicsScene *scene =new QGraphicsScene(this);
    //scene->addText("Hello, world!");

    if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_43->text().toDouble()*gamma2*gamma2<0.9*4.76*pow(10,-3))
    i->setColor(Qt::green);
    else if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_43->text().toDouble()*gamma2*gamma2<4.76*pow(10,-3))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*0, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_43->text().toDouble()*gamma2*gamma2/(4.76*pow(10,-3))))));

    if (ui->lineEdit_30->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<0.9*8*pow(10,-16))
    i->setColor(Qt::green);
    else if (ui->lineEdit_30->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<8*pow(10,-16))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*32, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_30->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1/(8*pow(10,-16))))));

    if (ui->lineEdit_29->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<0.9*1.9*pow(10,-13))
    i->setColor(Qt::green);
    else if (ui->lineEdit_29->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<1.9*pow(10,-13))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*64, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_29->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1/(1.9*pow(10,-13))))));

    if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<0.9*37.6)
    i->setColor(Qt::green);
    else if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<37.6)
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*96, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2/37.6))));

    if (ui->lineEdit_23->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<0.9*1.8*pow(10,-4))
    i->setColor(Qt::green);
    else if (ui->lineEdit_23->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<1.8*pow(10,-4))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen( QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*128, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_23->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2/(1.8*pow(10,-4))))));

   /* if (int(ui->lineEdit_30->text().toDouble())<90)
    i->setColor(Qt::green);
   // QMessageBox::warning(this, "Warning", i->color().name());}
    else if (int(ui->lineEdit_30->text().toDouble())<100)
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);*/
    if (ui->lineEdit_27->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<0.9*2.1*pow(10,-1))
    i->setColor(Qt::green);
    else if (ui->lineEdit_27->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<2.1*pow(10,-1))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    z = (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_27->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2/(2.1*pow(10,-1))));
    painter.drawRect(QRectF(scale*160, scale*100+ysh, scale*25, z));

    if (ui->lineEdit_28->text().toDouble()*konc*konc*konc*ui->lineEdit_40->text().toDouble()*ui->lineEdit_40->text().toDouble()*gamma2*gamma1*gamma1<0.9*4*pow(10,-5))
    i->setColor(Qt::green);
    else if (ui->lineEdit_28->text().toDouble()*konc*konc*konc*ui->lineEdit_40->text().toDouble()*ui->lineEdit_40->text().toDouble()*gamma2*gamma1*gamma1<4*pow(10,-5))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    z = (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_40->text().toDouble()*ui->lineEdit_40->text().toDouble()*konc*konc*konc*ui->lineEdit_28->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3/(4*pow(10,-5))));
    painter.drawRect(QRectF(scale*192, scale*100+ysh, scale*25,z ));

    //добавить умножение на мольную долю po4
    double H = pow(10,-1*ui->doubleSpinBox->value());
    double y = ui->lineEdit_33->text().toDouble()*konc* (1.1*pow(10,-2))*(2*pow(10,-7))*(2*pow(10,-7))/(H*H*H+(1.1*pow(10,-2))*H*H+(1.1*pow(10,-2))*(2*pow(10,-7))*H+(1.1*pow(10,-2))*(2*pow(10,-7))*(2*pow(10,-7)));
    if (y*y*y*ui->lineEdit_28->text().toDouble()*ui->lineEdit_28->text().toDouble()*ui->lineEdit_28->text().toDouble()*ui->lineEdit_33->text().toDouble()*ui->lineEdit_33->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3<0.9*2*pow(10,-23))
    i->setColor(Qt::green);
    else if (y*y*y*ui->lineEdit_28->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_28->text().toDouble()*ui->lineEdit_28->text().toDouble()*ui->lineEdit_33->text().toDouble()*ui->lineEdit_33->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3<2*pow(10,-23))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*224, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(100*y*y*y*ui->lineEdit_28->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_28->text().toDouble()*ui->lineEdit_28->text().toDouble()*ui->lineEdit_33->text().toDouble()*ui->lineEdit_33->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3/(2*pow(10,-23))))));

    if (ui->lineEdit_19->text().toDouble()*konc<0.9*(8.797*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()-138.239*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()+621.901*ui->doubleSpinBox->value()-507.472))
        i->setColor(Qt::green);
    else if(ui->lineEdit_19->text().toDouble()*konc<(8.797*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()-138.239*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()+621.901*ui->doubleSpinBox->value()-507.472))
            i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*256, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(ui->lineEdit_19->text().toDouble()*konc/(8.797*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()-138.239*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()+621.901*ui->doubleSpinBox->value()-507.472)))));

    if (ui->lineEdit_25->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1<0.9*pow(10,-32))
    i->setColor(Qt::green);
    else if (ui->lineEdit_25->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1<pow(10,-32))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    painter.setPen(QPen(Qt::black)); painter.setBrush(QBrush(i->color()));
    painter.drawRect(QRectF(scale*288, scale*100+ysh, scale*25, (-1)*scale*std::min(uint(200),uint(100*ui->lineEdit_25->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1/pow(10,-32)))));
    painter.drawLine(scale*(-10),scale*110+ysh,scale*355,scale*110+ysh);
    painter.setPen(QPen(Qt::darkRed));
    painter.drawLine(scale*(-10),scale*0+ysh,scale*355,scale*0+ysh);
    painter.setPen(QPen(Qt::black));
    painter.drawLine(scale*(-10),scale*110+ysh,scale*(-10),scale*(-110)+ysh);
   // scene->addLine(0,0,1,0,QPen(Qt::black));


/*    painter.drawText(("CaCO3");
   painter.drawText("Fe");
    painter.drawText("Mn");
   painter.drawText("CaSO4");
    painter.drawText("BaSO4");
  painter.drawText("SrSO4");
  painter.drawText("CaF2");
   painter.drawText("Ca3(PO4)2");
    painter.drawText("SiO2");
   painter.drawText("Al");
    painter.drawText("Насыщение %");
   */



 // +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    painter.end();
    //222222222222222222222222222222
}

void second::newm()
{
    ui->doubleSpinBox->setValue(7);
    ui->spinBox_3->setValue(0);
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
    ui->lineEdit_28->setText(QString::number(kalc,'f',5));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_6_textChanged(const QString &arg1)
{
    double magn = arg1.toDouble()*2/24.305;
    ui->lineEdit_24->setText(QString::number(magn,'f',5));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_9_textChanged(const QString &arg1)
{
    double iron = arg1.toDouble()/29.43;
    ui->lineEdit_30->setText(QString::number(iron,'f',5));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_8_textChanged(const QString &arg1)
{
    double marg = arg1.toDouble()/27.45;
    ui->lineEdit_29->setText(QString::number(marg,'f',5));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_4_textChanged(const QString &arg1)
{
    double bari = arg1.toDouble()*2/137.33;
    ui->lineEdit_23->setText(QString::number(bari,'f',5));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_5_textChanged(const QString &arg1)
{
    double strn = arg1.toDouble()*2/87.62;
    ui->lineEdit_27->setText(QString::number(strn,'f',5));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_11_textChanged(const QString &arg1)
{
    double alum = arg1.toDouble()*3/26.981;
    ui->lineEdit_25->setText(QString::number(alum,'f',5));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_16_textChanged(const QString &arg1)
{
    double clor = arg1.toDouble()/35.453;
    ui->lineEdit_36->setText(QString::number(clor,'f',5));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_7_textChanged(const QString &arg1)
{
    double sulf = arg1.toDouble()*2/(32.06+4*16);
    ui->lineEdit_31->setText(QString::number(sulf,'f',5));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_18_textChanged(const QString &arg1)
{
    double bicr = arg1.toDouble()/(1+12+3*16);

    double c = bicr/(1+12+3*16);
    double H = pow(10,-1*ui->doubleSpinBox->value());
    //QMessageBox::warning(this, "Warning", QString::number(H));
    double a = c* (4.43*pow(10,-7))*H/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_38->setText(QString::number(a,'f',5));
    a = c* H*H/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_42->setText(QString::number(a,'f',5));
    a = c* (4.43*pow(10,-7))*(4.69*pow(10,-11))/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_43->setText(QString::number(a,'f',5));

    second::anisum();
    second::totsum();
}

void second::on_lineEdit_14_textChanged(const QString &arg1)
{
    double nitr = arg1.toDouble()/(14+16*3);
    ui->lineEdit_34->setText(QString::number(nitr,'f',5));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_20_textChanged(const QString &arg1)
{
    double ftor = arg1.toDouble()/18.98;
    ui->lineEdit_40->setText(QString::number(ftor,'f',5));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_19_textChanged(const QString &arg1)
{
    double slct = arg1.toDouble()/60.10;
    ui->lineEdit_39->setText(QString::number(slct,'f',5));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_13_textChanged(const QString &arg1)
{
    double fosf = arg1.toDouble()*3/(30.97+4*16);
    ui->lineEdit_33->setText(QString::number(fosf,'f',5));
    second::anisum();
    second::totsum();
}


void second::paintGR()
{

    QBrush *i = new QBrush();
    double gamma1,gamma2,gamma3, konc;
    konc=100/double((100-ui->spinBox_3->value()));
    if(ui->lineEdit_35->text().toDouble()<0.01)
    {
        gamma1 = pow(10,-1*0.5*sqrt(ui->lineEdit_35->text().toDouble()));
        gamma2 = pow(10,-1*0.5*4*sqrt(ui->lineEdit_35->text().toDouble()));
        gamma3 = pow(10,-1*0.5*9*sqrt(ui->lineEdit_35->text().toDouble()));
    }
    else if(ui->lineEdit_35->text().toDouble()>=0.01 && ui->lineEdit_35->text().toDouble()<0.1)
    {
        gamma1 = pow(10,-1*0.5*sqrt(ui->lineEdit_35->text().toDouble())/1+3*0.33*sqrt(ui->lineEdit_35->text().toDouble()));
        gamma2 = pow(10,-1*0.5*4*sqrt(ui->lineEdit_35->text().toDouble())/1+3*0.33*sqrt(ui->lineEdit_35->text().toDouble()));
        gamma3 = pow(10,-1*0.5*9*sqrt(ui->lineEdit_35->text().toDouble())/1+3*0.33*sqrt(ui->lineEdit_35->text().toDouble()));
    }

 //  QMessageBox::warning(this, "Warning", QString::number(konc));
    QGraphicsScene *scene =new QGraphicsScene(this);
    //scene->addText("Hello, world!");

    if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_43->text().toDouble()*gamma2*gamma2<0.9*4.76*pow(10,-3))
    i->setColor(Qt::green);
    else if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_43->text().toDouble()*gamma2*gamma2<4.76*pow(10,-3))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(0, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_43->text().toDouble()*gamma2*gamma2/(4.76*pow(10,-3))))), QPen(Qt::black), QBrush(i->color()));

    if (ui->lineEdit_30->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<0.9*8*pow(10,-16))
    i->setColor(Qt::green);
    else if (ui->lineEdit_30->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<8*pow(10,-16))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(32, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_30->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1/(8*pow(10,-16))))), QPen(Qt::black), QBrush(i->color()));

    if (ui->lineEdit_29->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<0.9*1.9*pow(10,-13))
    i->setColor(Qt::green);
    else if (ui->lineEdit_29->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1<1.9*pow(10,-13))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(64, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_29->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma2*gamma1*gamma1/(1.9*pow(10,-13))))), QPen(Qt::black), QBrush(i->color()));

    if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<0.9*37.6)
    i->setColor(Qt::green);
    else if (ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<37.6)
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(96, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_28->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2/37.6))), QPen(Qt::black), QBrush(i->color()));

    if (ui->lineEdit_23->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<0.9*1.8*pow(10,-4))
    i->setColor(Qt::green);
    else if (ui->lineEdit_23->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<1.8*pow(10,-4))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(128, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_23->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2/(1.8*pow(10,-4))))), QPen(Qt::black), QBrush(i->color()));

   /* if (int(ui->lineEdit_30->text().toDouble())<90)
    i->setColor(Qt::green);
   // QMessageBox::warning(this, "Warning", i->color().name());}
    else if (int(ui->lineEdit_30->text().toDouble())<100)
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);*/
    if (ui->lineEdit_27->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<0.9*2.1*pow(10,-1))
    i->setColor(Qt::green);
    else if (ui->lineEdit_27->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2<2.1*pow(10,-1))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(160, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_27->text().toDouble()*konc*konc*ui->lineEdit_31->text().toDouble()*gamma2*gamma2/(2.1*pow(10,-1))))), QPen(Qt::black), QBrush(i->color()));

    if (ui->lineEdit_28->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_40->text().toDouble()*ui->lineEdit_40->text().toDouble()*gamma2*gamma1*gamma1<0.9*4*pow(10,-5))
    i->setColor(Qt::green);
    else if (ui->lineEdit_28->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_40->text().toDouble()*ui->lineEdit_40->text().toDouble()*gamma2*gamma1*gamma1<4*pow(10,-5))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(192, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_40->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_40->text().toDouble()*ui->lineEdit_28->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3/(4*pow(10,-5))))), QPen(Qt::black), QBrush(i->color()));

    //добавить умножение на мольную долю po4
    double H = pow(10,-1*ui->doubleSpinBox->value());
    double a = ui->lineEdit_33->text().toDouble()*konc* (1.1*pow(10,-2))*(2*pow(10,-7))*(2*pow(10,-7))/(H*H*H+(1.1*pow(10,-2))*H*H+(1.1*pow(10,-2))*(2*pow(10,-7))*H+(1.1*pow(10,-2))*(2*pow(10,-7))*(2*pow(10,-7)));
    if (a*a*a*ui->lineEdit_28->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_28->text().toDouble()*ui->lineEdit_28->text().toDouble()*ui->lineEdit_33->text().toDouble()*ui->lineEdit_33->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3<0.9*2*pow(10,-23))
    i->setColor(Qt::green);
    else if (a*a*a*ui->lineEdit_28->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_28->text().toDouble()*ui->lineEdit_28->text().toDouble()*ui->lineEdit_33->text().toDouble()*ui->lineEdit_33->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3<2*pow(10,-23))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(224, 100, 25, std::min(uint(200),uint(100*a*a*a*ui->lineEdit_28->text().toDouble()*konc*konc*konc*konc*konc*ui->lineEdit_28->text().toDouble()*ui->lineEdit_28->text().toDouble()*ui->lineEdit_33->text().toDouble()*ui->lineEdit_33->text().toDouble()*gamma2*gamma2*gamma2*gamma3*gamma3/(2*pow(10,-23))))), QPen(Qt::black), QBrush(i->color()));

    if (ui->lineEdit_19->text().toDouble()*konc<0.9*(8.797*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()-138.239*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()+621.901*ui->doubleSpinBox->value()-507.472))
        i->setColor(Qt::green);
    else if(ui->lineEdit_19->text().toDouble()*konc<(8.797*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()-138.239*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()+621.901*ui->doubleSpinBox->value()-507.472))
            i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(256, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_19->text().toDouble()*konc/(8.797*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()-138.239*ui->doubleSpinBox->value()*ui->doubleSpinBox->value()+621.901*ui->doubleSpinBox->value()-507.472)))), QPen(Qt::black), QBrush(i->color()));

    if (ui->lineEdit_25->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1<0.9*pow(10,-32))
    i->setColor(Qt::green);
    else if (ui->lineEdit_25->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1<pow(10,-32))
        i->setColor(Qt::yellow);
    else i->setColor(Qt::red);
    scene->addRect(QRectF(288, 100, 25, std::min(uint(200),uint(100*ui->lineEdit_25->text().toDouble()*konc*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1/pow(10,-32)))), QPen(Qt::black), QBrush(i->color()));
           //QMessageBox::warning(this, "Warning", QString::number(int(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1/pow(10,-32))));
          // QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1/pow(10,-32)));
          // QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1*gamma1));
         //  QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1*gamma1));
         //  QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3*gamma1));
         //  QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*gamma3));
        //   QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))));
        //   QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))));
        //   QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()));
          //QMessageBox::warning(this, "Warning", QString::number(100*ui->lineEdit_25->text().toDouble()*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))*pow(10,-1*(14-ui->doubleSpinBox->value()))));


    scene->addLine(-10,90,355,90,QPen(Qt::black));
    scene->addLine(-10,200,355,200,QPen(Qt::darkRed));
    scene->addLine(-10,90,-10,300,QPen(Qt::black));
   // scene->addLine(0,0,1,0,QPen(Qt::black));

    QGraphicsTextItem * io = new QGraphicsTextItem;
    io->setPos(-10,0);
    io->setPlainText("CaCO3");
    QTransform transform;
    transform.scale(2, -2);
    io->setTransform(transform);
    io->setRotation(270);
    QGraphicsTextItem * io1 = new QGraphicsTextItem;
    io1->setPos(22,0);
    io1->setPlainText("Fe");
    io1->setTransform(transform);
    io1->setRotation(270);
    QGraphicsTextItem * io2 = new QGraphicsTextItem;
    io2->setPos(54,0);
    io2->setPlainText("Mn");
    io2->setTransform(transform);
    io2->setRotation(270);
    QGraphicsTextItem * io3 = new QGraphicsTextItem;
    io3->setPos(86,0);
    io3->setPlainText("CaSO4");
    io3->setTransform(transform);
    io3->setRotation(270);
    QGraphicsTextItem * io4 = new QGraphicsTextItem;
    io4->setPos(118,0);
    io4->setPlainText("BaSO4");
    io4->setTransform(transform);
    io4->setRotation(270);
    QGraphicsTextItem * io5 = new QGraphicsTextItem;
    io5->setPos(150,0);
    io5->setPlainText("SrSO4");
    io5->setTransform(transform);
    io5->setRotation(270);
    QGraphicsTextItem * io6 = new QGraphicsTextItem;
    io6->setPos(182,0);
    io6->setPlainText("CaF2");
    io6->setTransform(transform);
    io6->setRotation(270);
    QGraphicsTextItem * io7 = new QGraphicsTextItem;
    io7->setPos(214,0);
    io7->setPlainText("Ca3(PO4)2");
    io7->setTransform(transform);
    io7->setRotation(270);
    QGraphicsTextItem * io8 = new QGraphicsTextItem;
    io8->setPos(246,0);
    io8->setPlainText("SiO2");
    io8->setTransform(transform);
    io8->setRotation(270);
    QGraphicsTextItem * io9 = new QGraphicsTextItem;
    io9->setPos(278,0);
    io9->setPlainText("Al");
    io9->setTransform(transform);
    io9->setRotation(270);
    //QGraphicsTextItem * io10 = new QGraphicsTextItem;
    //io10->setPos(278,0);
    //io10->setPlainText("Al");
    //io10->setTransform(transform);
    //io10->setRotation(270);

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

    scene->addItem(io11);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->graphicsView->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    //QRectF bounds = scene->itemsBoundingRect();
    //ui->graphicsView->centerOn(-10, -100);
    //ui->graphicsView->fitInView(bounds,Qt::KeepAspectRatio);

    ui->graphicsView->show();
}



void second::on_pushButton_3_clicked()
{
   /* QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Driver={Microsoft Access Driver (*.mdb, *.accdb)};DSN='';DBQ=D:\\User\\Documents\\1\\DBv1.accdb");

    if(db.open())
      qDebug() << "oK";
    else
      qDebug() << db.lastError().text();
    */

    if (ui->lineEdit_37->text().toDouble()>ui->lineEdit_22->text().toDouble())
    {
        double a = ui->lineEdit_26->text().toDouble()+ ui->lineEdit_37->text().toDouble()-ui->lineEdit_22->text().toDouble();
        ui->lineEdit_26->setText(QString::number(a,'f',5));
        ui->lineEdit->setText(QString::number(a*22.99,'f',5));
    }
    else
    {
        double a = ui->lineEdit_36->text().toDouble()- ui->lineEdit_37->text().toDouble()+ui->lineEdit_22->text().toDouble();
        ui->lineEdit_36->setText(QString::number(a,'f',5));
        ui->lineEdit_16->setText(QString::number(a*35.453,'f',5));
    }
}

void second::on_pushButton_4_clicked()
{
   // double bicr = arg1.toDouble()/(1+12+3*16);
   // ui->lineEdit_38->setText(QString::number(bicr,'f',5));


    /*double c = ui->lineEdit_18->text().toDouble()/(1+12+3*16);
    double H = pow(10,-1*ui->doubleSpinBox->value());
    //QMessageBox::warning(this, "Warning", QString::number(H));
    double a = c* (4.43*pow(10,-7))*H/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_38->setText(QString::number(a,'f',5));
    a = c* H*H/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_42->setText(QString::number(a,'f',5));
    a = c* (4.43*pow(10,-7))*(4.69*pow(10,-11))/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_43->setText(QString::number(a,'f',5));
*/
}

void second::on_lineEdit_43_textChanged(const QString &arg1)
{

    second::totsum();
}



void second::on_doubleSpinBox_valueChanged(double arg1)
{
    double c = ui->lineEdit_18->text().toDouble()/(1+12+3*16);
    double H = pow(10,-1*arg1);
    //QMessageBox::warning(this, "Warning", QString::number(H));
    double a = c* (4.43*pow(10,-7))*H/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_38->setText(QString::number(a,'f',5));
    a = c* H*H/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_42->setText(QString::number(a,'f',5));
    a = c* (4.43*pow(10,-7))*(4.69*pow(10,-11))/(H*H+(4.43*pow(10,-7))*H+(4.43*pow(10,-7))*(4.69*pow(10,-11)));
    ui->lineEdit_43->setText(QString::number(a,'f',5));
    second::totsum();
}

void second::on_doubleSpinBox_valueChanged(const QString &arg1)
{

}

void second::on_spinBox_3_valueChanged(int arg1)
{
    second::paintGR();
}

void second::on_spinBox_3_valueChanged(const QString &arg1)
{
   // second::paintGR();
}
