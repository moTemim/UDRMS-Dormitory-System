#include "mainwindow.h"
#include <QApplication>
#include <QInputDialog>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // test text input
    QString name = QInputDialog::getText(
        nullptr,
        "Test",
        "Enter your name:"
        );
    qDebug() << "You entered: " << name;

    // test integer input
    int age = QInputDialog::getInt(
        nullptr,
        "Test",
        "Enter your age:"
        );
    qDebug() << "You entered: " << age;

    // test double input
    double price = QInputDialog::getDouble(
        nullptr,
        "Test",
        "Enter a price:"
        );
    qDebug() << "You entered: " << price;

    MainWindow w;
    w.show();
    return QApplication::exec();
}