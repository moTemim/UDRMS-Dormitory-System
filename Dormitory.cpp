#include"Dormitory.h"
#include"UDRMSException.h"
#include "Room.h"
#include<QString>
#include<QVector>
#include<QDebug>

Dormitory::Dormitory(){
    name="";
    numRooms=0;
    capacity=0;
    students={};
    rooms={};
    roomsOccu=0;
    roomsFree=0;
    password={};
    gender="";
}

Dormitory::Dormitory(const QString& a,int b,int c,const QVector<Student*>& d,const Restaurant& e,int f,int g,const QVector<Room>& h,const QString& i,const QString& j)
    : resto(e)
{   if(c<d.size()) throw UDRMSException("the capacity is not enough for all the students");
    if(b < 0) throw UDRMSException("number of rooms cannot be negative");
    if(c < 0) throw UDRMSException("capacity cannot be negative");
    name= a;
    numRooms=b;
    capacity=c;
    students=d;
    resto=e;
    roomsOccu=f;
    roomsFree=g;
    rooms=h;
    password=i;
    gender=j;
}

Dormitory::Dormitory(const Dormitory& other){
    name = other.name;
    numRooms = other.numRooms;
    capacity = other.capacity;
    roomsOccu = other.roomsOccu;
    roomsFree = other.roomsFree;
    resto = other.resto;
    password=other.password;
    gender=other.gender;
    for(Student* s : other.students){
        students.append(new Student(*s));
    }
    for(const Room& r : other.rooms){
        rooms.append(r);
    }
}

Dormitory& Dormitory::operator=(const Dormitory& other){
    if(this != &other){
        name = other.name;
        numRooms = other.numRooms;
        capacity = other.capacity;
        roomsOccu = other.roomsOccu;
        roomsFree = other.roomsFree;
        resto = other.resto;
        password=other.password;
        gender=other.gender;
        for(int i = 0; i < students.size(); i++){
            delete students[i];
        }
        students.clear();
        for(Student* s : other.students){
            students.append(new Student(*s));
        }
        rooms.clear();
        for(const Room& r : other.rooms){
            rooms.append(r);
        }
    }
    else throw UDRMSException("you are assining the same dormitory");
    return *this;
}

const QString& Dormitory:: getName() const{
    return name;
}

void Dormitory::setName(const QString& a){
    name=a;
}

int Dormitory::getNumRooms() const{
    return numRooms;
}

void Dormitory::setNumRooms(int a){
    if(a < 0) throw UDRMSException("number of rooms cannot be negative");
    if(a < rooms.size()) throw UDRMSException("cannot set rooms less than current rooms");
    numRooms=a;
}

int Dormitory::getCapacity() const{
    return capacity;
}

void Dormitory::setCapacity(int a){
    if(a<0) throw UDRMSException("the capacity cannot be negative");
    if(a < students.size()) throw UDRMSException("capacity cannot be less than current students");
    capacity=a;
}

void Dormitory::displayStudents() const{
    qDebug()<<"STUDENTS IN "<<name;
    for(Student* s:students){
        s->displayInfo();
    }
    qDebug()<<"THE TOTAL NUMBER OF STUDENTS IS: "<<students.size();
}

void Dormitory::displayRooms() const{
    qDebug()<<"ROOMS IN "<<name;
    for(const Room& s:rooms){
        s.displayInfo();
    }
    qDebug()<<"THE TOTAL NUMBER OF ROOMS IS: "<<rooms.size();
}

void Dormitory::addStudent(Student* s){
    if(s == nullptr)
        throw UDRMSException("cannot add null student");
    if(isFull())
        throw UDRMSException("dormitory is full");
    students.append(s);
    roomsOccu++;
    roomsFree--;
}

void Dormitory::removeStudent(Student* a){
    for(int i=0;i<students.size();i++){
        if(students[i]==a){
            students.removeAt(i);
            return;
        }
    }
    throw UDRMSException("student not found");
}

void Dormitory::addRoom(const Room& a){
    if(rooms.size() == numRooms) throw UDRMSException("no more rooms available");
    rooms.append(a);
}

void Dormitory::removeRoom(const Room& a){
    for(int i=0;i<rooms.size();i++){
        if(rooms[i].getNumber()==a.getNumber()){
            rooms.removeAt(i);
            qDebug()<<"Room removed successfully";
            return;
        }
    }
    throw UDRMSException("room not found");
}

bool Dormitory::isFull() const{
    return students.size()==capacity;
}

bool Dormitory::isEmpty() const{
    return students.size()==0;
}

const QString& Dormitory::getPassword() const{
    return password;
}

void Dormitory::setGender(const QString& a){
    gender=a;
}

const QString& Dormitory::getGender() const{
    return gender;
}

void Dormitory::setPassword(const QString& a){
    password=a;
}

int Dormitory::getRoomsOccu() const{
    return roomsOccu;
}

int Dormitory::getRoomsFree() const{
    return roomsFree;
}

QVector<Student*>& Dormitory::getStudents(){
    return students;
}

QVector<Room>& Dormitory::getRooms(){
    return rooms;
}

Restaurant& Dormitory::getRestaurant(){
    return resto;
}

void Dormitory::setRestaurant(const Restaurant& a){
    resto=a;
}

Dormitory::~Dormitory() noexcept{
    students.clear();
}

