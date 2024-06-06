/********************************************************************************
** Form generated from reading UI file 'location.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATION_H
#define UI_LOCATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_location
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDateEdit *dateEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *location)
    {
        if (location->objectName().isEmpty())
            location->setObjectName(QString::fromUtf8("location"));
        location->resize(548, 371);
        groupBox = new QGroupBox(location);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, -11, 551, 91));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 40, 191, 31));
        groupBox_2 = new QGroupBox(location);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 110, 411, 201));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 91, 21));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 61, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 47, 13));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 47, 13));
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 40, 69, 22));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 80, 69, 22));
        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(110, 120, 110, 22));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(110, 160, 82, 17));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(240, 160, 82, 17));
        pushButton = new QPushButton(location);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 330, 75, 23));
        pushButton_2 = new QPushButton(location);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 330, 75, 23));

        retranslateUi(location);
        QObject::connect(pushButton_2, &QPushButton::clicked, location, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton, &QPushButton::clicked, location, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(location);
    } // setupUi

    void retranslateUi(QDialog *location)
    {
        location->setWindowTitle(QCoreApplication::translate("location", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("location", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("location", "Van & Go", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("location", "Select Your Desired Location", nullptr));
        label_2->setText(QCoreApplication::translate("location", "From", nullptr));
        label_3->setText(QCoreApplication::translate("location", "To", nullptr));
        label_4->setText(QCoreApplication::translate("location", "Date", nullptr));
        label_5->setText(QCoreApplication::translate("location", "Type", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("location", "Dhaka", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("location", "Chattogram", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("location", "Rajshahi", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("location", "Barishal", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("location", "Sylhet", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("location", "Khulna", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("location", "Dhaka", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("location", "Chattogram", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("location", "Barishal", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("location", "Rajshahi", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("location", "Sylhet", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("location", "Khulna", nullptr));

        radioButton->setText(QCoreApplication::translate("location", "AC", nullptr));
        radioButton_2->setText(QCoreApplication::translate("location", "Non AC", nullptr));
        pushButton->setText(QCoreApplication::translate("location", "Go", nullptr));
        pushButton_2->setText(QCoreApplication::translate("location", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class location: public Ui_location {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATION_H
