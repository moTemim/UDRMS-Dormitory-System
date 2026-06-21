#include "DormCheckPasswd.h"
#include "ui_DormCheckPasswd.h"
#include <QMessageBox>

DormCheckPasswd::DormCheckPasswd(Dormitory* a,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DormCheckPasswd)
    , dorm(a)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
}

DormCheckPasswd::~DormCheckPasswd()
{
    delete ui;
}

void DormCheckPasswd::on_ViewPasswd_stateChanged(int state)
{
    if(state == Qt::Checked){
        ui->PasswordTxt->setEchoMode(QLineEdit::Normal);
    } else {
        ui->PasswordTxt->setEchoMode(QLineEdit::Password);
    }
}


void DormCheckPasswd::on_btnEnter_clicked()
{
    if(ui->PasswordTxt->text()==dorm->getPassword()){
        emit accessGranted();
        this->close();

    }
    else {
        QMessageBox::warning(this, "Error", "Wrong password!");
    }

}


void DormCheckPasswd::on_btnReturn_clicked()
{
    this->close();
}


