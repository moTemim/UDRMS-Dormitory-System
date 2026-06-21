#ifndef DORMITORYMNG_H
#define DORMITORYMNG_H
#include "Dormitory.h"
#include <QListWidgetItem>
#include <QWidget>

namespace Ui {
class DormitoryMng;
}

class DormitoryMng : public QWidget
{
    Q_OBJECT

public:
    explicit DormitoryMng(QVector<Dormitory*>&,QWidget *parent = nullptr);
    ~DormitoryMng();

private slots:
    void on_btnAddDorm_clicked();

    void on_searchBar_textChanged(const QString &arg1);

    void on_listDormitories_itemDoubleClicked(QListWidgetItem *item);

    void on_btnRemoveDormitory_clicked();

private:
    Ui::DormitoryMng *ui;
    QVector<Dormitory*>& dormitories;
    void refreshDormList();

};

#endif // DORMITORYMNG_H
