#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QAction>
#include <QPushButton>
#include <QStatusBar>
#include <QMediaPlayer>
#include <QAudioOutput>
#include "actions.h"

//QWidget *parent,
//QMainWindow(parent),
Actions::Actions(QMainWindow *MainWindow, Ui::MainWindow *ui)
    : MainWindow(MainWindow), ui(ui)
{
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    audioOutput->setVolume(0.4); // Volume is from 0.0 to 1.0
    player->setAudioOutput(audioOutput);

    // Connecting the action's triggered signal to the actionD slot
    connect(ui->b_baton, &QPushButton::clicked, this, [this]() { play(s_5235); });
    connect(ui->b_gold, &QPushButton::clicked, this, [this]() { play(s_9570); });
    connect(ui->b_kmjm, &QPushButton::clicked, this, [this]() { play(s_4744); });
    connect(ui->b_kono, &QPushButton::clicked, this, [this]() { play(s_7350); });
    connect(ui->b_oldcolgrn, &QPushButton::clicked, this, [this]() { play(s_5110); });
    connect(ui->b_oldies, &QPushButton::clicked, this, [this]() { play(s_4717); });
    connect(ui->b_valley, &QPushButton::clicked, this, [this]() { play(s_3348); });
    connect(ui->b_wfdu, &QPushButton::clicked, this, [this]() { play(s_6648); });
    connect(ui->b_whgm, &QPushButton::clicked, this, [this]() { play(s_8477); });
    // Adding the action to the menu bar (optional)
    //menuBar()->addAction(exampleAction);
}

Actions::~Actions()
{
    // Destructor implementation (if needed)
}

void Actions::play(Station station)
{
    QUrl streamUrl;
    QString stationName;

    switch(station) {
        case s_5235:
            streamUrl = QUrl("https://stream.revma.ihrhls.com/zc5235");
            stationName = "Downtown Radio 97.7 Baton Rouge's 60s & 70s Hits";
            break;
        case s_9570:
            streamUrl = QUrl("https://live365-aac.cdnstream1.com/a17787_64aac");
            stationName = "Oldies.Gold 50s 60s and 70s Greatest Hits";
            break;
        case s_4744:
            streamUrl = QUrl("https://stream.revma.ihrhls.com/zc4744");
            stationName = "Leo 1360 KMJM Cedar Rapids' 60s and 70s Hits";
            break;
        case s_7350:
            streamUrl = QUrl("https://cmg.streamguys1.com/san860/san860-iheart.aac");
            stationName = "86 KONO San Antonio Greatest Hits of the 60s and 70s";
            break;
        case s_5110:
            streamUrl = QUrl("https://stream.revma.ihrhls.com/zc5110");
            stationName = "Oldies 93.5 Columbia & Greene's 60s and 70s Hits";
            break;
        case s_4717:
            streamUrl = QUrl("https://stream.revma.ihrhls.com/zc4717");
            stationName = "Real Oldies 60s and 70s Pop Hits";
            break;
        case s_3348:
            streamUrl = QUrl("https://stream.revma.ihrhls.com/zc3348");
            stationName = "Real Oldies 1470 The Valley’s 60s and 70s Hits";
            break;
        case s_6648:
            streamUrl = QUrl("https://peridot.streamguys1.com:5355/iheart-aac");
            stationName = "WFDU HD1 RetroRadio Oldies Oldies from the 50s, 60s, 70s";
            break;
        case s_8477:
            streamUrl = QUrl("https://securestreams2.autopo.st:1223/stream.ogg");
            stationName = "WHGM Gold Greatest Hits of the 60s and 70s";
            break;
    }

    if (streamUrl.isValid()) {
        player->setSource(streamUrl);  // Set the media stream URL
        audioOutput->setVolume(0.5);
        player->play();  // Play the stream
        MainWindow->statusBar()->showMessage("Playing: " + stationName);  // Update the status bar
        qDebug() << "Playing " << streamUrl;
    } else {
        MainWindow->statusBar()->showMessage("Error: Invalid URL for " + stationName);  // Handle invalid URL or error
        qDebug() << "Failed to set Downtown stream URL.";
    }
}
