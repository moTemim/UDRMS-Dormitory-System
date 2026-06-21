#include "RoomInfo.h"
#include "ui_RoomInfo.h"
#include "Student.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QListWidgetItem>
#include <QWidget>
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include "UDRMSException.h"

RoomInfo::RoomInfo(Room* a, Dormitory* d,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RoomInfo)
    , room(a)
    ,dorm(d)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    refreshForm();
}

void RoomInfo::refreshForm(){
    ui->RoomNumber->setText(QString::number(room->getNumber()));
    ui->RoomCapacity->setValue(room->getCapacity());
    ui->RoomFloor->setValue(room->getFloor());
    ui->RoomCorridor->setText(QString(1, room->getCorridor()));
    ui->RoomCurrentOccupancy->setValue(room->getCurrentOccupancy());

    ui->listStudents->clear();
    if(room->getStudents().isEmpty()){
        ui->listStudents->addItem("No students available");
    }
    for(Student* s : std::as_const(room->getStudents())){
        ui->listStudents->addItem(s->getName());
    }
    ui->avalaibleStudents->clear();
    for(Student* s : std::as_const(dorm->getStudents())){
        if(s->getRoom()== nullptr) {
            ui->avalaibleStudents->addItem(s->getName(), QVariant::fromValue(s));

        }

    }
}

RoomInfo::~RoomInfo()
{
    delete ui;
}

void RoomInfo::on_btnSaveRoomInfo_clicked()
{   try{
        room->setNumber(ui->RoomNumber->text().toInt());
        room->setFloor(ui->RoomFloor->value());

        QString corridorText = ui->RoomCorridor->text().trimmed();

        if (!corridorText.isEmpty()) {
            room->setCorridor(corridorText.at(0).toLatin1());
        } else {
            room->setCorridor('-');
        }

        room->setCapacity(ui->RoomCapacity->value());
        room->setCurrentOccupancy(ui->RoomCurrentOccupancy->value());
    }catch(const UDRMSException& e){
        QMessageBox::critical(this, "Operation Failed", e.what());
    }
    refreshForm();

    emit roomDataSaved();
}


void RoomInfo::on_btnReturnBack_clicked()
{
    isReturning = true;
    this->close();
}


void RoomInfo::on_btnAddStudentToRoom_clicked()
{
    int currentIndex = ui->avalaibleStudents->currentIndex();
    if (currentIndex == -1) return;
    Student* selectedStudent = ui->avalaibleStudents->itemData(currentIndex).value<Student*>();
    if (!selectedStudent) return;
    if (room->getCurrentOccupancy() >= room->getCapacity()) {
        return;
    }
    try{
        room->addStudent(selectedStudent);
        room->setCurrentOccupancy(room->getCurrentOccupancy() + 1);
        selectedStudent->setRoom(room);
    }
    catch(const UDRMSException& e){
        QMessageBox::critical(this, "Operation Failed", e.what());
    }
    refreshForm();

    emit roomDataSaved();
}


void RoomInfo::on_btnRemoveFromRoom_clicked()
{
    int currentRow = ui->listStudents->currentRow();
    if (currentRow == -1 || room->getStudents().isEmpty()) {
        return;
    }
    Student* studentToRemove = room->getStudents().at(currentRow);
    studentToRemove->setRoom(nullptr);
    room->removeStudent(studentToRemove);
    if (room->getCurrentOccupancy() > 0) {
        room->setCurrentOccupancy(room->getCurrentOccupancy() - 1);
    }
    refreshForm();
}

void RoomInfo::closeEvent(QCloseEvent *event)
{

    if (isReturning) {
        event->accept();
    } else {
        QApplication::quit();
    }
}

