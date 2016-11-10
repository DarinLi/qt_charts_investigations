#ifndef PLOTFROMCSV_H
#define PLOTFROMCSV_H

#endif // PLOTFROMCSV_H
#include <QString>
#include <QtCharts>

#pragma once

int GenerateData(QString file);
// file - target file
// Generates .csv file with data for y = x^2 from -10 to 10

QtCharts::QChartView* PlotFromCSV(QString file);
// Plots a graph (using QtCharts) from .csv file with 2 columns of real numbers
// file - source file
// if mode == 0 1st column - y, 2nd - x
// if mode == 1 1st column - x, 2nd - y
