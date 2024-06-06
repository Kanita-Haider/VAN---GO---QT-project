#ifndef SEAT_H
#define SEAT_H

#include <QDialog>

namespace Ui {
class seat;
}

class seat : public QDialog
{
    Q_OBJECT

public:
    explicit seat(QWidget *parent = nullptr);
    ~seat();
    int ticket=0,total=50;
    QString ticket1,total1;

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::seat *ui;
};

#endif // SEAT_H
