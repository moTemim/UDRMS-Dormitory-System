/********************************************************************************
** Form generated from reading UI file 'RoomInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMINFO_H
#define UI_ROOMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomInfo
{
public:
    QLabel *Titel;
    QLabel *DormName;
    QLabel *DormName_2;
    QSpinBox *RoomFloor;
    QLineEdit *RoomNumber;
    QLabel *DormName_3;
    QLineEdit *RoomCorridor;
    QLabel *DormName_4;
    QSpinBox *RoomCapacity;
    QLabel *DormName_5;
    QSpinBox *RoomCurrentOccupancy;
    QListWidget *listStudents;
    QLabel *DormName_6;
    QPushButton *btnReturnBack;
    QPushButton *btnSaveRoomInfo;
    QComboBox *avalaibleStudents;
    QPushButton *btnAddStudentToRoom;
    QPushButton *btnRemoveFromRoom;

    void setupUi(QWidget *RoomInfo)
    {
        if (RoomInfo->objectName().isEmpty())
            RoomInfo->setObjectName("RoomInfo");
        RoomInfo->resize(800, 600);
        RoomInfo->setStyleSheet(QString::fromUtf8("QWidget#RoomInfo{\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        Titel = new QLabel(RoomInfo);
        Titel->setObjectName("Titel");
        Titel->setGeometry(QRect(10, 20, 788, 82));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(true);
        Titel->setFont(font);
        Titel->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        DormName = new QLabel(RoomInfo);
        DormName->setObjectName("DormName");
        DormName->setGeometry(QRect(170, 140, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setBold(true);
        font1.setItalic(true);
        DormName->setFont(font1);
        DormName->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_2 = new QLabel(RoomInfo);
        DormName_2->setObjectName("DormName_2");
        DormName_2->setGeometry(QRect(170, 190, 211, 41));
        DormName_2->setFont(font1);
        DormName_2->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        RoomFloor = new QSpinBox(RoomInfo);
        RoomFloor->setObjectName("RoomFloor");
        RoomFloor->setGeometry(QRect(310, 190, 201, 31));
        RoomFloor->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: rgba(255,255,255,210);\n"
"    color: #1b5e20;\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 10px;\n"
"    padding: 4px 24px 4px 8px;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #2d6a2d;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QSpinBox:hover {\n"
"    border: 2px solid #388e3c;\n"
"    background-color: rgba(255,255,255,230);\n"
"}\n"
"\n"
"QSpinBox:focus {\n"
"    border: 2px solid #1b5e20;\n"
"}\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 22px;\n"
"\n"
"    background-color: #2d6a2d;\n"
"    border-top-right-radius: 8px;\n"
"    border-left: 1px solid #1b5e20;\n"
"    border-bottom: 1px solid #1b5e20;\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 22px;\n"
"\n"
"    background-color: #2d6a2d;\n"
"    border-bottom-right-radius: 8px;\n"
"    border-left: 1p"
                        "x solid #1b5e20;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover {\n"
"    background-color: #388e3c;\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed,\n"
"QSpinBox::down-button:pressed {\n"
"    background-color: #1b5e20;\n"
"}"));
        RoomFloor->setMaximum(100000);
        RoomNumber = new QLineEdit(RoomInfo);
        RoomNumber->setObjectName("RoomNumber");
        RoomNumber->setGeometry(QRect(330, 140, 171, 31));
        RoomNumber->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        DormName_3 = new QLabel(RoomInfo);
        DormName_3->setObjectName("DormName_3");
        DormName_3->setGeometry(QRect(170, 240, 211, 41));
        DormName_3->setFont(font1);
        DormName_3->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        RoomCorridor = new QLineEdit(RoomInfo);
        RoomCorridor->setObjectName("RoomCorridor");
        RoomCorridor->setGeometry(QRect(350, 240, 41, 31));
        RoomCorridor->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        DormName_4 = new QLabel(RoomInfo);
        DormName_4->setObjectName("DormName_4");
        DormName_4->setGeometry(QRect(170, 290, 201, 41));
        DormName_4->setFont(font1);
        DormName_4->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        RoomCapacity = new QSpinBox(RoomInfo);
        RoomCapacity->setObjectName("RoomCapacity");
        RoomCapacity->setGeometry(QRect(340, 300, 81, 31));
        RoomCapacity->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: rgba(255,255,255,210);\n"
"    color: #1b5e20;\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 10px;\n"
"    padding: 4px 24px 4px 8px;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #2d6a2d;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QSpinBox:hover {\n"
"    border: 2px solid #388e3c;\n"
"    background-color: rgba(255,255,255,230);\n"
"}\n"
"\n"
"QSpinBox:focus {\n"
"    border: 2px solid #1b5e20;\n"
"}\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 22px;\n"
"\n"
"    background-color: #2d6a2d;\n"
"    border-top-right-radius: 8px;\n"
"    border-left: 1px solid #1b5e20;\n"
"    border-bottom: 1px solid #1b5e20;\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 22px;\n"
"\n"
"    background-color: #2d6a2d;\n"
"    border-bottom-right-radius: 8px;\n"
"    border-left: 1p"
                        "x solid #1b5e20;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover {\n"
"    background-color: #388e3c;\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed,\n"
"QSpinBox::down-button:pressed {\n"
"    background-color: #1b5e20;\n"
"}"));
        RoomCapacity->setMaximum(100000);
        DormName_5 = new QLabel(RoomInfo);
        DormName_5->setObjectName("DormName_5");
        DormName_5->setGeometry(QRect(160, 330, 281, 41));
        DormName_5->setFont(font1);
        DormName_5->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        RoomCurrentOccupancy = new QSpinBox(RoomInfo);
        RoomCurrentOccupancy->setObjectName("RoomCurrentOccupancy");
        RoomCurrentOccupancy->setGeometry(QRect(440, 330, 81, 31));
        RoomCurrentOccupancy->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: rgba(255,255,255,210);\n"
"    color: #1b5e20;\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 10px;\n"
"    padding: 4px 24px 4px 8px;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #2d6a2d;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QSpinBox:hover {\n"
"    border: 2px solid #388e3c;\n"
"    background-color: rgba(255,255,255,230);\n"
"}\n"
"\n"
"QSpinBox:focus {\n"
"    border: 2px solid #1b5e20;\n"
"}\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 22px;\n"
"\n"
"    background-color: #2d6a2d;\n"
"    border-top-right-radius: 8px;\n"
"    border-left: 1px solid #1b5e20;\n"
"    border-bottom: 1px solid #1b5e20;\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 22px;\n"
"\n"
"    background-color: #2d6a2d;\n"
"    border-bottom-right-radius: 8px;\n"
"    border-left: 1p"
                        "x solid #1b5e20;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover {\n"
"    background-color: #388e3c;\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed,\n"
"QSpinBox::down-button:pressed {\n"
"    background-color: #1b5e20;\n"
"}"));
        RoomCurrentOccupancy->setMaximum(100000);
        listStudents = new QListWidget(RoomInfo);
        listStudents->setObjectName("listStudents");
        listStudents->setGeometry(QRect(0, 410, 801, 101));
        listStudents->setFont(font);
        listStudents->setStyleSheet(QString::fromUtf8("QListWidget {\n"
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
        listStudents->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        listStudents->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        DormName_6 = new QLabel(RoomInfo);
        DormName_6->setObjectName("DormName_6");
        DormName_6->setGeometry(QRect(0, 370, 281, 41));
        DormName_6->setFont(font1);
        DormName_6->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        btnReturnBack = new QPushButton(RoomInfo);
        btnReturnBack->setObjectName("btnReturnBack");
        btnReturnBack->setGeometry(QRect(130, 530, 201, 61));
        btnReturnBack->setFont(font);
        btnReturnBack->setStyleSheet(QString::fromUtf8("background-color: white; color:#004d00; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        btnSaveRoomInfo = new QPushButton(RoomInfo);
        btnSaveRoomInfo->setObjectName("btnSaveRoomInfo");
        btnSaveRoomInfo->setGeometry(QRect(430, 530, 201, 61));
        btnSaveRoomInfo->setFont(font);
        btnSaveRoomInfo->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        avalaibleStudents = new QComboBox(RoomInfo);
        avalaibleStudents->setObjectName("avalaibleStudents");
        avalaibleStudents->setGeometry(QRect(400, 373, 251, 31));
        avalaibleStudents->setFont(font1);
        avalaibleStudents->setStyleSheet(QString::fromUtf8("/* Style the main closed dropdown box */\n"
