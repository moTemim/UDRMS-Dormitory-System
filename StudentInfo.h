#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include "Student.h"
#include "Dormitory.h"
#include <QWidget>

namespace Ui {
class StudentInfo;
}

class StudentInfo : public QWidget
{
    Q_OBJECT

public:
    explicit StudentInfo(Student*, Dormitory*,QWidget *parent = nullptr);
    ~StudentInfo();
    void refreshForm();
signals:
    void studentDataSaved();

private slots:
    void on_btnReturnBack_clicked();

    void on_btnSave_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::StudentInfo *ui;
    Student* student;
    Dormitory* currentDorm;
    bool isReturning = false;
};

#endif // STUDENTINFO_H
