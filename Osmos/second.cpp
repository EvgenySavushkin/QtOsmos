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












}

second::~second()
{
    delete ui;
}

void second::katsum(void)
{
    double kat = ui->lineEdit->text().toDouble()+ +ui->lineEdit_3->text().toDouble()+ui->lineEdit_2->text().toDouble()+ui->lineEdit_6->text().toDouble()+ui->lineEdit_9->text().toDouble()+ui->lineEdit_8->text().toDouble()+ui->lineEdit_4->text().toDouble()+ui->lineEdit_5->text().toDouble()+ui->lineEdit_11->text().toDouble();
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
    double ani= ui->lineEdit_16->text().toDouble()+ui->lineEdit_7->text().toDouble()+ui->lineEdit_18->text().toDouble()+ui->lineEdit_14->text().toDouble()+ui->lineEdit_20->text().toDouble()+ui->lineEdit_19->text().toDouble()+ui->lineEdit_13->text().toDouble();
     ui->lineEdit_37->setText(QString::number(ani ));

}
void second::totsum(void)
{
    double tot = ui->lineEdit->text().toDouble()+ +ui->lineEdit_3->text().toDouble()+ui->lineEdit_2->text().toDouble()+ui->lineEdit_6->text().toDouble()+ui->lineEdit_9->text().toDouble()+ui->lineEdit_8->text().toDouble()+ui->lineEdit_4->text().toDouble()+ui->lineEdit_5->text().toDouble()+ui->lineEdit_11->text().toDouble()+ui->lineEdit_16->text().toDouble()+ui->lineEdit_7->text().toDouble()+ui->lineEdit_18->text().toDouble()+ui->lineEdit_14->text().toDouble()+ui->lineEdit_20->text().toDouble()+ui->lineEdit_28->text().toDouble()+ui->lineEdit_13->text().toDouble();
    ui->lineEdit_32->setText(QString::number(tot));
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

    double natr = arg1.toDouble();
    ui->lineEdit_26->setText(QString::number(natr));
    second::katsum();
    second::totsum();

}

void second::on_lineEdit_2_textChanged(const QString &arg1)
{
    double kali = arg1.toDouble();
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
    double kalc = arg1.toDouble();
    ui->lineEdit_28->setText(QString::number(kalc));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_6_textChanged(const QString &arg1)
{
    double magn = arg1.toDouble();
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
    double bari = arg1.toDouble();
    ui->lineEdit_23->setText(QString::number(bari));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_5_textChanged(const QString &arg1)
{
    double strn = arg1.toDouble();
    ui->lineEdit_27->setText(QString::number(strn));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_11_textChanged(const QString &arg1)
{
    double alum = arg1.toDouble();
    ui->lineEdit_25->setText(QString::number(alum));
    second::katsum();
    second::totsum();
}

void second::on_lineEdit_16_textChanged(const QString &arg1)
{
    double clor = arg1.toDouble();
    ui->lineEdit_36->setText(QString::number(clor));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_7_textChanged(const QString &arg1)
{
    double sulf = arg1.toDouble();
    ui->lineEdit_31->setText(QString::number(sulf));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_18_textChanged(const QString &arg1)
{
    double bicr = arg1.toDouble();
    ui->lineEdit_38->setText(QString::number(bicr));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_14_textChanged(const QString &arg1)
{
    double nitr = arg1.toDouble();
    ui->lineEdit_34->setText(QString::number(nitr));
    second::anisum();
    second::totsum();
}

void second::on_lineEdit_20_textChanged(const QString &arg1)
{
    double ftor = arg1.toDouble();
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
    double fosf = arg1.toDouble();
    ui->lineEdit_33->setText(QString::number(fosf));
    second::anisum();
    second::totsum();
}

