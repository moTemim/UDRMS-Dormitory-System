#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <QVector>
#include "Dinner.h"
#include "Lunch.h"
#include "Breakfast.h"



class Restaurant{
private:
    QVector<Breakfast> breakfasts;
    QVector<Lunch> lunchs;
    QVector<Dinner> dinners;
    int numOfMealsServed;
public:
    Restaurant();
    Restaurant(const QVector<Breakfast>&,const QVector<Lunch>&,const QVector<Dinner>&,int);
    Restaurant(const Restaurant&) = default;
    Restaurant& operator=(const Restaurant&) = default;
    void setOneBreakfast(const Breakfast&, int);
    void setOneLunch(const Lunch&, int);
    void setOneDinner(const Dinner&, int);
    Breakfast& getOneBreakfast(int);
    Lunch& getOneLunch(int);
    Dinner& getOneDinner(int);
    int getNumOfMealsServed() const;
    void setNumOfMealsServed(int);
    ~Restaurant()=default;


};
#endif // RESTAURANT_H
