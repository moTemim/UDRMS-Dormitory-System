#ifndef STUDENTFORM_H
#define STUDENTFORM_H
#include "Dormitory.h"
#include <QListWidgetItem>
#include <QWidget>

namespace Ui {
class StudentForm;
}

class StudentForm : public QWidget
{
    Q_OBJECT

public:
    explicit StudentForm(Dormitory*,QWidget *parent = nullptr);
    ~StudentForm();
private slots:
    void on_btnAddStudent_clicked();

    void on_btnReturnBack_clicked();

    void on_searchBar_textChanged(const QString &arg1);


    void on_listStudents_itemDoubleClicked(QListWidgetItem *item);

    void on_btnRemoveFromDormitory_clicked();
protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::StudentForm *ui;
    Dormitory* dorm;
    void refreshStudentsList();
    bool isReturning = false;
};

#endif // STUDENTFORM_H
