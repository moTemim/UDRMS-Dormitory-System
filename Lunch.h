#ifndef LUNCH_H
#define LUNCH_H
#include"Meal.h"
#include<QString>
class Lunch: public Meal{
private:
    QString openTime;
    QString closeTime;
    static int mealsServed;
public:
    Lunch();
    Lunch(const QString&,const QString&,const QString&,const QString&,const QString&,double);
    Lunch(const Lunch&) = default;
    Lunch& operator=(const Lunch&) = default;
    void setOpenTime(const QString&);
    const QString& getOpenTime() const;
    void setCloseTime(const QString&);
    const QString& getCloseTime() const;
    static int getMealsServed();
    static void setMealsServed(int);
    void display() const override;
    void displayTheMeal() const override;
    ~Lunch()=default;
};
#endif // LUNCH_H
