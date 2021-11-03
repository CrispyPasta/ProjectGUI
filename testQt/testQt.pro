#-------------------------------------------------
#
# Project created by QtCreator 2021-10-12T15:17:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testQt
TEMPLATE = app

# OpenCV
INCLUDEPATH += /usr/local/include/opencv4
LIBS += $(shell pkg-config opencv --libs)

QMAKE_CXXFLAGS += -pthread -lJetsonGPIO

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Matrix/Matrix.cpp \
    Mixing/Mixing.cpp \
    Edges/Edges.cpp \
    Color/Color.cpp \
    JetsonGPIO/src/gpio_event.cpp \
    JetsonGPIO/src/gpio_pin_data.cpp \
    JetsonGPIO/src/JetsonGPIO.cpp \
    JetsonGPIO/src/PythonFunctions.cpp \

HEADERS += \
        mainwindow.h \
    Matrix/Matrix.h \
    Utility/Utility.h \
    Mixing/Mixing.h \
    Edges/Edges.h \
    Color/Color.h \
    JetsonGPIO/include/private/gpio_event.h \
    JetsonGPIO/include/private/gpio_pin_data.h \
    JetsonGPIO/include/private/Model.h \
    JetsonGPIO/include/private/PythonFunctions.h \
    JetsonGPIO/include/JetsonGPIO.h \

FORMS += \
        mainwindow.ui

DISTFILES += \
    Images/edgeOutput.jpg \
    Images/edgeOutput1.jpg \
    Images/edgeOutput2.jpg \
    Images/expandtest.jpg \
    Images/neptune.jpg \
    Images/photo.jpg \
    Images/photoEdges1.jpg \
    Images/rebuilt.jpg \
    Images/snep.jpg \
    Images/snepEdges0.jpg \
    Images/snepEdges1.jpg \
    Images/tinier.jpg \
    Images/tinierEdge.jpg \
    Images/tiny.jpg
