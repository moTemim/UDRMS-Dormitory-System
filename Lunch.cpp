#include "Lunch.h"
#include<QString>
#include<QDebug>

int Lunch::mealsServed=0;

Lunch::Lunch(){
    openTime="";
    closeTime="";
}

Lunch::Lunch(const QString& s,const QString& n,const QString& a,const QString& b,const QString& c,double d)
    : Meal(a,b,c,d){
    openTime=s;
    closeTime=n;
}

void Lunch::setOpenTime(const QString& s){
    openTime=s;
}

void Lunch::setCloseTime(const QString& s){
    closeTime=s;
}

const QString& Lunch::getOpenTime() const{
    return openTime;
}

const QString& Lunch::getCloseTime() const{
    return closeTime;
}

int Lunch:: getMealsServed(){
    return mealsServed;
}

void Lunch:: setMealsServed(int a){
    mealsServed=a;
}

void Lunch:: display() const{
    qDebug()<<"the open time for the Lunch is: "<<openTime;
    qDebug()<<"the close time for the Lunch is: "<<closeTime;
    qDebug()<<"the Meal contains: ";
    qDebug()<<appetizer<<" - "<<mainPlate<<" - "<<dessert;
    qDebug()<<"the price is: "<<price;
}

void Lunch::displayTheMeal() const{
    qDebug()<<"LUNCH";
    Meal::displayTheMeal();
}