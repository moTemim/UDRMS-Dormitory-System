#include "addRoom.h"
#include "ui_addRoom.h"

addRoom::addRoom(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addRoom)
{
    ui->setupUi(this);
}

addRoom::~addRoom()
{
    delete ui;
}
