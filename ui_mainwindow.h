/********************************************************************************
** Form generated from reading UI file 'mainwindowehGVYM.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *b_baton;
    QPushButton *b_oldies;
    QPushButton *b_oldcolgrn;
    QPushButton *b_valley;
    QPushButton *b_kmjm;
    QPushButton *b_kono;
    QPushButton *b_wfdu;
    QPushButton *b_gold;
    QPushButton *b_whgm;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 330);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        b_baton = new QPushButton(centralwidget);
        b_baton->setObjectName("b_baton");
        b_baton->setGeometry(QRect(10, 10, 380, 22));
        b_oldies = new QPushButton(centralwidget);
        b_oldies->setObjectName("b_oldies");
        b_oldies->setGeometry(QRect(10, 40, 380, 22));
        b_oldcolgrn = new QPushButton(centralwidget);
        b_oldcolgrn->setObjectName("b_oldcolgrn");
        b_oldcolgrn->setGeometry(QRect(10, 100, 380, 22));
        b_valley = new QPushButton(centralwidget);
        b_valley->setObjectName("b_valley");
        b_valley->setGeometry(QRect(10, 70, 380, 22));
        b_kmjm = new QPushButton(centralwidget);
        b_kmjm->setObjectName("b_kmjm");
        b_kmjm->setGeometry(QRect(10, 130, 380, 22));
        b_kono = new QPushButton(centralwidget);
        b_kono->setObjectName("b_kono");
        b_kono->setGeometry(QRect(10, 160, 380, 22));
        b_wfdu = new QPushButton(centralwidget);
        b_wfdu->setObjectName("b_wfdu");
        b_wfdu->setGeometry(QRect(10, 190, 380, 22));
        b_gold = new QPushButton(centralwidget);
        b_gold->setObjectName("b_gold");
        b_gold->setGeometry(QRect(10, 220, 380, 22));
        b_whgm = new QPushButton(centralwidget);
        b_whgm->setObjectName("b_whgm");
        b_whgm->setGeometry(QRect(10, 250, 380, 22));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        b_baton->setText(QCoreApplication::translate("MainWindow", "5235 Downtown Radio 97.7 Baton Rouge's 60s and 70s Hits", nullptr));
        b_oldies->setText(QCoreApplication::translate("MainWindow", "4717 Real Oldies 60s and 70s Pop Hits", nullptr));
        b_oldcolgrn->setText(QCoreApplication::translate("MainWindow", "5110 Oldies 93.5 Columbia and Greene's 60s and 70s Hits", nullptr));
        b_valley->setText(QCoreApplication::translate("MainWindow", "3348 Real Oldies 1470 The Valley\342\200\231s 60s and 70s Hits", nullptr));
        b_kmjm->setText(QCoreApplication::translate("MainWindow", "4744 Leo 1360 KMJM Cedar Rapids' 60s and 70s Hits", nullptr));
        b_kono->setText(QCoreApplication::translate("MainWindow", "7350 86 KONO San Antonio Greatest Hits of the 60s and 70s", nullptr));
        b_wfdu->setText(QCoreApplication::translate("MainWindow", "6648 WFDU HD1 RetroRadio Oldies Oldies from the 50s, 60s, 70s", nullptr));
        b_gold->setText(QCoreApplication::translate("MainWindow", "9570 Oldies.Gold 50s 60s and 70s Greatest Hits", nullptr));
        b_whgm->setText(QCoreApplication::translate("MainWindow", "8477 WHGM Gold Greatest Hits of the 60s and 70s", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
