#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->functionPicker->addItem("Color Classification");
    ui->functionPicker->addItem("Mixing Quantification");
    ui->functionPicker->addItem("Sedimentation Quantification");
    ui->functionPicker->addItem("Flow Tracking Function");

    QPixmap temporaryImage("/home/armandt/Documents/ProjectGUI/testQt/Images/neptune.jpg");
    ui->imageLabel->setBackgroundRole(QPalette::Base);
    ui->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->imageLabel->setScaledContents(true);
    ui->imageLabel->setPixmap(temporaryImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    ui->inputTextEdit->setReadOnly(true);       //user isn't allowed to edit the instructions after things have been started.
    ui->outputTextEdit->clear();
    ui->outputTextEdit->append("Starting rotation and processing functions.");
}

void MainWindow::on_pauseButton_clicked()
{
    ui->outputTextEdit->clear();                //user also can't edit them if the system is paused. That'd be nice but too much work.
    ui->outputTextEdit->append("Pausing rotation and processing functions.");
}

void MainWindow::on_stopButton_clicked()
{
    ui->inputTextEdit->setReadOnly(false);      //If the whole thing is stopped, re-enable the text box.
    ui->outputTextEdit->clear();
    ui->outputTextEdit->append("Stopping rotation and processing functions.");
}
