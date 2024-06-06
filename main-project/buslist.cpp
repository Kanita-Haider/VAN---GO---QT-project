#include "buslist.h"
#include "ui_buslist.h"
#include "location.h"
#include "seat.h"

buslist::buslist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buslist)
{
    ui->setupUi(this);
}

buslist::~buslist()
{
    delete ui;
}

void buslist::on_back_clicked()
{
    location data;
    data.setModal(true);
    data.exec();
}


void buslist::on_pushButton_3_clicked()
{
    seat data;
    data.setModal(true);
    data.exec();
}


void buslist::on_pushButton_2_clicked()
{
    seat data;
    data.setModal(true);
    data.exec();
}


void buslist::on_pushButton_clicked()
{
    seat data;
    data.setModal(true);
    data.exec();
}

