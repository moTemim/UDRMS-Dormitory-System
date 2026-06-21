#ifndef DORMCHECKPASSWD_H
#define DORMCHECKPASSWD_H
#include "Dormitory.h"

#include <QWidget>

namespace Ui {
class DormCheckPasswd;
}

class DormCheckPasswd : public QWidget
{
    Q_OBJECT

public:
    explicit DormCheckPasswd(Dormitory*,QWidget *parent = nullptr);
    ~DormCheckPasswd();

private slots:
    void on_ViewPasswd_stateChanged(int);

    void on_btnEnter_clicked();

    void on_btnReturn_clicked();

private:
    Ui::DormCheckPasswd *ui;
    Dormitory* dorm;
signals:
    void accessGranted();

};

#endif // DORMCHECKPASSWD_H
