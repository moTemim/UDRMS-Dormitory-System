#include"Dinner.h"
#include<QString>
#include<QDebug>

int Dinner::mealsServed=0;

Dinner::Dinner(): Meal(){
    openTime="";
    closeTime="";
}

Dinner::Dinner(const QString& s,const QString& n,const QString& a,const QString& b,const QString& c,double d)
    : Meal(a,b,c,d){
    openTime=s;
    closeTime=n;
}

void Dinner::setOpenTime(const QString& s){
    openTime=s;
}

void Dinner::setCloseTime(const QString& s){
    closeTime=s;
}

const QString& Dinner::getOpenTime() const{
    return openTime;
}

const QString& Dinner::getCloseTime() const{
    return closeTime;
}

int Dinner:: getMealsServed(){
    return mealsServed;
}

void Dinner:: setMealsServed(int a){
    mealsServed=a;
}

void Dinner:: display() const{
    qDebug()<<"the open time for the Dinner is: "<<openTime;
    qDebug()<<"the close time for the Dinner is: "<<closeTime;
    qDebug()<<"the Meal contains: ";
    qDebug()<<appetizer<<" - "<<mainPlate<<" - "<<dessert;
    qDebug()<<"the price is: "<<price;
}

void Dinner::displayTheMeal() const{
    qDebug()<<"DINNER";
    Meal::displayTheMeal();
}