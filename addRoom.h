#ifndef ADDROOM_H
#define ADDROOM_H

#include <QWidget>

namespace Ui {
class addRoom;
}

class addRoom : public QWidget
{
    Q_OBJECT

public:
    explicit addRoom(QWidget *parent = nullptr);
    ~addRoom();

private:
    Ui::addRoom *ui;
};

#endif // ADDROOM_H
