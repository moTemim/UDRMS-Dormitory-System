#include "mainwindow.h"
#include "DormitoryMng.h"
#include "ui_mainwindow.h"
#include <QCloseEvent>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
    for(int i = 0; i < dormitories.size(); i++)
        delete dormitories[i];
    dormitories.clear();
}

void MainWindow::closeEvent(QCloseEvent *event)
{

    event->accept();
}

void MainWindow::on_btnStartManaging_clicked()
{
    DormitoryMng *Dormng=new DormitoryMng(dormitories, nullptr);
    Dormng->show();
    this->hide();
}

