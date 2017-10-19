#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void test();

private:
    ///结构型设计模式
    void testAdapterPattern();
};

#endif // MAINWINDOW_H
