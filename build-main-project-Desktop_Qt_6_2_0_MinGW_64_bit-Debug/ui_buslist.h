/********************************************************************************
** Form generated from reading UI file 'buslist.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSLIST_H
#define UI_BUSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_buslist
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QLabel *label_4;
    QGroupBox *groupBox_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *back;

    void setupUi(QDialog *buslist)
    {
        if (buslist->objectName().isEmpty())
            buslist->setObjectName(QString::fromUtf8("buslist"));
        buslist->resize(567, 462);
        groupBox = new QGroupBox(buslist);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, -1, 531, 81));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"border-color: rgb(75, 251, 178);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 30, 131, 21));
        label_2 = new QLabel(buslist);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 301, 31));
        groupBox_2 = new QGroupBox(buslist);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 140, 431, 80));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 131, 21));
        groupBox_3 = new QGroupBox(buslist);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 230, 431, 80));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 101, 31));
        groupBox_4 = new QGroupBox(buslist);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 320, 431, 80));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(16, 39, 91, 21));
        pushButton = new QPushButton(buslist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 160, 81, 51));
        pushButton_2 = new QPushButton(buslist);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 260, 75, 41));
        pushButton_3 = new QPushButton(buslist);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 350, 75, 41));
        back = new QPushButton(buslist);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(10, 420, 75, 23));

        retranslateUi(buslist);
        QObject::connect(back, &QPushButton::clicked, buslist, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_3, &QPushButton::clicked, buslist, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_2, &QPushButton::clicked, buslist, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton, &QPushButton::clicked, buslist, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(buslist);
    } // setupUi

    void retranslateUi(QDialog *buslist)
    {
        buslist->setWindowTitle(QCoreApplication::translate("buslist", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("buslist", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("buslist", "Van & Go", nullptr));
        label_2->setText(QCoreApplication::translate("buslist", "Available Buses", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("buslist", "12.00 AM - 6.00 AM", nullptr));
        label_3->setText(QCoreApplication::translate("buslist", "Ena Paribahan", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("buslist", "10.00 AM - 3.00 PM", nullptr));
        label_4->setText(QCoreApplication::translate("buslist", "Green line Paribahan", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("buslist", "5.00 PM - 11.00 Pm", nullptr));
        label_5->setText(QCoreApplication::translate("buslist", "Shyamoli Expess", nullptr));
        pushButton->setText(QCoreApplication::translate("buslist", " Details", nullptr));
        pushButton_2->setText(QCoreApplication::translate("buslist", "Details", nullptr));
        pushButton_3->setText(QCoreApplication::translate("buslist", "Details", nullptr));
        back->setText(QCoreApplication::translate("buslist", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buslist: public Ui_buslist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSLIST_H
