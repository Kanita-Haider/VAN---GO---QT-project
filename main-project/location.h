#ifndef LOCATION_H
#define LOCATION_H

#include <QDialog>

namespace Ui {
class location;
}

class location : public QDialog
{
    Q_OBJECT

public:
    explicit location(QWidget *parent = nullptr);
    ~location();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::location *ui;
};

#endif // LOCATION_H
