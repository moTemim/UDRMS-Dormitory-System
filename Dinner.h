#ifndef DINNER_H
#define DINNER_H
#include<QString>
#include"Meal.h"
class Dinner: public Meal{
private:
    QString openTime;
    QString closeTime;
    static int mealsServed;
public:
    Dinner();
    Dinner(const QString&,const QString&,const QString&,const QString&,const QString&,double);
    Dinner(const Dinner&) = default;
    Dinner& operator=(const Dinner&) = default;
    void setOpenTime(const QString&);
    const QString& getOpenTime() const;
    void setCloseTime(const QString&);
    const QString& getCloseTime() const;
    static int getMealsServed();
    static void setMealsServed(int);
    void display() const override;
    void displayTheMeal() const override;
    ~Dinner()=default;
};
#endif // DINNER_H
