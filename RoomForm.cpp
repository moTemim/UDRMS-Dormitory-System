#include "RoomForm.h"
#include "RoomInfo.h"
#include "ui_RoomForm.h"
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include <QMessageBox>
#include "UDRMSException.h"

RoomForm::RoomForm(Dormitory* a,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RoomForm)
    , dorm(a)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    refreshRoomsList();
}

RoomForm::~RoomForm()
{
    delete ui;
}

void RoomForm::refreshRoomsList(){
    ui->listRooms->clear();
    if(dorm->getRooms().isEmpty()){
        ui->listRooms->addItem("No Rooms available");
        return;
    }
    for(const Room &r : std::as_const(dorm->getRooms())){
        ui->listRooms->addItem(QString::number(r.getNumber()));
    }
}

void RoomForm::on_searchBar_textChanged(const QString &text)
{
    ui->listRooms->clear();

    for(int i = 0; i < dorm->getRooms().size(); i++){
        if(QString::number(dorm->getRooms()[i].getNumber()).contains(text, Qt::CaseInsensitive)){
            ui->listRooms->addItem(QString::number(dorm->getRooms()[i].getNumber()));
        }
    }
}

void RoomForm::on_btnReturnBack_clicked()
{
    isReturning = true;
    this->close();
}

void RoomForm::on_btnAddRoom_clicked(){
    try{
        Room newRoom;
        dorm->addRoom(newRoom);
        refreshRoomsList();
    }
    catch(const UDRMSException& e){
        QMessageBox::critical(this, "Operation Failed", e.what());
    }
}


void RoomForm::on_listRooms_itemDoubleClicked(QListWidgetItem *item)
{
    int num = item->text().toInt();
    Room* selectedRoom = nullptr;

    for(int i = 0; i < dorm->getRooms().size(); i++){
        if(dorm->getRooms()[i].getNumber() == num){
            selectedRoom = &dorm->getRooms()[i];
            break;
        }
    }

    if(selectedRoom == nullptr) return;

    RoomInfo* roomInfo = new RoomInfo(selectedRoom,dorm, nullptr);


    connect(roomInfo, &RoomInfo::roomDataSaved, this, &RoomForm::refreshRoomsList);


    connect(roomInfo, &QWidget::destroyed, this, &RoomForm::show);

    roomInfo->show();
    this->hide();
}

void RoomForm::on_btnRemoveFromDormitory_clicked()
{
    int currentRow = ui->listRooms->currentRow();
    if (currentRow == -1 || dorm->getRooms().isEmpty()) {
        return;
    }
    Room& roomToRemove = dorm->getRooms()[currentRow];
    for (Student* s : std::as_const(roomToRemove.getStudents())) {
        s->setRoom(nullptr);
    }
    dorm->getRooms().remove(currentRow);
    refreshRoomsList();

}

void RoomForm::closeEvent(QCloseEvent *event)
{

    if (isReturning) {
        event->accept();
    } else {
        QApplication::quit();
    }
}

