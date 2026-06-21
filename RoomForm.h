#ifndef ROOMFORM_H
#define ROOMFORM_H
#include "Dormitory.h"
#include <QListWidgetItem>
#include <QWidget>

namespace Ui {
class RoomForm;
}

class RoomForm : public QWidget
{
    Q_OBJECT

public:
    explicit RoomForm(Dormitory*,QWidget *parent = nullptr);
    ~RoomForm();
private slots:
    void on_btnAddRoom_clicked();

    void on_btnReturnBack_clicked();

    void on_searchBar_textChanged(const QString &arg1);

    void on_listRooms_itemDoubleClicked(QListWidgetItem *item);

    void on_btnRemoveFromDormitory_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::RoomForm *ui;
    Dormitory* dorm;
    void refreshRoomsList();
    bool isReturning = false;
};

#endif // ROOMFORM_H
