/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <qcustomplot.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_train;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_epochs;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_tolerance;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_rate;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *epochs;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *final_error;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *time_execution;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_hidden;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *lineEdit_hidden_num;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLabel *input_label;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLabel *output_label;
    QPushButton *pushButton;
    QCustomPlot *customPlot;
    QTextBrowser *textBrowser_weigths;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuFeed_Forward_Neural_Network;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(743, 562);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 260, 201, 151));
        pushButton_train = new QPushButton(groupBox);
        pushButton_train->setObjectName(QString::fromUtf8("pushButton_train"));
        pushButton_train->setGeometry(QRect(100, 120, 89, 25));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 181, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_epochs = new QLineEdit(layoutWidget);
        lineEdit_epochs->setObjectName(QString::fromUtf8("lineEdit_epochs"));
        lineEdit_epochs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEdit_epochs);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 181, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_tolerance = new QLineEdit(layoutWidget1);
        lineEdit_tolerance->setObjectName(QString::fromUtf8("lineEdit_tolerance"));
        lineEdit_tolerance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lineEdit_tolerance);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 90, 181, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_rate = new QLineEdit(layoutWidget2);
        lineEdit_rate->setObjectName(QString::fromUtf8("lineEdit_rate"));
        lineEdit_rate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lineEdit_rate);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 410, 391, 101));
        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 50, 361, 21));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        epochs = new QLabel(layoutWidget3);
        epochs->setObjectName(QString::fromUtf8("epochs"));
        epochs->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(epochs);

        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(21, 31, 361, 19));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        final_error = new QLabel(layoutWidget4);
        final_error->setObjectName(QString::fromUtf8("final_error"));
        final_error->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(final_error);

        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 70, 361, 19));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        time_execution = new QLabel(layoutWidget5);
        time_execution->setObjectName(QString::fromUtf8("time_execution"));
        time_execution->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(time_execution);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 260, 181, 151));
        layoutWidget6 = new QWidget(groupBox_3);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 60, 161, 27));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        lineEdit_hidden = new QLineEdit(layoutWidget6);
        lineEdit_hidden->setObjectName(QString::fromUtf8("lineEdit_hidden"));
        lineEdit_hidden->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lineEdit_hidden);

        layoutWidget7 = new QWidget(groupBox_3);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 90, 161, 27));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        lineEdit_hidden_num = new QLineEdit(layoutWidget7);
        lineEdit_hidden_num->setObjectName(QString::fromUtf8("lineEdit_hidden_num"));
        lineEdit_hidden_num->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(lineEdit_hidden_num);

        layoutWidget8 = new QWidget(groupBox_3);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 40, 161, 19));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        input_label = new QLabel(layoutWidget8);
        input_label->setObjectName(QString::fromUtf8("input_label"));
        input_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(input_label);

        layoutWidget9 = new QWidget(groupBox_3);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(10, 120, 161, 19));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget9);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_10->addWidget(label_9);

        output_label = new QLabel(layoutWidget9);
        output_label->setObjectName(QString::fromUtf8("output_label"));
        output_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(output_label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 230, 89, 25));
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 391, 211));
        textBrowser_weigths = new QTextBrowser(centralwidget);
        textBrowser_weigths->setObjectName(QString::fromUtf8("textBrowser_weigths"));
        textBrowser_weigths->setGeometry(QRect(410, 280, 321, 231));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(410, 10, 321, 261));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 743, 22));
        menuFeed_Forward_Neural_Network = new QMenu(menubar);
        menuFeed_Forward_Neural_Network->setObjectName(QString::fromUtf8("menuFeed_Forward_Neural_Network"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFeed_Forward_Neural_Network->menuAction());
        menuFeed_Forward_Neural_Network->addSeparator();
        menuFeed_Forward_Neural_Network->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Paramaters", nullptr));
        pushButton_train->setText(QCoreApplication::translate("MainWindow", "Train", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Max Epochs", nullptr));
        lineEdit_epochs->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Tolerance", nullptr));
        lineEdit_tolerance->setText(QCoreApplication::translate("MainWindow", "0.01", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Learning Rate", nullptr));
        lineEdit_rate->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Results", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Epochs for Training:", nullptr));
        epochs->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Cummulated Error: ", nullptr));
        final_error->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Execution Time:", nullptr));
        time_execution->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Architecture", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "NN Hidden", nullptr));
        lineEdit_hidden->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Neurons NNH", nullptr));
        lineEdit_hidden_num->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "NN Input", nullptr));
        input_label->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "NN Output", nullptr));
        output_label->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        menuFeed_Forward_Neural_Network->setTitle(QCoreApplication::translate("MainWindow", "Feed Forward Neural Network", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
