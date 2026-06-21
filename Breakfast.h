#ifndef BREAKFAST_H
#define BREAKFAST_H
#include <QString>
#include "Meal.h"
class Breakfast: public Meal{
private:
    QString openTime;
    QString closeTime;
    static int mealsServed;
public:
    Breakfast();
    Breakfast(const QString&,const QString&,const QString&,const QString&,const QString&,double);
    Breakfast(const Breakfast&) = default;
    Breakfast& operator=(const Breakfast&) = default;
    void setOpenTime(const QString&);
    const QString& getOpenTime() const;
    void setCloseTime(const QString&);
    const QString& getCloseTime() const;
    static int getMealsServed() ;
    static void setMealsServed(int);
    void display() const override;
    void displayTheMeal() const override;
    ~Breakfast()=default;
};

#endif // BREAKFAST_H
