#include "DormitoryForm.h"
#include "Dormitory.h"
#include "ui_DormitoryForm.h"
#include "StudentForm.h"
#include "RoomForm.h"
#include "RestaurantForm.h"
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include "UDRMSException.h"


DormitoryForm::DormitoryForm(Dormitory* a,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DormitoryForm)
    ,dorm(a)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->DormTitel->setText(a->getName());
    ui->DormTitel->setText(dorm->getName());
    ui->editDormName->setText(dorm->getName());
    ui->editNumRooms->setValue(dorm->getNumRooms());
    ui->editDormCapacity->setText(QString::number(dorm->getCapacity()));
    ui->editRoomsOccu->setValue(dorm->getRoomsOccu());
    ui->editRoomsFree->setValue(dorm->getRoomsFree());
    ui->editGender->setText(dorm->getGender());
    ui->EditDormPassword->setText(dorm->getPassword());
}

DormitoryForm::~DormitoryForm()
{
    delete ui;
}

void DormitoryForm::on_btnEnter_clicked()
{
    try{
        dorm->setName(ui->editDormName->text());
        dorm->setNumRooms(ui->editNumRooms->text().toInt());
        dorm->setCapacity(ui->editDormCapacity->text().toInt());
        dorm->setGender(ui->editGender->text());
        dorm->setPassword(ui->EditDormPassword->text());\
    }catch(const UDRMSException& e){
        QMessageBox::critical(this, "Operation Failed", e.what());
    }

    refreshForm();

}

void DormitoryForm::refreshForm()
{

    ui->DormTitel->setText(dorm->getName());
    ui->editDormName->setText(dorm->getName());
    ui->editNumRooms->setValue(dorm->getNumRooms());
    ui->editDormCapacity->setText(QString::number(dorm->getCapacity()));
    ui->editRoomsOccu->setValue(dorm->getRoomsOccu());
    ui->editRoomsFree->setValue(dorm->getRoomsFree());
    ui->editGender->setText(dorm->getGender());
    ui->EditDormPassword->setText(dorm->getPassword());

    qDebug() << "Form refreshed successfully";
}



void DormitoryForm::on_btnReturn_clicked()
{
    isReturning = true;
    this->close();
}


void DormitoryForm::on_ManageTheStudents_clicked()
{
    StudentForm* StudentFrm= new StudentForm(dorm,nullptr);
    StudentFrm->show();
    this->hide();
    connect(StudentFrm, &QWidget::destroyed, this, &DormitoryForm::show);
}


void DormitoryForm::on_ManageTheRooms_clicked()
{
    RoomForm* RoomFrm= new RoomForm(dorm,nullptr);
    RoomFrm->show();
    this->hide();
    connect(RoomFrm, &QWidget::destroyed, this, &DormitoryForm::show);
}


void DormitoryForm::on_ManageTheRestaurant_clicked()
{
    RestaurantForm* RestaurantFrm= new RestaurantForm(dorm,nullptr);
    RestaurantFrm->show();
    this->hide();
    connect(RestaurantFrm, &QWidget::destroyed, this, &DormitoryForm::show);
}

void DormitoryForm::closeEvent(QCloseEvent *event)
{

    if (isReturning) {
        event->accept();
    } else {
        QApplication::quit();
    }
}

