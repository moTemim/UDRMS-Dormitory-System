#include "dashboard.h"
#include "DormitoryMng.h"
#include "ui_dashboard.h"
#include <QCloseEvent>
#include <QApplication>

Dashboard::Dashboard(QVector<Dormitory*>& dorms, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dashboard)
    , dormitories(dorms)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::closeEvent(QCloseEvent *event)
{
    QApplication::quit();
    event->accept();
}

void Dashboard::on_btnThroughDormitory_clicked()
{
    DormitoryMng *Dormng=new DormitoryMng(dormitories, nullptr);
    Dormng->show();
    this->hide();
    connect(Dormng, &QWidget::destroyed, this, &Dashboard::show);
}