"QComboBox {\n"
"    border: 1px solid #2d6a2d;\n"
"    border-radius: 4px;\n"
"    padding: 4px 10px;\n"
"    min-width: 6em;\n"
"    color: #1a3d1a;\n"
"    background-color: rgba(255, 255, 255, 210);\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"/* Style the arrow button section box on the right side */\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px; /* Widened slightly for click breathing room */\n"
"    border-left-width: 1px;\n"
"    border-left-color: #a0d0a0;\n"
"    border-left-style: solid; \n"
"    border-top-right-radius: 4px; \n"
"    border-bottom-right-radius: 4px;\n"
"}\n"
"\n"
"/* FIX: This explicitly draws a sharp down-arrow triangle inside the dropdown area */\n"
"QComboBox::down-arrow {\n"
"    image: none; /* Clear native windows images */\n"
"    border-left: 5px solid transparent;\n"
"    border-right: 5px solid transparent;\n"
"    border-top: 6px solid #2d6a2d; /* Draws a s"
                        "harp green triangle down arrow */\n"
"    width: 0;\n"
"    height: 0;\n"
"    position: relative;\n"
"    right: 2px; /* Centers it nicely inside the 25px area */\n"
"}\n"
"\n"
"/* Style the popup list box that drops down when clicked */\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #2d6a2d;\n"
"    background-color: #ffffff;\n"
"    selection-background-color: #2d6a2d;\n"
"    selection-color: white;\n"
"    color: #1a3d1a;\n"
"}"));
        btnAddStudentToRoom = new QPushButton(RoomInfo);
        btnAddStudentToRoom->setObjectName("btnAddStudentToRoom");
        btnAddStudentToRoom->setGeometry(QRect(660, 370, 71, 31));
        btnAddStudentToRoom->setFont(font);
        btnAddStudentToRoom->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 10px; font-size:20px;"));
        btnRemoveFromRoom = new QPushButton(RoomInfo);
        btnRemoveFromRoom->setObjectName("btnRemoveFromRoom");
        btnRemoveFromRoom->setGeometry(QRect(700, 510, 81, 31));
        btnRemoveFromRoom->setFont(font);
        btnRemoveFromRoom->setStyleSheet(QString::fromUtf8("background-color: white; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 10px; font-size:20px;"));

        retranslateUi(RoomInfo);

        QMetaObject::connectSlotsByName(RoomInfo);
    } // setupUi

    void retranslateUi(QWidget *RoomInfo)
    {
        RoomInfo->setWindowTitle(QCoreApplication::translate("RoomInfo", "Form", nullptr));
        Titel->setText(QCoreApplication::translate("RoomInfo", "<html><head/><body><p align=\"center\">Room Informations</p></body></html>", nullptr));
        DormName->setText(QCoreApplication::translate("RoomInfo", "The Number: ", nullptr));
        DormName_2->setText(QCoreApplication::translate("RoomInfo", "The Floor: ", nullptr));
        DormName_3->setText(QCoreApplication::translate("RoomInfo", "The Corridor:", nullptr));
        DormName_4->setText(QCoreApplication::translate("RoomInfo", "The Capacity: ", nullptr));
        DormName_5->setText(QCoreApplication::translate("RoomInfo", "The Current Occupancy:", nullptr));
        DormName_6->setText(QCoreApplication::translate("RoomInfo", "The List Of Students :", nullptr));
        btnReturnBack->setText(QCoreApplication::translate("RoomInfo", "return Back", nullptr));
        btnSaveRoomInfo->setText(QCoreApplication::translate("RoomInfo", "Save", nullptr));
        avalaibleStudents->setPlaceholderText(QCoreApplication::translate("RoomInfo", "available students", nullptr));
        btnAddStudentToRoom->setText(QCoreApplication::translate("RoomInfo", "add", nullptr));
        btnRemoveFromRoom->setText(QCoreApplication::translate("RoomInfo", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomInfo: public Ui_RoomInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMINFO_H
