#ifndef RESTAURANTCARD_H
#define RESTAURANTCARD_H
#include"Dinner.h"
#include"Lunch.h"
#include"Breakfast.h"
class RestaurantCard{
private:
    double balance;
    bool takeBreakfast;
    bool takeLunch;
    bool takeDinner;
public:
    RestaurantCard();
    RestaurantCard(double,bool,bool,bool);
    RestaurantCard(const RestaurantCard&) = default;
    RestaurantCard& operator=(const RestaurantCard&) = default;
    void setBalance(double);
    double getBalance() const;
    bool haveBreakfast() const;
    bool haveLunch() const;
    bool haveDinner() const;
    void setHaveBreakfast(bool);
    void setHaveLunch(bool);
    void setHaveDinner(bool);
    bool takeaBreakfast(const Breakfast&);
    bool takeaLunch(const Lunch&);
    bool takeaDinner(const Dinner&);
    void recharge(double);
    ~RestaurantCard()=default;

};

#endif // RESTAURANTCARD_H
