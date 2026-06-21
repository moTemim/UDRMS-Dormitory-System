#include "StudentInfo.h"
#include "Room.h"
#include "ui_StudentInfo.h"
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include "UDRMSException.h"

StudentInfo::StudentInfo(Student* a, Dormitory* d, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentInfo),
    student(a),
    currentDorm(d)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    refreshForm();
}

StudentInfo::~StudentInfo()
{
    delete ui;
}

void StudentInfo::refreshForm(){
    ui->FullName->setText(student->getName());
    ui->Id->setText(student->getId());
    ui->Age->setValue(student->getAge());
    ui->School->setText(student->getShool());
    ui->YearStudy->setValue(student->getYearOfStudy());
    ui->AcademicYear->setText(student->getAcademicYear());
    ui->DateOfBirth->setText(student->getDateOfBirth());
    ui->showStudentBalance->setText(QString::number(student->getRestoCard().getBalance()));
    if (student->getRoom() != nullptr) {
        ui->TheRoom->setText(QString::number(student->getRoom()->getNumber()));
    } else {
        ui->TheRoom->setText("No Room Assigned");
    }
}

void StudentInfo::on_btnReturnBack_clicked()
{
    isReturning = true;
    this->close();
}


void StudentInfo::on_btnSave_clicked()
{   try{
        student->setName(ui->FullName->text());
        student->setId(ui->Id->text());
        student->setAge(ui->Age->value());
        student->setSchool(ui->School->text());
        student->setYearOfStudy(ui->YearStudy->value());
        student->setAcademicYear(ui->AcademicYear->text());
        student->setDateOfBirth(ui->DateOfBirth->text());
    }
    catch(const UDRMSException& e){
        QMessageBox::critical(this, "Operation Failed", e.what());
    }
    refreshForm();

    emit studentDataSaved();
}

void StudentInfo::closeEvent(QCloseEvent *event)
{

    if (isReturning) {
        event->accept();
    } else {
        QApplication::quit();
    }
}

