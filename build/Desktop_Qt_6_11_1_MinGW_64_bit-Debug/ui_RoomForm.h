/********************************************************************************
** Form generated from reading UI file 'RoomForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMFORM_H
#define UI_ROOMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomForm
{
public:
    QLabel *Titel;
    QListWidget *listRooms;
    QLineEdit *searchBar;
    QPushButton *btnReturnBack;
    QPushButton *btnAddRoom;
    QPushButton *btnRemoveFromDormitory;

    void setupUi(QWidget *RoomForm)
    {
        if (RoomForm->objectName().isEmpty())
            RoomForm->setObjectName("RoomForm");
        RoomForm->resize(800, 600);
        RoomForm->setStyleSheet(QString::fromUtf8("QWidget#RoomForm{\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        Titel = new QLabel(RoomForm);
        Titel->setObjectName("Titel");
        Titel->setGeometry(QRect(80, 0, 771, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(true);
        Titel->setFont(font);
        Titel->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        listRooms = new QListWidget(RoomForm);
        listRooms->setObjectName("listRooms");
        listRooms->setGeometry(QRect(0, 190, 801, 301));
        listRooms->setFont(font);
        listRooms->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    background-color: rgba(255,255,255,180);\n"
"    font-size: 14px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 10px;\n"
"    border-bottom: 1px solid #a0d0a0;\n"
"    color: #1a3d1a;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #2d6a2d;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #c8e6c8;\n"
"    border-radius: 5px;\n"
"}"));
        listRooms->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        listRooms->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        searchBar = new QLineEdit(RoomForm);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(0, 160, 801, 31));
        searchBar->setFont(font);
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #1a3d1a;\n"
"}"));
        btnReturnBack = new QPushButton(RoomForm);
        btnReturnBack->setObjectName("btnReturnBack");
        btnReturnBack->setGeometry(QRect(80, 500, 271, 81));
        btnReturnBack->setFont(font);
        btnReturnBack->setStyleSheet(QString::fromUtf8("background-color: white; color:#004d00; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        btnAddRoom = new QPushButton(RoomForm);
        btnAddRoom->setObjectName("btnAddRoom");
        btnAddRoom->setGeometry(QRect(450, 500, 271, 81));
        btnAddRoom->setFont(font);
        btnAddRoom->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        btnRemoveFromDormitory = new QPushButton(RoomForm);
        btnRemoveFromDormitory->setObjectName("btnRemoveFromDormitory");
        btnRemoveFromDormitory->setGeometry(QRect(710, 120, 81, 31));
        btnRemoveFromDormitory->setFont(font);
        btnRemoveFromDormitory->setStyleSheet(QString::fromUtf8("background-color: white; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 10px; font-size:20px;"));

        retranslateUi(RoomForm);

        QMetaObject::connectSlotsByName(RoomForm);
    } // setupUi

    void retranslateUi(QWidget *RoomForm)
    {
        RoomForm->setWindowTitle(QCoreApplication::translate("RoomForm", "Form", nullptr));
        Titel->setText(QCoreApplication::translate("RoomForm", "Rooms Management", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("RoomForm", "Search rooms...", nullptr));
        btnReturnBack->setText(QCoreApplication::translate("RoomForm", "return Back", nullptr));
        btnAddRoom->setText(QCoreApplication::translate("RoomForm", "add Room", nullptr));
        btnRemoveFromDormitory->setText(QCoreApplication::translate("RoomForm", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomForm: public Ui_RoomForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMFORM_H
