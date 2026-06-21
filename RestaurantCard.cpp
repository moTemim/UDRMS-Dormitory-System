#include"RestaurantCard.h"
#include "UDRMSException.h"

#include<QDebug>
RestaurantCard::RestaurantCard(){
    balance=0;
    takeBreakfast=false;
    takeLunch=false;
    takeDinner=false;
}

RestaurantCard::RestaurantCard(double a,bool b,bool c,bool d){
    balance=a;
    takeBreakfast=b;
    takeLunch=c;
    takeDinner=d;
}

void RestaurantCard::setBalance(double a){
    if(a<0) throw UDRMSException("Invalide Balance");
    balance=a;
}

double RestaurantCard::getBalance() const{
    return balance;
}

bool RestaurantCard::haveBreakfast() const{
    return takeBreakfast;
}

bool RestaurantCard::haveLunch() const{
    return takeLunch;
}

bool RestaurantCard::haveDinner() const{
    return takeDinner;
}

void RestaurantCard::setHaveBreakfast(bool a){
    takeBreakfast=a;
}

void RestaurantCard::setHaveLunch(bool a){
    takeLunch=a;
}

void RestaurantCard::setHaveDinner(bool a){
    takeDinner=a;
}

bool RestaurantCard::takeaBreakfast(const Breakfast& b){
    if(balance >= b.getPrice() && takeBreakfast==false){
        takeBreakfast=true;
        balance-=b.getPrice();
        return true;
    } else {
        return false;
    }
}

bool RestaurantCard::takeaLunch(const Lunch& b){
    if(balance >= b.getPrice() && takeLunch==false){
        takeLunch=true;
        balance-=b.getPrice();
        return true;
    } else {
        return false;
    }
}

bool RestaurantCard::takeaDinner(const Dinner& b){
    if(balance >= b.getPrice() && takeDinner==false){
        takeDinner=true;
        balance-=b.getPrice();
        return true;
    } else {
        return false;
    }
}

void RestaurantCard::recharge(double a){
    balance+=a;
}

