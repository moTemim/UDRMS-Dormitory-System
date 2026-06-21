#include<QString>
#include<QDebug>
#include "Student.h"
#include "Room.h"
#include "UDRMSException.h"
Student::Student() : theRoom(nullptr) {
    fullName="";
    Id="";
    age=0;
    school="";
    yearOfStudy=1;
    academicYear="";
    dateOfBirth="";
}

Student::Student(const QString& a,const QString& b,int c,const QString& d,int e,const QString& f,Room* g,const RestaurantCard& h,const QString& i){
    if(c<0) throw UDRMSException("Invalide age");
    if(e<1) throw UDRMSException("Invalide year of study");
    fullName=a;
    Id=b;
    age=c;
    school=d;
    yearOfStudy=e;
    academicYear=f;
    theRoom=g;
    restoCard=h;
    dateOfBirth=i;
}

Student::Student(const Student& other){
    fullName = other.fullName;
    Id = other.Id;
    age = other.age;
    school = other.school;
    yearOfStudy = other.yearOfStudy;
    academicYear = other.academicYear;
    dateOfBirth = other.dateOfBirth;
    restoCard = other.restoCard;
    theRoom = other.theRoom;
}

Student& Student::operator=(const Student& other){
    if(this != &other){
        fullName = other.fullName;
        Id = other.Id;
        age = other.age;
        school = other.school;
        yearOfStudy = other.yearOfStudy;
        academicYear = other.academicYear;
        dateOfBirth = other.dateOfBirth;
        restoCard = other.restoCard;
        theRoom = other.theRoom;
    }
    else throw UDRMSException("you are assigning the same student");
    return *this;
}

void Student::setName(const QString& a){
    fullName=a;
}

void Student::setId(const QString& a){
    Id=a;
}

void Student::setAge(int a){
    if(a<0) throw UDRMSException("Invalide age");
    age=a;
}

void Student::setSchool(const QString& a){
    school=a;
}

void Student::setYearOfStudy(int a){
    if(a<1) throw UDRMSException("Invalide year of study");
    yearOfStudy=a;
}

void Student::setAcademicYear(const QString& a){
    academicYear=a;
}

void Student::setDateOfBirth(const QString& a){
    dateOfBirth=a;
}

void Student::setRoom(Room* a){
    theRoom=a;
}

void Student::setRestoCard(const RestaurantCard& a){
    restoCard=a;
}

void Student::rechargeRestoCard(double a){
    if(a<=0) throw UDRMSException("Invalide amount");
    restoCard.recharge(a);
}

int Student::seeTheBalance() const{
    return restoCard.getBalance();
}

const QString& Student::getName() const{
    return fullName;
}

const QString& Student::getId() const{
    return Id;
}

int Student::getAge() const{
    return age;
}

const QString& Student::getShool() const{
    return school;
}

int Student::getYearOfStudy() const{
    return yearOfStudy;
}

const QString& Student::getAcademicYear() const{
    return academicYear;
}

const QString& Student::getDateOfBirth() const{
    return dateOfBirth;
}

Room* Student::getRoom() const{
    return theRoom;
}

void Student::displayInfo() const{
    qDebug()<<"========================";
    qDebug()<<"The full name: "<<fullName;
    qDebug()<<"The Id: "<<Id;
    qDebug()<<"The age: "<<age;
    qDebug()<<"The date of birth: "<<dateOfBirth;
    qDebug()<<"The school: "<<school;
    qDebug()<<"The year of study: "<<yearOfStudy;
    qDebug()<<"The academic year: "<<academicYear;
    qDebug()<<"--the Room information--";
    theRoom->displayInfo();
    qDebug()<<"------------------------";
}

RestaurantCard& Student::getRestoCard(){
    return restoCard;
}

Student::~Student() noexcept{
    theRoom=nullptr;
}

