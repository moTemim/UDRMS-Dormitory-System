#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Dormitory.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_btnStartManaging_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Dormitory*> dormitories;
protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H
