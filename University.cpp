#include "University.h"
#include<QString>
#include<QDebug>
#include<QVector>
#include "UDRMSException.h"
University::University(){
    name="";
    dormitories={};\
        password={};
}

University::University(const QString& a,const QVector<Dormitory*>& b,const QString& c){
    name=a;
    dormitories=b;
    password=c;
}

University::University(const University& other){
    name = other.name;
    for(Dormitory* d : other.dormitories){
        dormitories.append(new Dormitory(*d));
    }
    password=other.password;
}

University& University::operator=(const University& other){
    if(this != &other){
        name = other.name;
        for(int i=0; i<dormitories.size(); i++){
            delete dormitories[i];
        }
        dormitories.clear();
        for(Dormitory* d : other.dormitories){
            dormitories.append(new Dormitory(*d));
        }
        password=other.password;
    }
    else throw UDRMSException("you are assinging the same university");
    return *this;
}

void University::addDorm(Dormitory* a){
    if(a==nullptr) throw UDRMSException("The dormitory is not existing");
    dormitories.append(a);
}

void University::removeDorm(Dormitory* a){
    for(int i=0;i<dormitories.size();i++){
        if(dormitories[i]->getName()==a->getName()){
            dormitories.removeAt(i);
            qDebug()<<"removed successfully";
            return;
        }
    }
    qDebug()<<"can't remove";
}

void University::displayDorms() const{
    qDebug()<<"===== UNIVERSITY DORMITORIES =====";
    for(Dormitory* s:dormitories){
        qDebug()<<"=================";
        qDebug()<<"the name: "<<s->getName();
        qDebug()<<"the capacity: "<<s->getCapacity();
        qDebug()<<"the total number of rooms: "<<s->getNumRooms();
    }
}

const QString& University::getPassword() const{
    return password;
}

void University::setPassword(const QString& a){
    password=a;
}

University::~University() noexcept{
    dormitories.clear();
}