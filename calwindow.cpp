#include "calwindow.h"
#include "ui_calwindow.h"
#include <QMouseEvent>
#include <QPoint>
#include <QDebug>
#include <QTimer>
#include <QTime>
#include <QPainter>
#include <QSystemTrayIcon>
#include <QAction>
#include <QMenu>
#include <QDialog>
#include <QMessageBox>
#include <QProcess>
#include <QSplashScreen>
#include <synchapi.h>
#include <QKeyEvent>
#include <QScrollBar>
#include <QLineEdit>
#include <QRegExpValidator>
CalWindow::CalWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalWindow)
{
    ui->setupUi(this);
    QRegExp regx("[x0-9+-/./^]+$");
    QValidator *validator = new QRegExpValidator(regx, this );

           ui->AlineEdit->setValidator( validator );
           ui->BlineEdit->setValidator( validator );
}

CalWindow::~CalWindow()
{
    delete ui;
}
void CalWindow::mousePressEvent(QMouseEvent *e)
{

    if(e->button() == Qt::LeftButton)
    {
        m_point = e->globalPos() - pos();
        e->accept();
    }
}



void CalWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons() & Qt::LeftButton)
    {
        move(e->globalPos() - m_point);
        e->accept();
    }
}



void CalWindow::on_pushButton_0_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="0";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"0");
    }
    else {
            a+="0";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"0");
}
}

void CalWindow::on_pushButton_1_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="1";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"1");
    }
    else {
            a+="1";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"1");
}
}

void CalWindow::on_pushButton_6_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="2";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"2");
    }
    else {
            a+="2";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"2");
}
}
void CalWindow::on_pushButton_10_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="3";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"3");
    }
    else {
            a+="3";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"3");
}
}


void CalWindow::on_pushButton_7_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="4";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"4");
    }
    else {
            a+="4";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"4");
}

}

void CalWindow::on_pushButton_9_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="5";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"5");
    }
    else {
            a+="5";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"5");
}
}


void CalWindow::on_pushButton_8_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="6";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"6");
    }
    else {
            a+="6";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"6");
}
}


void CalWindow::on_pushButton_3_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="7";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"7");
    }
    else {
            a+="7";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"7");
}
}


void CalWindow::on_pushButton_4_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="8";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"8");
    }
    else {
            a+="8";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"8");
}
}

void CalWindow::on_pushButton_5_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="9";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"9");
    }
    else {
            a+="9";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"9");
}
}

void CalWindow::on_pushButton_backspace_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        if(ui->BlineEdit->text()!= "")
        {
            QString temp=ui->BlineEdit->text();
            temp= temp.left(temp.length()-1);
            ui->BlineEdit->setText(temp);
        }
    }
    else {
        if(ui->AlineEdit->text()!= "")
        {   QString temp=ui->AlineEdit->text();
            temp= temp.left(temp.length()-1);
            ui->AlineEdit->setText(temp);
        }
}
}

void CalWindow::on_pushButton_minus_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="-";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"-");
    }
    else {
            a+="-";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"-");
}
}

void CalWindow::on_pushButton_plus_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="+";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"+");
    }
    else {
            a+="+";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"+");
}
}

void CalWindow::on_pushButton_X_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="x";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"x");
    }
    else {
            a+="x";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"x");
}
}

void CalWindow::on_pushButton_dian_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+=".";
        ui->BlineEdit->setText(ui->BlineEdit->text()+".");
    }
    else {
            a+=".";
            ui->AlineEdit->setText(ui->AlineEdit->text()+".");
}
}

void CalWindow::on_pushButton_e_clicked()
{
    if(ui->BlineEdit->hasFocus()){
        b+="^";
        ui->BlineEdit->setText(ui->BlineEdit->text()+"^");
    }
    else {
            a+="^";
            ui->AlineEdit->setText(ui->AlineEdit->text()+"^");
}
}

void CalWindow::on_plus_clicked()
{

       if(!c.check(ui->AlineEdit->text())){
               QMessageBox::about(NULL, "计算错误", "存在错误的多项式A！");
               return;
      }
       if(!c.check(ui->BlineEdit->text())){
               QMessageBox::about(NULL, "计算错误", "存在错误的多项式B！");
               return;
      }
        ui->AlineEdit->setText(c.Build(ui->AlineEdit->text(),1));

        ui->BlineEdit->setText(c.Build(ui->BlineEdit->text(),2));

        ui->ClineEdit->setText(c.algorithm(1));


}

void CalWindow::on_minus_clicked()
{


        if(!c.check(ui->AlineEdit->text())){
                QMessageBox::about(NULL, "计算错误", "存在错误的多项式A！");
                return;
       }
        if(!c.check(ui->BlineEdit->text())){
                QMessageBox::about(NULL, "计算错误", "存在错误的多项式B！");
                return;
       }
        ui->AlineEdit->setText(c.Build(ui->AlineEdit->text(),1));
        ui->BlineEdit->setText(c.Build(ui->BlineEdit->text(),2));
        ui->ClineEdit->setText(c.algorithm(2));

}

void CalWindow::on_Aclear_clicked()
{
    ui->AlineEdit->clear();
}

void CalWindow::on_Bclear_clicked()
{
     ui->BlineEdit->clear();
}

void CalWindow::on_Cclear_clicked()
{
     ui->AlineEdit->clear();
     ui->BlineEdit->clear();
     ui->ClineEdit->clear();
}
