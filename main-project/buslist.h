#ifndef BUSLIST_H
#define BUSLIST_H

#include <QDialog>

namespace Ui {
class buslist;
}

class buslist : public QDialog
{
    Q_OBJECT

public:
    explicit buslist(QWidget *parent = nullptr);
    ~buslist();

private slots:
    void on_back_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::buslist *ui;
};

#endif // BUSLIST_H
