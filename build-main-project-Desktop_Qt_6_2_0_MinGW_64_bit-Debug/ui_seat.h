/********************************************************************************
** Form generated from reading UI file 'seat.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEAT_H
#define UI_SEAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_seat
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *seat)
    {
        if (seat->objectName().isEmpty())
            seat->setObjectName(QString::fromUtf8("seat"));
        seat->resize(543, 419);
        label = new QLabel(seat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 90, 171, 251));
        label->setPixmap(QPixmap(QString::fromUtf8("../img/rsz_1seatmap5.png")));
        groupBox = new QGroupBox(seat);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, -1, 541, 71));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 30, 161, 16));
        label_3 = new QLabel(seat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 80, 141, 41));
        spinBox = new QSpinBox(seat);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(370, 100, 91, 22));
        label_6 = new QLabel(seat);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 190, 81, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        label_7 = new QLabel(seat);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 220, 61, 16));
        label_8 = new QLabel(seat);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 240, 61, 21));
        label_9 = new QLabel(seat);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 280, 47, 13));
        label_10 = new QLabel(seat);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(230, 130, 251, 16));
        pushButton = new QPushButton(seat);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 160, 75, 23));
        lineEdit = new QLineEdit(seat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 160, 113, 20));
        label_4 = new QLabel(seat);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 220, 47, 13));
        label_5 = new QLabel(seat);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 250, 47, 13));
        label_11 = new QLabel(seat);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(370, 280, 47, 13));
        pushButton_2 = new QPushButton(seat);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(284, 310, 91, 23));
        lineEdit_2 = new QLineEdit(seat);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 350, 241, 20));
        pushButton_3 = new QPushButton(seat);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 390, 75, 23));
        pushButton_4 = new QPushButton(seat);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 390, 75, 23));

        retranslateUi(seat);
        QObject::connect(pushButton_3, &QPushButton::clicked, seat, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_4, &QPushButton::clicked, seat, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(seat);
    } // setupUi

    void retranslateUi(QDialog *seat)
    {
        seat->setWindowTitle(QCoreApplication::translate("seat", "Dialog", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("seat", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("seat", "Van & Go", nullptr));
        label_3->setText(QCoreApplication::translate("seat", "Number Of Seats", nullptr));
        label_6->setText(QCoreApplication::translate("seat", "Fair Details", nullptr));
        label_7->setText(QCoreApplication::translate("seat", "Ticket Price", nullptr));
        label_8->setText(QCoreApplication::translate("seat", "app fee", nullptr));
        label_9->setText(QCoreApplication::translate("seat", "Discount", nullptr));
        label_10->setText(QCoreApplication::translate("seat", "If you have discount code, please enter below ", nullptr));
        pushButton->setText(QCoreApplication::translate("seat", "Apply", nullptr));
        label_4->setText(QCoreApplication::translate("seat", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("seat", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("seat", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("seat", "Show Amount", nullptr));
        pushButton_3->setText(QCoreApplication::translate("seat", "Back", nullptr));
        pushButton_4->setText(QCoreApplication::translate("seat", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seat: public Ui_seat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEAT_H
