#include "mainwindow.h"
#include <QApplication>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "Color/Color.h"
#include "Edges/Edges.h"
#include "Matrix/Matrix.h"
#include "Mixing/Mixing.h"
#include "Utility/Utility.h"

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);   //application manages app-wide resources.
    MainWindow w;
    w.show();

    return application.exec();
}
