#include"Breakfast.h"
#include<QString>
#include<QDebug>

int Breakfast::mealsServed=0;

Breakfast::Breakfast(): Meal(){
    openTime="";
    closeTime="";
}

Breakfast::Breakfast(const QString& s,const QString& n,const QString& a,const QString& b,const QString& c,double d)
    : Meal(a,b,c,d){
    openTime=s;
    closeTime=n;
}

void Breakfast::setOpenTime(const QString& s){
    openTime=s;
}

void Breakfast::setCloseTime(const QString& s){
    closeTime=s;
}

const QString& Breakfast::getOpenTime() const{
    return openTime;
}

const QString& Breakfast::getCloseTime() const{
    return closeTime;
}

int Breakfast:: getMealsServed(){
    return mealsServed;
}

void Breakfast:: setMealsServed(int a){
    mealsServed=a;
}

void Breakfast:: display() const{
    qDebug()<<"the open time for the Breakfast is: "<<openTime;
    qDebug()<<"the close time for the Breakfast is: "<<closeTime;
    qDebug()<<"the Meal contains: ";
    qDebug()<<appetizer<<" - "<<mainPlate<<" - "<<dessert;
    qDebug()<<"the price is: "<<price;
}

void Breakfast::displayTheMeal() const{
    qDebug()<<"BREAKFAST";
    Meal::displayTheMeal();
}