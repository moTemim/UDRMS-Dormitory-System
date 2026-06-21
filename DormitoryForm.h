#ifndef DORMITORYFORM_H
#define DORMITORYFORM_H
#include "Dormitory.h"
#include <QWidget>

namespace Ui {
class DormitoryForm;
}

class DormitoryForm : public QWidget
{
    Q_OBJECT

public:
    explicit DormitoryForm(Dormitory*,QWidget *parent = nullptr);
    ~DormitoryForm();

private slots:
    void on_btnEnter_clicked();

    void on_btnReturn_clicked();

    void on_ManageTheStudents_clicked();

    void on_ManageTheRooms_clicked();

    void on_ManageTheRestaurant_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::DormitoryForm *ui;
    Dormitory* dorm;
    void refreshForm();
    bool isReturning = false;
};

#endif // DORMITORYFORM_H
