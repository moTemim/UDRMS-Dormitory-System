#include<QVector>
#include"QDebug"
#include "Restaurant.h"
#include "UDRMSException.h"
#include <QJsonArray>

Restaurant::Restaurant(){
    for (int i = 0; i < 7; i++) {
        breakfasts.append(Breakfast());
        lunchs.append(Lunch());
        dinners.append(Dinner());
    }
    numOfMealsServed=0;
}

Restaurant::Restaurant(const QVector<Breakfast>& a,const QVector<Lunch>& b,const QVector<Dinner>& c,int d){
    if(a.size()>7) throw UDRMSException("we cant have more than 7 breakfasts in the week");
    if(b.size()>7) throw UDRMSException("we cant have more than 7 lunchs in the week");
    if(c.size()>7) throw UDRMSException("we cant have more than 7 dinners in the week");
    if(d<0) throw UDRMSException("invalide number of served meals");
    breakfasts=a;
    lunchs=b;
    dinners=c;
    numOfMealsServed=d;
}

void Restaurant::setOneBreakfast(const Breakfast& a, int b){
    if(b>6 || b<0) throw UDRMSException("Invalide Day");
    for(int i=0;i<breakfasts.size();i++){
        if(i==b){
            breakfasts[i]=a;
            break;
        }
    }
}

void Restaurant::setOneLunch(const Lunch& a, int b){
    if(b>6 || b<0) throw UDRMSException("Invalide Day");
    for(int i=0;i<lunchs.size();i++){
        if(i==b){
            lunchs[i]=a;
            break;
        }
    }
}

void Restaurant::setOneDinner(const Dinner& a, int b){
    if(b>6 || b<0) throw UDRMSException("Invalide Day");
    for(int i=0;i<dinners.size();i++){
        if(i==b){
            dinners[i]=a;
            break;
        }
    }
}

Breakfast& Restaurant:: getOneBreakfast(int i){
    return breakfasts[i];
}

Lunch& Restaurant:: getOneLunch(int i){
    return lunchs[i];
}

Dinner& Restaurant:: getOneDinner(int i){
    return dinners[i];
}

int Restaurant::getNumOfMealsServed() const{
    return numOfMealsServed;
}

void Restaurant::setNumOfMealsServed(int a){
    numOfMealsServed=a;
}

