#include "login.h"
#include "ui_login.h"
#include "location.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    location data;
    data.setModal(true);
    data.exec();
}

