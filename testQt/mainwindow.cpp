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
    ui->functionPicker->addItem("Flow Tracking");

    QPixmap temporaryImage("/home/armandt/Documents/testQt/testQt/neptune.jpg");
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
    ui->outputTextEdit->clear();
    ui->outputTextEdit->append("Starting rotation and processing functions.");
}

void MainWindow::on_pauseButton_clicked()
{
    ui->outputTextEdit->clear();
    ui->outputTextEdit->append("Pausing rotation and processing functions.");
}

void MainWindow::on_stopButton_clicked()
{
    ui->outputTextEdit->clear();
    ui->outputTextEdit->append("Stopping rotation and processing functions.");
}
