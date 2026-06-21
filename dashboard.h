#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>
#include "Dormitory.h"

namespace Ui {
class Dashboard;
}

class Dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit Dashboard(QVector<Dormitory*>&,QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_btnThroughDormitory_clicked();


private:
    Ui::Dashboard *ui;
    QVector<Dormitory*>& dormitories;
protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // DASHBOARD_H
