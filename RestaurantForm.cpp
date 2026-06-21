#include "RestaurantForm.h"
#include "ui_RestaurantForm.h"
#include <QVector>
#include <QMessageBox>
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include "UDRMSException.h"

RestaurantForm::RestaurantForm(Dormitory* a,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RestaurantForm)
    , dorm(a)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->TabWidget->setTabText(0, "The Menu");
    ui->TabWidget->setTabText(1, "Take a Meal");
    ui->TabWidget->setTabText(2, "Recharge Card");
    ui->TabWidget->setTabText(3, "Modify Menu");
    updateMealDisplay(ui->dayList_2->currentText());
    on_dayList_2_currentTextChanged(ui->dayList_2->currentText());

}

RestaurantForm::~RestaurantForm()
{
    delete ui;
}

void RestaurantForm::on_btnReturn_8_clicked()
{
    isReturning = true;
    this->close();
}


void RestaurantForm::on_btnReturn_7_clicked()
{
    isReturning = true;
    this->close();
}


void RestaurantForm::on_btnReturn_6_clicked()
{
    isReturning = true;
    this->close();
}


void RestaurantForm::on_btnReturn_4_clicked()
{
    isReturning = true;
    this->close();
}

void RestaurantForm::updateMealDisplay(const QString& day)
{
    if (dorm == nullptr) {
        return;
    }
    Restaurant& restaurant = dorm->getRestaurant();
    QVector<QString> ListOfdays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i=0;i<7;i++){
        if(day==ListOfdays[i]){
            ui->BreakfastOpenTime->setText(restaurant.getOneBreakfast(i).getOpenTime());
            ui->BreakfastCloseTime->setText(restaurant.getOneBreakfast(i).getCloseTime());
            ui->BreakfastAppetizer->setText(restaurant.getOneBreakfast(i).getAppetizer());
            ui->BreakfastMainPlate->setText(restaurant.getOneBreakfast(i).getMainPlate());
            ui->BreakfastMainPlate->setText(restaurant.getOneBreakfast(i).getMainPlate());
            ui->BreakfastDessert->setText(restaurant.getOneBreakfast(i).getDessert());
            ui->BreakfastPrice->setText(QString::number(restaurant.getOneBreakfast(i).getPrice()));
            ui->BreakfastMealServed->setText(QString::number(restaurant.getOneBreakfast(i).getMealsServed()));

            ui->LunchOpenTime->setText(restaurant.getOneLunch(i).getOpenTime());
            ui->LunchCloseTime->setText(restaurant.getOneLunch(i).getCloseTime());
            ui->LunchAppetizer->setText(restaurant.getOneLunch(i).getAppetizer());
            ui->LunchMainPlate->setText(restaurant.getOneLunch(i).getMainPlate());
            ui->LunchMainPlate->setText(restaurant.getOneLunch(i).getMainPlate());
            ui->LunchDessert->setText(restaurant.getOneLunch(i).getDessert());
            ui->LunchPrice->setText(QString::number(restaurant.getOneLunch(i).getPrice()));
            ui->LunchMealServed->setText(QString::number(restaurant.getOneLunch(i).getMealsServed()));

            ui->DinnerOpenTime->setText(restaurant.getOneDinner(i).getOpenTime());
            ui->DinnerCloseTime->setText(restaurant.getOneDinner(i).getCloseTime());
            ui->DinnerAppetizer->setText(restaurant.getOneDinner(i).getAppetizer());
            ui->DinnerMainPlate->setText(restaurant.getOneDinner(i).getMainPlate());
            ui->DinnerMainPlate->setText(restaurant.getOneDinner(i).getMainPlate());
            ui->DinnerDessert->setText(restaurant.getOneDinner(i).getDessert());
            ui->DinnerPrice->setText(QString::number(restaurant.getOneDinner(i).getPrice()));
            ui->DinnerMealServed->setText(QString::number(restaurant.getOneDinner(i).getMealsServed()));

            break;

        }
    }

}

void RestaurantForm::on_dayList_2_currentTextChanged(const QString &arg1)
{
    if (arg1.isEmpty()) {
        return;
    }

    Restaurant& restaurant = dorm->getRestaurant();
    QVector<QString> ListOfdays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(int i = 0; i < 7; i++){
        if(arg1 == ListOfdays[i]){
            Breakfast& b = restaurant.getOneBreakfast(i);
            ui->editBreakfastOpenTime->setText(b.getOpenTime());
            Lunch& l = restaurant.getOneLunch(i);
            ui->editLunchOpenTime->setText(l.getOpenTime());
            Dinner& d = restaurant.getOneDinner(i);
            ui->editDinnerOpenTime->setText(d.getOpenTime());
            break;
        }
    }
}

void RestaurantForm::on_dayList_currentTextChanged(const QString &arg1)
{
    if (arg1.isEmpty()) {
        return;
    }

    updateMealDisplay(arg1);
}

void RestaurantForm::refreshMenu()
{
    QString currentDay = ui->dayList->currentText();
    if (currentDay.isEmpty()) {
        return;
    }
    updateMealDisplay(currentDay);
}

