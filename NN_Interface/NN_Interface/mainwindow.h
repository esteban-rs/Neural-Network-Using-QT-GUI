#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QGraphicsScene* scene;
    // Parameters
    double tolerance = 0;
    double rate      = 0;
    int iterations   = 0;
    QString filename;

    // Architecture
    int input_size    = 0;
    int output_size   = 0;
    int hidden_layers = 0;

    QVector <int> nhidden_size;


    QVector <double> error_x;
    QVector <double> error_y;
    QString weights;

     Ui::MainWindow *ui;
private slots:
    void on_pushButton_train_clicked();
    void on_pushButton_clicked();
    void make_plot ();
    int set_nhidden(QString &nhidden);
};

#endif // MAINWINDOW_H

