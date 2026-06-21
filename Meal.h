#ifndef MEAL_H
#define MEAL_H
#include<QString>
class Meal{
protected:
    QString appetizer;
    QString mainPlate;
    QString dessert;
    double price;
public:
    Meal();
    Meal(const QString&,const QString&,const QString&,double);
    Meal(const Meal&) = default;
    Meal& operator=(const Meal&) = default;
    void setAppetizer(const QString&);
    void setMainPlate(const QString&);
    void setDessert(const QString&);
    void setPrice(double);
    double getPrice() const;
    virtual void display() const =0;
    const QString& getAppetizer() const;
    const QString& getMainPlate() const;
    const QString& getDessert() const;
    virtual ~Meal() = default;
    virtual void displayTheMeal() const;
};

#endif // MEAL_H
