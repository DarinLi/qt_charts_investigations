#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

/*
// Generates 1.csv with data for y = x^2 from -10 to 10
    if(GenerateData("/home/msskvortsov/work/PlotFromCSV/test.csv")){
        return 1;
    }
*/



    return a.exec();
}

