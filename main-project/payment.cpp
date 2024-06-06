#include "payment.h"
#include "ui_payment.h"
#include "end.h"

payment::payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment)
{
    ui->setupUi(this);
}

payment::~payment()
{
    delete ui;
}

void payment::on_pushButton_clicked()
{
   end data;
   data.setModal(true);
   data.exec();

}

