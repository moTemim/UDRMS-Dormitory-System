#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include<QString>
#include<QVector>
#include"Dormitory.h"
class University{
private:
    QString name;
    QString password;
    QVector<Dormitory*> dormitories;
public:
    University();
    University(const QString&,const QVector<Dormitory*>&,const QString&);
    University(const University&);
    University& operator=(const University&);
    void addDorm(Dormitory*);
    void removeDorm(Dormitory*);
    void displayDorms() const;
    const QString& getPassword() const;
    void setPassword(const QString&);
    ~University() noexcept;
};

#endif // UNIVERSITY_H
