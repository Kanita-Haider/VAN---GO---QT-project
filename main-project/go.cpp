#include "go.h"
#include "ui_go.h"
#include "login.h"
go::go(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::go)
{
    ui->setupUi(this);
}

go::~go()
{
    delete ui;
}


void go::on_pushButton_clicked()
{
    login tata;
    tata.setModal(true);
    tata.exec();
}

