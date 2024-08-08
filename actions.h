// QAction Header
#ifndef ACTIONS_H
#define ACTIONS_H

// Include necessary Qt headers
#include <QApplication>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QRadioButton>
#include <QStatusBar>
#include <QWidget>
#include <QDebug>
#include "ui_mainwindow.h"

namespace Ui {
    class MainWindow;
}

enum Station {
    s_5235,
    s_9570,
    s_4744,
    s_7350,
    s_5110,
    s_4717,
    s_3348,
    s_6648,
    s_8477,
};

class Actions : public QObject {
    Q_OBJECT
public:
    //QWidget *parent = nullptr,
    explicit Actions(QMainWindow *MainWindow, Ui::MainWindow *ui = nullptr);
    //explicit Actions(QWidget *parent = nullptr);
    ~Actions();

private slots:
    void play(Station station); // Declare the slot
    // Functions

private:
    QMainWindow *MainWindow;   // Store the QMainWindow pointer
    Ui::MainWindow *ui;  // Store the ui pointer
    QMediaPlayer *player;
    QAudioOutput *audioOutput;

    // Event triggers
};

#endif // ACTIONS_H
