#include "location.h"
#include "ui_location.h"
#include "login.h"
#include "buslist.h"

location::location(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::location)
{
    ui->setupUi(this);
}

location::~location()
{
    delete ui;
}

void location::on_pushButton_clicked()
{
    buslist data2;
    data2.setModal(true);
    data2.exec();
}


void location::on_pushButton_2_clicked()
{
    login data;
    data.setModal(true);
    data.exec();
}

