#include "mainwindow.h"

#include "testcreationpatterns.h"
#include "adapter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}

void MainWindow::test()
{
    testAdapterPattern();
}

void MainWindow::testAdapterPattern()
{
    // 创建适配器
    IRussiaSocket *pAdapter = new PowerAdapter();

    // 充电
    pAdapter->Charge();

    SAFE_DELETE(pAdapter);

    getchar();
}
