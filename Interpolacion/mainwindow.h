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
    double x[5][2];//creation of the increasing arrangement

private:
    Ui::MainWindow *ui;

public slots:
    void metodo();//statement of methods to be followed
    void borrar();


};

#endif // MAINWINDOW_H



