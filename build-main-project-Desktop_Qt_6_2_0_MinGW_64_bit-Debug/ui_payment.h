/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_payment
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *payment)
    {
        if (payment->objectName().isEmpty())
            payment->setObjectName(QString::fromUtf8("payment"));
        payment->resize(455, 369);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        payment->setFont(font);
        payment->setCursor(QCursor(Qt::ArrowCursor));
        pushButton = new QPushButton(payment);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 250, 101, 23));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        pushButton->setFont(font1);
        groupBox = new QGroupBox(payment);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 451, 80));
        groupBox->setFont(font1);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 171, 16));
        label_2 = new QLabel(payment);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 90, 251, 31));
        label_2->setCursor(QCursor(Qt::SizeFDiagCursor));
        label_3 = new QLabel(payment);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 130, 361, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(payment);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 170, 161, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Mongolian Baiti")});
        font2.setPointSize(10);
        font2.setBold(false);
        label_4->setFont(font2);
        lineEdit = new QLineEdit(payment);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 170, 221, 20));
        label_5 = new QLabel(payment);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 210, 171, 21));
        label_5->setFont(font1);
        lineEdit_2 = new QLineEdit(payment);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 210, 113, 20));
        pushButton_2 = new QPushButton(payment);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 340, 75, 23));
        lineEdit_3 = new QLineEdit(payment);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(72, 300, 261, 20));

        retranslateUi(payment);
        QObject::connect(pushButton_2, &QPushButton::clicked, payment, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(payment);
    } // setupUi

    void retranslateUi(QDialog *payment)
    {
        payment->setWindowTitle(QCoreApplication::translate("payment", "Van & Go", nullptr));
        pushButton->setText(QCoreApplication::translate("payment", "Verify Bkash", nullptr));
        groupBox->setTitle(QCoreApplication::translate("payment", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("payment", "Van & Go", nullptr));
        label_2->setText(QCoreApplication::translate("payment", "Your Ticket Is Resserved !", nullptr));
        label_3->setText(QCoreApplication::translate("payment", "But You are not done yet! Proceed  to confirm...", nullptr));
        label_4->setText(QCoreApplication::translate("payment", "Enter your Bkash Account N0", nullptr));
        label_5->setText(QCoreApplication::translate("payment", "6-digit OTP", nullptr));
        pushButton_2->setText(QCoreApplication::translate("payment", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payment: public Ui_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
