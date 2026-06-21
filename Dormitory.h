#ifndef DORMITORY_H
#define DORMITORY_H
#include<QString>
#include<QVector>
#include"Student.h"
#include"Restaurant.h"
#include"Room.h"


class Dormitory{
private:
    QString name;
    int numRooms;
    int capacity;
    QVector<Student*> students;
    QVector<Room> rooms;
    Restaurant resto;
    int roomsOccu;
    int roomsFree;
    QString password;
    QString gender;

public:
    Dormitory();
    Dormitory(const QString&,int,int,const QVector<Student*>&,const Restaurant&,int,int,const QVector<Room>&,const QString&,const QString&);
    Dormitory(const Dormitory&);
    Dormitory& operator=(const Dormitory&);
    const QString& getName() const;
    void setName(const QString&);
    int  getNumRooms() const;
    void setNumRooms(int);
    int getCapacity() const;
    void setCapacity(int);
    void displayStudents() const;
    void displayRooms() const;
    void addStudent(Student*);
    void removeStudent(Student*);
    void addRoom(const Room&);
    void removeRoom(const Room&);
    bool isFull() const;
    bool isEmpty() const;
    const QString& getPassword() const;
    void setPassword(const QString&);
    const QString& getGender() const;
    void setGender(const QString&);
    ~Dormitory() noexcept;
    int getRoomsFree() const;
    int getRoomsOccu() const;
    QVector<Student*>& getStudents();
    QVector<Room>& getRooms();
    Restaurant& getRestaurant();
    void setRestaurant(const Restaurant& newRestaurant);
};

#endif // DORMITORY_H
