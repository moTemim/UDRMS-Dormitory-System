#ifndef RESTAURANTFORM_H
#define RESTAURANTFORM_H
#include "Dormitory.h"


#include <QWidget>

namespace Ui {
class RestaurantForm;
}

class RestaurantForm : public QWidget
{
    Q_OBJECT

public:
    explicit RestaurantForm(Dormitory*,QWidget *parent = nullptr);
    ~RestaurantForm();

private slots:
    void on_btnReturn_8_clicked();

    void on_btnReturn_7_clicked();

    void on_btnReturn_6_clicked();

    void on_btnReturn_4_clicked();

    void on_dayList_currentTextChanged(const QString &arg1);

    void on_btnSave_clicked();

    void on_btnTakeTheMeal_clicked();

    void on_dayList_2_currentTextChanged(const QString &);

    void on_btnRecharge_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::RestaurantForm *ui;
    Dormitory* dorm;
    void updateMealDisplay(const QString& day);
    void refreshMenu();
    bool isReturning = false;
};

#endif // RESTAURANTFORM_H
