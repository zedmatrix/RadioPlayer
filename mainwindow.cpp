#include <QStatusBar>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "actions.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    // Create Actions instance and pass the ui pointer
    Actions *actions = new Actions(this, ui);

    // Create a status bar
    QStatusBar *statusBar = new QStatusBar(this);

    // Set the status bar for the main window
    this->setStatusBar(statusBar);

    // Add a simple message to the status bar
    statusBar->showMessage("Ready");

}

MainWindow::~MainWindow()
{
    delete ui;
}
