#include "mainwindow.h"
#include "plotfromcsv.h"
#include <QString>
#include <QFile>
#include <QDebug>
#include <QLineSeries>
#include <QtCharts>

using namespace QtCharts;

int GenerateData(QString file){

    QFile data(file);

    if(data.isOpen()){
        data.close();
    }

    if (data.exists()){
        data.remove();
        if(!data.open(QIODevice::WriteOnly)){
            qDebug()<< data.errorString();
            return 1;
        }
    }
    else{
        if(!data.open(QIODevice::WriteOnly)){
            qDebug()<< data.errorString();
            return 1;
        }
    }

    for (double i = -10; i <= 10; i += 0.1){
        QString temp = QString::number(i);
        double tempY = i*i;
        temp += "," + QString::number(tempY) + "\n";
        QByteArray toWrite;
        toWrite.insert(0, temp);
        data.write(toWrite);
        temp.clear();
        toWrite.clear();
    }
    data.close();
    return 0;
}

QChartView* PlotFromCSV(QString file){

    QFile data(file);
    if(!data.open(QIODevice::ReadOnly)) {
        qDebug() << data.errorString();
    }

    QLineSeries* series = new QLineSeries();
    while (!data.atEnd()){
        QString line = data.readLine();
        QStringList temp = line.split(',');
            series->append(temp[0].toDouble(),temp[1].toDouble());

    }
    data.close();

    QChart *chart = new QChart();
    QValueAxis* axisX = new QValueAxis;
    QValueAxis* axisY = new QValueAxis;
    QChartView *chartView = new QChartView(chart);

    axisX->setTickCount(21);
    axisY->setTickCount(21);
    axisX->setTitleText("X");
    axisY->setTitleText("Y");

    chart->addSeries(series);
    chart->addAxis(axisY, Qt::AlignLeft);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    series->attachAxis(axisY);
    chart->legend()->setVisible(false);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}
