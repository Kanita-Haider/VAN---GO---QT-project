#include "seat.h"
#include "ui_seat.h"
#include "buslist.h"
#include "payment.h"
seat::seat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seat)
{
    ui->setupUi(this);
}

seat::~seat()
{
    delete ui;
}

void seat::on_spinBox_valueChanged(int arg1)
{
    ticket=arg1*1200;
    ticket1.setNum(ticket);
}


void seat::on_pushButton_2_clicked()
{
    total+=ticket;
    total1.setNum(total);
    ui->lineEdit_2->setText("Total Payable Amount = " +total1);
}


void seat::on_pushButton_4_clicked()
{
    payment data;
    data.setModal(true);
    data.exec();
}


void seat::on_pushButton_3_clicked()
{
    buslist data;
    data.setModal(true);
    data.exec();
}

