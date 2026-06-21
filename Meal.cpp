#include "Meal.h"
#include<QString>
#include<QDebug>

Meal::Meal(){
    appetizer="";
    mainPlate="";
    dessert="";
    price=0;
}

Meal::Meal(const QString& a,const QString& b,const QString& c,double d){
    appetizer=a;
    mainPlate=b;
    dessert=c;
    price=d;
}

void Meal::setAppetizer(const QString& a){
    appetizer=a;
}

void Meal::setMainPlate(const QString& a){
    mainPlate=a;
}

void Meal::setDessert(const QString& a){
    dessert=a;
}

void Meal::setPrice(double a){
    price=a;
}

double Meal::getPrice() const{
    return price;
}

const QString& Meal:: getAppetizer() const{
    return appetizer;
}

const QString& Meal:: getMainPlate() const{
    return mainPlate;
}

const QString& Meal:: getDessert() const{
    return dessert;
}

void Meal::displayTheMeal() const{
    qDebug()<<appetizer<<" - "<<mainPlate<<" - "<<dessert;
}