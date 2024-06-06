/********************************************************************************
** Form generated from reading UI file 'go.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GO_H
#define UI_GO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_go
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *go)
    {
        if (go->objectName().isEmpty())
            go->setObjectName(QString::fromUtf8("go"));
        go->resize(501, 381);
        QFont font;
        font.setFamilies({QString::fromUtf8("Algerian")});
        font.setPointSize(10);
        go->setFont(font);
        centralwidget = new QWidget(go);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, -10, 321, 291));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/n3r/Desktop/rsz_1rsz_picture1.png")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 210, 261, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Jokerman")});
        font1.setPointSize(36);
        font1.setItalic(false);
        label_2->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 290, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Algerian")});
        font2.setPointSize(16);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        go->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(go);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        go->setStatusBar(statusbar);
        menuBar = new QMenuBar(go);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 501, 22));
        go->setMenuBar(menuBar);

        retranslateUi(go);
        QObject::connect(pushButton, &QPushButton::clicked, go, qOverload<>(&QMainWindow::hide));

        QMetaObject::connectSlotsByName(go);
    } // setupUi

    void retranslateUi(QMainWindow *go)
    {
        go->setWindowTitle(QCoreApplication::translate("go", "go", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("go", "  Van&Go", nullptr));
        pushButton->setText(QCoreApplication::translate("go", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class go: public Ui_go {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GO_H
