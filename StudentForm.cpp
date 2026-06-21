#include "StudentForm.h"
#include "ui_StudentForm.h"
#include "StudentInfo.h"
#include "Student.h"
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include "UDRMSException.h"

StudentForm::StudentForm(Dormitory* a,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudentForm)
    ,dorm(a)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    refreshStudentsList();
}

StudentForm::~StudentForm()
{
    delete ui;
}

void StudentForm::refreshStudentsList(){
    ui->listStudents->clear();
    if(dorm->getStudents().isEmpty()){
        ui->listStudents->addItem("No Students available");
        return;
    }
    for(Student* s : std::as_const(dorm->getStudents())){
        ui->listStudents->addItem(s->getName());
    }
}

void StudentForm::on_searchBar_textChanged(const QString &text)
{
    ui->listStudents->clear();

    for(int i = 0; i < dorm->getStudents().size(); i++){
        if(dorm->getStudents()[i]->getName().contains(text, Qt::CaseInsensitive)){
            ui->listStudents->addItem(dorm->getStudents()[i]->getName());
        }
    }
}

void StudentForm::on_btnReturnBack_clicked()
{
    isReturning = true;
    this->close();
}

void StudentForm::on_btnAddStudent_clicked()
{   try{
        Student* newStudent=new Student();
        dorm->addStudent(newStudent);
        refreshStudentsList();
    }
    catch(const UDRMSException& e){
        QMessageBox::critical(this, "Operation Failed", e.what());
    }
}
void StudentForm::on_listStudents_itemDoubleClicked(QListWidgetItem *item)
{
    QString name = item->text();
    Student* selectedStudent= nullptr;
    for(int i=0;i<dorm->getStudents().size();i++){
        if(dorm->getStudents()[i]->getName()== name){
            selectedStudent=dorm->getStudents()[i];
            break;
        }
    }
    if(selectedStudent == nullptr) return;
    StudentInfo* studentInfo=new StudentInfo(selectedStudent,dorm,nullptr);
    connect(studentInfo, &StudentInfo::studentDataSaved, this, &StudentForm::refreshStudentsList);
    connect(studentInfo, &QWidget::destroyed, this, &StudentForm::show);
    studentInfo->show();
    this->hide();

}


void StudentForm::on_btnRemoveFromDormitory_clicked()
{
    int currentRow = ui->listStudents->currentRow();
    if (currentRow == -1 || dorm->getStudents().isEmpty()) {
        return;
    }

    Student* studentToRemove = dorm->getStudents()[currentRow];
    if (studentToRemove->getRoom() != nullptr) {
        Room* theirRoom = studentToRemove->getRoom();
        theirRoom->removeStudent(studentToRemove);
        if (theirRoom->getCurrentOccupancy() > 0) {
            theirRoom->setCurrentOccupancy(theirRoom->getCurrentOccupancy() - 1);
        }
    }
    dorm->removeStudent(studentToRemove);
    delete studentToRemove;

    refreshStudentsList();
}

void StudentForm::closeEvent(QCloseEvent *event)
{
    if (isReturning) {
        event->accept();
    } else {
        QApplication::quit();
    }
}
