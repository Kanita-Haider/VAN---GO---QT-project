#ifndef GO_H
#define GO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class go; }
QT_END_NAMESPACE

class go : public QMainWindow
{
    Q_OBJECT

public:
    go(QWidget *parent = nullptr);
    ~go();

private slots:
    void on_pushButton_clicked();

private:
    Ui::go *ui;
};
#endif // GO_H
