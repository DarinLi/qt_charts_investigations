#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T12:14:56
#
#-------------------------------------------------

QT       += core gui
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PlotFromCSV
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plotfromcsv.cpp

HEADERS  += mainwindow.h \
    plotfromcsv.h

FORMS    += mainwindow.ui

INCLUDEPATH += .\
