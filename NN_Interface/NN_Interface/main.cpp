// QT headers
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //mynetwork.show_training_set(mydataset);

    return a.exec();
}
