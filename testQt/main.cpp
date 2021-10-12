#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);   //application manages app-wide resources.
    MainWindow w;
    w.show();

    return application.exec();
}
