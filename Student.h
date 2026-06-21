#ifndef STUDENT_H
#define STUDENT_H
#include<QString>
#include"RestaurantCard.h"
class Room;
class Student{
private:
    QString fullName;
    QString Id;
    int age;
    QString school;
    int yearOfStudy;
    QString academicYear;
    Room* theRoom;
    RestaurantCard restoCard;
    QString dateOfBirth;
public:
    Student();
    Student(const QString&,const QString&,int,const QString&,int,const QString&,Room*,const RestaurantCard&,const QString&);
    Student(const Student&);
    Student& operator=(const Student&);
    void setName(const QString&);
    void setId(const QString&);
    void setAge(int);
    void setSchool(const QString&);
    void setYearOfStudy(int);
    void setAcademicYear(const QString&);
    void setDateOfBirth(const QString&);
    void setRoom(Room*);
    void setRestoCard(const RestaurantCard&);
    void rechargeRestoCard(double);
    int seeTheBalance() const;
    const QString& getName() const;
    const QString& getId() const;
    int getAge() const;
    const QString& getShool() const;
    int getYearOfStudy() const;
    const QString& getAcademicYear() const;
    const QString& getDateOfBirth() const;
    Room* getRoom() const;
    RestaurantCard& getRestoCard();
    void displayInfo() const;
    ~Student() noexcept;
    
};

#endif // STUDENT_H
