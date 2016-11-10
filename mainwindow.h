#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_widget_destroyed();

    void on_MainWindow_destroyed();

    void on_pushButton_clicked();

    void on_pushButton_destroyed();

    void on_plotButton_pressed();

    void on_plotButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
