#include "DormitoryMng.h"
#include "DormCheckPasswd.h"
#include "DormitoryForm.h"
#include "ui_DormitoryMng.h"
#include <utility>
#include <QCloseEvent>
#include <QApplication>


DormitoryMng::DormitoryMng(QVector<Dormitory*>& dorms,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DormitoryMng)
    , dormitories(dorms)
{
    ui->setupUi(this);
    refreshDormList();
    this->setAttribute(Qt::WA_DeleteOnClose);
}

DormitoryMng::~DormitoryMng()
{
    delete ui;
}


void DormitoryMng::refreshDormList(){
    ui->listDormitories->clear();
    if(dormitories.isEmpty()){
        ui->listDormitories->addItem("No dormitories available");
        return;
    }
    for(const Dormitory* d : std::as_const(dormitories)){
        ui->listDormitories->addItem(d->getName());
    }
}



void DormitoryMng::on_btnAddDorm_clicked()
{
    Dormitory* newDorm=new Dormitory();
    dormitories.append(newDorm);
    refreshDormList();

}

void DormitoryMng::on_searchBar_textChanged(const QString &text)
{
    ui->listDormitories->clear();

    for(int i = 0; i < dormitories.size(); i++){
        if(dormitories[i]->getName().contains(text, Qt::CaseInsensitive)){
            ui->listDormitories->addItem(dormitories[i]->getName());
        }
    }
}


void DormitoryMng::on_listDormitories_itemDoubleClicked(QListWidgetItem *item)
{
    QString name = item->text();

    Dormitory* selectedDorm = nullptr;
    for(int i = 0; i < dormitories.size(); i++){
        if(dormitories[i]->getName() == name){
            selectedDorm = dormitories[i];
            break;
        }
    }

    if(selectedDorm == nullptr) return;

    DormCheckPasswd* dormPasswd = new DormCheckPasswd(selectedDorm, nullptr);
    dormPasswd->show();
    this->hide();


    QMetaObject::Connection* conn = new QMetaObject::Connection();
    *conn = connect(dormPasswd, &QWidget::destroyed,
                    this, &DormitoryMng::show);

    connect(dormPasswd, &DormCheckPasswd::accessGranted, this, [this, selectedDorm, conn]
            {

                disconnect(*conn);
                delete conn;

                DormitoryForm* dormFrm = new DormitoryForm(selectedDorm, nullptr);
                dormFrm->show();
                connect(dormFrm, &QWidget::destroyed, this, &DormitoryMng::show);
                connect(dormFrm, &QWidget::destroyed, this, &DormitoryMng::refreshDormList);
            });



}


void DormitoryMng::on_btnRemoveDormitory_clicked()
{
    int currentRow = ui->listDormitories->currentRow();
    if (currentRow == -1) {
        return;
    }
    Dormitory* dormToRemove = dormitories[currentRow];

    for (Student* s : std::as_const(dormToRemove->getStudents())) {
        s->setRoom(nullptr);
    }
    dormitories.remove(currentRow);
    delete dormToRemove;
    refreshDormList();
}

