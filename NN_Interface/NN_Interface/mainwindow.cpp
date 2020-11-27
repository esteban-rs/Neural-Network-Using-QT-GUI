// Default
#include "mainwindow.h"
#include "ui_mainwindow.h"
// My hearders
#include <bits/stdc++.h>
#include "neural_network.hpp"
// Input File
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
}

void MainWindow::on_pushButton_train_clicked() {
    if (filename.size() <= 3) {
        QMessageBox::information(this, "Try Again", "Set datafile first.");
        return;
    }
    // Set Datafile
    DataSet mydataset(filename.toStdString());

    // Architecture ***************************************************
    QString arch;
    arch.sprintf("%i", mydataset.data[0].size());
    ui->input_label->setText(arch);

    arch.sprintf("%i", mydataset.targets[0].size());
    ui->output_label->setText(arch);

    QString _hidden = ui->lineEdit_hidden->text();
    QString _nhidden = ui->lineEdit_hidden_num->text();

    hidden_layers = _hidden.toInt();
    // Split string to a vector
    if (set_nhidden(_nhidden) != 0) {
        QMessageBox::information(this, "Try Again", "Hidden layers is not matching with hidden layers size.");
        nhidden_size.clear();
        return;
    }
    vector <int> tmp_vector =  nhidden_size.toStdVector();
    Neural_NewtworkFF mynetwork(hidden_layers,tmp_vector, mydataset);
    tmp_vector.clear();

    // Parameters *****************************************************
    QString _epochs = ui->lineEdit_epochs->text();
    QString _tol    = ui->lineEdit_tolerance->text();
    QString _rate   = ui->lineEdit_rate->text();
    iterations = _epochs.toInt();
    tolerance  = _tol.toDouble();
    rate       = _rate.toDouble();
    // ****************************************************************
    // Start Training
    clock_t start = clock();

    mynetwork.train_online(iterations, tolerance, rate, mydataset);

    clock_t end = clock();
    double cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
    // ****************************************************************
    QString tmp;

    // Tiempo de ejecución
    tmp.sprintf("%lf", cpu_time_used);
    tmp = tmp + " segundos.";
    ui->time_execution->setText(tmp);

    // Epochs
    tmp.sprintf("%i", mynetwork.cum_error.size());
    ui->epochs->setText(tmp);

    // Error acumulado
    tmp.sprintf("%lf", mynetwork.cum_error[mynetwork.cum_error.size()-1]);
    ui->final_error->setText(tmp);

    // copy error
    for (int i = 0; i < mynetwork.cum_error.size(); i++) {
        error_x.push_back(i+1);
        error_y.push_back(mynetwork.cum_error[i]);
    }

    make_plot();

    // *******************************************************************
    // Write weights
    QString ii;
    QString jj;
    QString kk;
    QString ww;
    // Save max and min
    double weight_max = 0;
    double weight_min = 0;
    for (int i = 0; i < (int) mynetwork.Layers.size(); i++) {
        ii.sprintf("%d",i);
        weights = weights + "Layer[" + ii + "]" + "\n";
        for (int j = 0; j < (int) mynetwork.Layers[i].Neurons.size(); j++) {
            jj.sprintf("%d",j);
            weights = weights + "Neuron[" + ii + "]" +"[" + jj + "]"+ "\n";
            for (int k = 0; k < (int) mynetwork.Layers[i].Neurons[j].weigths.size(); k++) {
                kk.sprintf("%d",k);
                // update max and min ***************************************
                if (mynetwork.Layers[i].Neurons[j].weigths[k] > weight_max) {
                    weight_max = mynetwork.Layers[i].Neurons[j].weigths[k];
                }
                if (mynetwork.Layers[i].Neurons[j].weigths[k] < weight_min) {
                    weight_min = mynetwork.Layers[i].Neurons[j].weigths[k];
                }
                // **********************************************************
                ww.sprintf("%lf",mynetwork.Layers[i].Neurons[j].weigths[k]);
                weights = weights + "W[" + ii + "][" + jj + "][" + kk + "] =" + ww + "\n" ;
            }
        }
    }

    ui->textBrowser_weigths->setText(weights);
    // ***********************************************************************************
    // Display Weigths
    QBrush grayBrush(Qt::gray);
    QPen outlinePen(Qt::black);
    QPen weightPen(Qt::black);

    outlinePen.setWidth(2);
    double weigth_widith = 0;    // weigth widith acording to normalize weights

    int neuronRadius = 20;
    int neuronSpace  = 40;
    int layerSpace   = 100;
    scene->clear();              // Clean last draw

    // Paint input layer
    for (int i = 0; i < mynetwork.num_inputs; i++) {
        scene->addEllipse(0,i*neuronSpace, neuronRadius, neuronRadius,outlinePen, grayBrush);
    }
    // Paint network
    for (int i = 0; i < (int) mynetwork.Layers.size(); i++) {
        for (int j = 0; j < (int) mynetwork.Layers[i].Neurons.size(); j++) {

            scene->addEllipse((i+1)*layerSpace, j*neuronSpace, neuronRadius, neuronRadius, outlinePen, grayBrush);

            for (int k = 0; k < (int) mynetwork.Layers[i].Neurons[j].weigths.size(); k++) {
                // Find widith with a pseudo normalization for the weights set
                weigth_widith = 4*(mynetwork.Layers[i].Neurons[j].weigths[k] - weight_min)/ (weight_max - weight_min);
                weightPen.setWidth(weigth_widith);

                scene->addLine(i*layerSpace + neuronRadius, k*neuronSpace + 0.5*neuronRadius , (i+1)*layerSpace, j*neuronSpace + 0.5*neuronRadius, weightPen);
            }
        }
    }

    // Clean for new call
    nhidden_size.clear();
    weights.clear();
    error_x.clear();
    error_y.clear();
}


void MainWindow::on_pushButton_clicked () {
    QString file_name = QFileDialog::getOpenFileName(this,"Open a File", QDir::homePath() );
    if (file_name.size() <=3) {
        QMessageBox::information(this, "Try Again", "Invalid Option");
    }
    else {
        QMessageBox::information(this, "Press Ok", file_name);
    }

    filename = file_name;
}

void MainWindow::make_plot () {
    // create graph and assign data to it
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(error_x, error_y);
    // give the axes some labels
    ui->customPlot->xAxis->setLabel("Epochs");
    ui->customPlot->yAxis->setLabel("Cummulated Error");
    // set axes ranges, so we see all data
    ui->customPlot->rescaleAxes();
    ui->customPlot->replot();
}

int MainWindow::set_nhidden(QString &nhidden) {
    string _nhidden = nhidden.toStdString();
    string world;
    stringstream ss(_nhidden);

    while (getline(ss,world,' ')) {
        nhidden_size.push_back(stoi(world));
    }

    if (hidden_layers != (int) nhidden_size.size()) {
        return -1;
    }
    else {
        return 0;
    }
}
