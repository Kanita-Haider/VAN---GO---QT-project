#include "end.h"
#include "ui_end.h"
#include "payment.h"

end::end(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::end)
{
    ui->setupUi(this);
}

end::~end()
{
    delete ui;
}

void end::on_pushButton_2_clicked()
{
    payment data;
    data.setModal(true);
    data.exec();
}

