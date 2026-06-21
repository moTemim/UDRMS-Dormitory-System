#ifndef ROOM_H
#define ROOM_H
#include<QString>
#include<QVector>


class Student;
class Room{
private:
    int number;
    int floor;
    char corridor;
    int capacity;
    QVector<Student*> students;
    int currentOccupancy;
public:
    Room();
    Room(int,int,char,int,const QVector<Student*>,int);
    Room(const Room& other);
    Room& operator=(const Room& other);
    void setNumber(int);
    void setFloor(int);
    void setCorridor(char);
    int getNumber() const;
    int getFloor() const;
    char getCorridor() const;
    bool isFull();
    void setCapacity(int);
    int getCapacity() const;
    const QVector<Student*>& getStudents() const;
    void setStudents(QVector<Student*>);
    void setCurrentOccupancy(int);
    int getCurrentOccupancy() const;
    void addStudent(Student*);
    void removeStudent(Student*);
    void displayInfo() const;
    ~Room() noexcept;

};

#endif // ROOM_H
