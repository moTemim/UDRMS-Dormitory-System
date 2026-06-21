#include<QString>
#include<QVector>
#include<QDebug>
#include "Room.h"
#include "Student.h"
#include "UDRMSException.h"


Room::Room(){
    number=0;
    floor=0;
    corridor=' ';
    capacity=0;
    students={};
    currentOccupancy=0;
}

Room::Room(const Room& other){
    number = other.number;
    floor = other.floor;
    corridor = other.corridor;
    capacity = other.capacity;
    currentOccupancy = other.currentOccupancy;
    for(Student* s : other.students){
        students.append(new Student(*s));
    }
}

Room& Room::operator=(const Room& other){
    if(this != &other){
        number = other.number;
        floor = other.floor;
        corridor = other.corridor;
        capacity = other.capacity;
        currentOccupancy = other.currentOccupancy;
        for(int i = 0; i < students.size(); i++){
            delete students[i];
        }
        students.clear();
        for(Student* s : other.students){
            students.append(new Student(*s));
        }
    }
    else throw UDRMSException("you are assigning the same Room");
    return *this;
}

Room::Room(int a,int b,char c,int d,const QVector<Student*> e,int f){
    if(a<0) throw UDRMSException("Invalide room numebr");
    if(b<0) throw UDRMSException("Invalide floor");
    if(d<0) throw UDRMSException("Invalide capacity");
    if(f<0) throw UDRMSException("Invalide current Occupancy");
    number=a;
    floor=b;
    corridor=c;
    capacity=d;
    students=e;
    currentOccupancy=f;
}

void Room::setNumber(int a){
    if(a<0) throw UDRMSException("Invalide room numebr");
    number=a;
}

void Room::setFloor(int a){
    if(a<0) throw UDRMSException("Invalide floor");
    floor=a;
}

void Room::setCorridor(char a){
    corridor=a;
}

int Room::getNumber() const{
    return number;
}

int Room::getFloor() const{
    return floor;
}

char Room::getCorridor() const{
    return corridor;
}

bool Room::isFull(){
    return currentOccupancy==capacity;
}

void Room::setCapacity(int a){
    if(a<0) throw UDRMSException("Invalide capacity");
    if(a<students.size()) throw UDRMSException("Invalide capacity");
    capacity=a;
}

int Room::getCapacity() const{
    return capacity;
}

const QVector<Student*>& Room::getStudents() const{
    return students;
}

void Room::setStudents(QVector<Student*> a){
    if(capacity<a.size()) throw UDRMSException("out of bands list of students");
    students=a;
}

void Room::setCurrentOccupancy(int a){
    currentOccupancy=a;
}

int Room::getCurrentOccupancy() const{
    return currentOccupancy;
}

void Room::addStudent(Student* a){
    if(a==nullptr) throw UDRMSException("the student is not existing");
    students.append(a);
}

void Room::removeStudent(Student* a){
    for(int i=0;i<students.size();i++){
        if(students[i]->getId()==a->getId()){
            students.removeAt(i);
            return;
        }
    }
    qDebug()<<"Student not found";
}

void Room::displayInfo() const{
    qDebug()<<"the room number: "<<number;
    qDebug()<<"the floor: "<<floor;
    qDebug()<<"the corridor: "<<corridor;
    qDebug()<<"the capacity: "<<capacity;
    qDebug()<<"the current occupancy: "<<currentOccupancy;
    qDebug()<<"the students: ";
    for(const Student* s:students){
        qDebug()<<s->getName()<<" - "<<s->getId();
    }
}

Room::~Room() noexcept{
    students.clear();
}

