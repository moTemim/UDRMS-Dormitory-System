#ifndef ROOMINFO_H
#define ROOMINFO_H
#include "Room.h"
#include "Dormitory.h"
#include <QWidget>

namespace Ui {
class RoomInfo;
}

class RoomInfo : public QWidget
{
    Q_OBJECT

public:
    explicit RoomInfo(Room*, Dormitory*,QWidget *parent = nullptr);
    ~RoomInfo();
    void refreshForm();
signals:
    void roomDataSaved();

private slots:
    void on_btnSaveRoomInfo_clicked();

    void on_btnReturnBack_clicked();

    void on_btnAddStudentToRoom_clicked();

    void on_btnRemoveFromRoom_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::RoomInfo *ui;
    Room* room;
    Dormitory* dorm;
    bool isReturning = false;
};

#endif // ROOMINFO_H
