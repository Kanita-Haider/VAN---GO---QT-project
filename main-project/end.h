#ifndef END_H
#define END_H

#include <QDialog>

namespace Ui {
class end;
}

class end : public QDialog
{
    Q_OBJECT

public:
    explicit end(QWidget *parent = nullptr);
    ~end();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::end *ui;
};

#endif // END_H
