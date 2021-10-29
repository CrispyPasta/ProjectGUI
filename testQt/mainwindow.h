#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <deque>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT        //this is a macro that allows us to use signals and slots

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    deque<int> rpmArray;
    deque<int> durationArray;

    void parseRPMs(QString s);

    void parseDurations(QString s);

private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_stopButton_clicked();

private:
    Ui::MainWindow *ui; //the ui object will allow us to access all the widgets we're using

    void printOutput(QString s);
};

#endif // MAINWINDOW_H
