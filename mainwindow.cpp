#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCharts/QtCharts>
#include "plotfromcsv.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString file = ui->lineEdit->text();
    this->setCentralWidget(PlotFromCSV(file));
}

void MainWindow::on_plotButton_pressed()
{
    QString file = ui->lineEdit->text();
    this->setCentralWidget(PlotFromCSV(file));
}

void MainWindow::on_plotButton_clicked()
{
    QString file = ui->lineEdit->text();
    this->setCentralWidget(PlotFromCSV(file));
}
