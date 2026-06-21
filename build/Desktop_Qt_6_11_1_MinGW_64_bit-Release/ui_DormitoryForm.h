/********************************************************************************
** Form generated from reading UI file 'DormitoryForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DORMITORYFORM_H
#define UI_DORMITORYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DormitoryForm
{
public:
    QLabel *DormTitel;
    QLabel *DormName;
    QLabel *numRooms;
    QLabel *DormCapacity;
    QLineEdit *editDormCapacity;
    QLabel *roomsOccu;
    QLabel *roomsFree;
    QLabel *dormPassword;
    QLineEdit *editDormName;
    QLineEdit *EditDormPassword;
    QLabel *Gender;
    QLineEdit *editGender;
    QSpinBox *editNumRooms;
    QSpinBox *editRoomsOccu;
    QSpinBox *editRoomsFree;
    QPushButton *ManageTheStudents;
    QPushButton *ManageTheRooms;
    QPushButton *ManageTheRestaurant;
    QPushButton *btnReturn;
    QPushButton *btnEnter;

    void setupUi(QWidget *DormitoryForm)
    {
        if (DormitoryForm->objectName().isEmpty())
            DormitoryForm->setObjectName("DormitoryForm");
        DormitoryForm->resize(800, 600);
        DormitoryForm->setStyleSheet(QString::fromUtf8("QWidget#DormitoryForm{\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        DormTitel = new QLabel(DormitoryForm);
        DormTitel->setObjectName("DormTitel");
        DormTitel->setGeometry(QRect(50, 10, 701, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setBold(true);
        font.setItalic(true);
        DormTitel->setFont(font);
        DormTitel->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        DormTitel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DormName = new QLabel(DormitoryForm);
        DormName->setObjectName("DormName");
        DormName->setGeometry(QRect(170, 140, 211, 41));
        DormName->setFont(font);
        DormName->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        numRooms = new QLabel(DormitoryForm);
        numRooms->setObjectName("numRooms");
        numRooms->setGeometry(QRect(170, 190, 271, 31));
        numRooms->setFont(font);
        numRooms->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;"));
        DormCapacity = new QLabel(DormitoryForm);
        DormCapacity->setObjectName("DormCapacity");
        DormCapacity->setGeometry(QRect(170, 220, 271, 41));
        DormCapacity->setFont(font);
        DormCapacity->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;"));
        editDormCapacity = new QLineEdit(DormitoryForm);
        editDormCapacity->setObjectName("editDormCapacity");
        editDormCapacity->setGeometry(QRect(330, 230, 171, 31));
        editDormCapacity->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        roomsOccu = new QLabel(DormitoryForm);
        roomsOccu->setObjectName("roomsOccu");
        roomsOccu->setGeometry(QRect(170, 260, 371, 41));
        roomsOccu->setFont(font);
        roomsOccu->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;"));
        roomsFree = new QLabel(DormitoryForm);
        roomsFree->setObjectName("roomsFree");
        roomsFree->setGeometry(QRect(170, 300, 371, 41));
        roomsFree->setFont(font);
        roomsFree->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;"));
        dormPassword = new QLabel(DormitoryForm);
        dormPassword->setObjectName("dormPassword");
        dormPassword->setGeometry(QRect(170, 340, 371, 41));
        dormPassword->setFont(font);
        dormPassword->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;"));
        editDormName = new QLineEdit(DormitoryForm);
        editDormName->setObjectName("editDormName");
        editDormName->setGeometry(QRect(310, 150, 171, 31));
        editDormName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        EditDormPassword = new QLineEdit(DormitoryForm);
        EditDormPassword->setObjectName("EditDormPassword");
        EditDormPassword->setGeometry(QRect(450, 350, 171, 31));
        EditDormPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        Gender = new QLabel(DormitoryForm);
        Gender->setObjectName("Gender");
        Gender->setGeometry(QRect(170, 380, 371, 41));
        Gender->setFont(font);
        Gender->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;"));
        editGender = new QLineEdit(DormitoryForm);
        editGender->setObjectName("editGender");
        editGender->setGeometry(QRect(460, 390, 171, 31));
        editGender->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editNumRooms = new QSpinBox(DormitoryForm);
        editNumRooms->setObjectName("editNumRooms");
        editNumRooms->setGeometry(QRect(430, 190, 201, 31));
        editNumRooms->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        editNumRooms->setMaximum(100000);
        editRoomsOccu = new QSpinBox(DormitoryForm);
        editRoomsOccu->setObjectName("editRoomsOccu");
        editRoomsOccu->setGeometry(QRect(540, 270, 201, 31));
        editRoomsOccu->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        editRoomsOccu->setMaximum(100000);
        editRoomsFree = new QSpinBox(DormitoryForm);
        editRoomsFree->setObjectName("editRoomsFree");
        editRoomsFree->setGeometry(QRect(490, 310, 201, 31));
        editRoomsFree->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        editRoomsFree->setMaximum(100000);
        ManageTheStudents = new QPushButton(DormitoryForm);
        ManageTheStudents->setObjectName("ManageTheStudents");
        ManageTheStudents->setGeometry(QRect(20, 440, 201, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setWeight(QFont::ExtraBold);
        font1.setItalic(true);
        ManageTheStudents->setFont(font1);
        ManageTheStudents->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:20px;"));
        ManageTheRooms = new QPushButton(DormitoryForm);
        ManageTheRooms->setObjectName("ManageTheRooms");
        ManageTheRooms->setGeometry(QRect(300, 440, 201, 61));
        ManageTheRooms->setFont(font1);
        ManageTheRooms->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:20px;"));
        ManageTheRestaurant = new QPushButton(DormitoryForm);
        ManageTheRestaurant->setObjectName("ManageTheRestaurant");
        ManageTheRestaurant->setGeometry(QRect(560, 440, 221, 61));
        ManageTheRestaurant->setFont(font1);
        ManageTheRestaurant->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:20px;"));
        btnReturn = new QPushButton(DormitoryForm);
        btnReturn->setObjectName("btnReturn");
        btnReturn->setGeometry(QRect(220, 520, 101, 51));
        btnReturn->setFont(font1);
        btnReturn->setStyleSheet(QString::fromUtf8("background-color: white; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:25px;"));
        btnEnter = new QPushButton(DormitoryForm);
        btnEnter->setObjectName("btnEnter");
        btnEnter->setGeometry(QRect(490, 520, 101, 51));
        btnEnter->setFont(font1);
        btnEnter->setStyleSheet(QString::fromUtf8("background-color: white; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:25px;"));

        retranslateUi(DormitoryForm);

        QMetaObject::connectSlotsByName(DormitoryForm);
    } // setupUi

    void retranslateUi(QWidget *DormitoryForm)
    {
        DormitoryForm->setWindowTitle(QCoreApplication::translate("DormitoryForm", "Form", nullptr));
        DormTitel->setText(QCoreApplication::translate("DormitoryForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DormName->setText(QCoreApplication::translate("DormitoryForm", "The Name: ", nullptr));
        numRooms->setText(QCoreApplication::translate("DormitoryForm", "The Number Of Rooms:", nullptr));
        DormCapacity->setText(QCoreApplication::translate("DormitoryForm", "The Capacity:", nullptr));
        roomsOccu->setText(QCoreApplication::translate("DormitoryForm", "The Number Of Occupied Rooms:", nullptr));
        roomsFree->setText(QCoreApplication::translate("DormitoryForm", "The Number Of Free Rooms:", nullptr));
        dormPassword->setText(QCoreApplication::translate("DormitoryForm", "The Dormitory Password:", nullptr));
        Gender->setText(QCoreApplication::translate("DormitoryForm", "The Gender Of Residents:", nullptr));
        ManageTheStudents->setText(QCoreApplication::translate("DormitoryForm", "Manage The Students", nullptr));
        ManageTheRooms->setText(QCoreApplication::translate("DormitoryForm", "Manage The Rooms", nullptr));
        ManageTheRestaurant->setText(QCoreApplication::translate("DormitoryForm", "Manage The Restaurant", nullptr));
        btnReturn->setText(QCoreApplication::translate("DormitoryForm", "Return", nullptr));
        btnEnter->setText(QCoreApplication::translate("DormitoryForm", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DormitoryForm: public Ui_DormitoryForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMITORYFORM_H
