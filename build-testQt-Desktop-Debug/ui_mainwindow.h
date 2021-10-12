/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *functionPicker;
    QTextEdit *inputTextEdit;
    QPushButton *startButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *outputTextEdit;
    QLabel *imageLabel;
    QMenuBar *menuBar;
    QMenu *menuProject_2021;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1076, 619);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 241, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        functionPicker = new QComboBox(verticalLayoutWidget);
        functionPicker->setObjectName(QStringLiteral("functionPicker"));

        verticalLayout->addWidget(functionPicker);

        inputTextEdit = new QTextEdit(verticalLayoutWidget);
        inputTextEdit->setObjectName(QStringLiteral("inputTextEdit"));

        verticalLayout->addWidget(inputTextEdit);

        startButton = new QPushButton(verticalLayoutWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        verticalLayout->addWidget(startButton);

        pauseButton = new QPushButton(verticalLayoutWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));

        verticalLayout->addWidget(pauseButton);

        stopButton = new QPushButton(verticalLayoutWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        verticalLayout->addWidget(stopButton);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(820, 10, 241, 551));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        outputTextEdit = new QTextEdit(verticalLayoutWidget_2);
        outputTextEdit->setObjectName(QStringLiteral("outputTextEdit"));
        outputTextEdit->setEnabled(true);
        outputTextEdit->setReadOnly(true);

        verticalLayout_2->addWidget(outputTextEdit);

        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(260, 10, 551, 551));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1076, 22));
        menuProject_2021 = new QMenu(menuBar);
        menuProject_2021->setObjectName(QStringLiteral("menuProject_2021"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuProject_2021->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        functionPicker->setCurrentText(QString());
#ifndef QT_NO_WHATSTHIS
        inputTextEdit->setWhatsThis(QApplication::translate("MainWindow", "Enter RPM and duration in minutes. E.g. 1000;2. ", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        startButton->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pauseButton->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Starts the rotation and processing. </p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        imageLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        menuProject_2021->setTitle(QApplication::translate("MainWindow", "Project 2021", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
