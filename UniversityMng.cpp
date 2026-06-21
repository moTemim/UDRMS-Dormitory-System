#include "UniversityMng.h"
#include "ui_UniversityMng.h"
#include <QCloseEvent>
#include <QApplication>

UniversityMng::UniversityMng(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UniversityMng)
{
    ui->setupUi(this);
}

UniversityMng::~UniversityMng()
{
    delete ui;
}

void UniversityMng::closeEvent(QCloseEvent *event)
{
    QApplication::quit();
    event->accept();
}