void RestaurantForm::on_btnSave_clicked()
{
    QString selectedDay = ui->dayList_2->currentText();
    Restaurant& restaurant = dorm->getRestaurant();
    QVector<QString> ListOfdays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i=0;i<7;i++){
        if(selectedDay==ListOfdays[i]){
            try{
            restaurant.getOneBreakfast(i).setOpenTime(ui->editBreakfastOpenTime->text());
            restaurant.getOneBreakfast(i).setCloseTime(ui->editBreakfastCloseTime->text());
            restaurant.getOneBreakfast(i).setAppetizer(ui->editBreakfastAppetizer->text());
            restaurant.getOneBreakfast(i).setMainPlate(ui->editBreakfastMainPlate->text());
            restaurant.getOneBreakfast(i).setDessert(ui->editBreakfastDessert->text());
            restaurant.getOneBreakfast(i).setMealsServed(ui->editBreakfastMealServed->text().toInt());
            restaurant.getOneBreakfast(i).setPrice(ui->editBreakfastPrice->text().toDouble());

            restaurant.getOneLunch(i).setOpenTime(ui->editLunchOpenTime->text());
            restaurant.getOneLunch(i).setCloseTime(ui->editLunchCloseTime->text());
            restaurant.getOneLunch(i).setAppetizer(ui->editLunchAppetizer->text());
            restaurant.getOneLunch(i).setMainPlate(ui->editLunchMainPlate->text());
            restaurant.getOneLunch(i).setDessert(ui->editLunchDessert->text());
            restaurant.getOneLunch(i).setMealsServed(ui->editLunchMealServed->text().toInt());
            restaurant.getOneLunch(i).setPrice(ui->editLunchPrice->text().toDouble());

            restaurant.getOneDinner(i).setOpenTime(ui->editDinnerOpenTime->text());
            restaurant.getOneDinner(i).setCloseTime(ui->editDinnerCloseTime->text());
            restaurant.getOneDinner(i).setAppetizer(ui->editDinnerAppetizer->text());
            restaurant.getOneDinner(i).setMainPlate(ui->editDinnerMainPlate->text());
            restaurant.getOneDinner(i).setDessert(ui->editDinnerDessert->text());
            restaurant.getOneDinner(i).setMealsServed(ui->editDinnerMealServed->text().toInt());
            restaurant.getOneDinner(i).setPrice(ui->editDinnerPrice->text().toDouble());
            }
            catch(const UDRMSException& e){
                QMessageBox::warning(this, "Unexpected Error", e.what());
            }
            refreshMenu();


            break;
        }
    }
}


void RestaurantForm::on_btnTakeTheMeal_clicked()
{
    Student* selectedStudent = nullptr;
    for(int i = 0; i < dorm->getStudents().size(); i++){
        if(dorm->getStudents()[i]->getId() == ui->editStudentId->text()){
            selectedStudent = dorm->getStudents()[i];
            break;
        }
    }

    if (selectedStudent == nullptr) {
        QMessageBox::warning(this, "Error", "Student not found!");
        return;
    }

    Restaurant& restaurant = dorm->getRestaurant();
    RestaurantCard& card = selectedStudent->getRestoCard();
    QString selectedDay = ui->dayList->currentText();
    QString selectedMeal = ui->theMealToTake->currentText();
    bool stat = false;

    QVector<QString> ListOfdays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(int i = 0; i < 7; i++){
        if(selectedDay == ListOfdays[i]){
            if(selectedMeal == "Breakfast"){
                Breakfast& b = restaurant.getOneBreakfast(i);
                stat = card.takeaBreakfast(b);
                if (stat) {
                    b.setMealsServed(b.getMealsServed() + 1);
                    ui->theMealNumber->setText(QString::number(b.getMealsServed()));
                }
                break;
            }
            else if(selectedMeal == "Lunch"){
                Lunch& b = restaurant.getOneLunch(i);
                stat = card.takeaLunch(b);
                if (stat) {
                    b.setMealsServed(b.getMealsServed() + 1);
                    ui->theMealNumber->setText(QString::number(b.getMealsServed()));
                }
                break;
            }
            else{
                Dinner& b = restaurant.getOneDinner(i);
                stat = card.takeaDinner(b);
                if (stat) {
                    b.setMealsServed(b.getMealsServed() + 1);
                    ui->theMealNumber->setText(QString::number(b.getMealsServed()));
                }
                break;
            }
        }
    }


    if(stat == true){
        QMessageBox::information(this, "Success", "Meal taken successfully!");

    } else {
        QMessageBox::warning(this, "Error", "Cannot take meal (Insufficient balance or already taken)!");
    }
}
void RestaurantForm::on_btnRecharge_clicked()
{
    Student* selectedStudent = nullptr;
    for(int i = 0; i < dorm->getStudents().size(); i++){
        if(dorm->getStudents()[i]->getId() == ui->editStudentId_2->text()){
            selectedStudent = dorm->getStudents()[i];
            break;
        }
    }

    if (selectedStudent == nullptr) {
        QMessageBox::warning(this, "Error", "Student not found!");
        return;
    }
    double amount=ui->editTheAmount->value();
    selectedStudent->rechargeRestoCard(amount);
    ui->theNewBalance->setText(QString::number(selectedStudent->getRestoCard().getBalance()));

    QMessageBox::information(this, "Success", "Recharge successfully!");

}

void RestaurantForm::closeEvent(QCloseEvent *event)
{

    if (isReturning) {
        event->accept();
    } else {
        QApplication::quit();
    }
}

