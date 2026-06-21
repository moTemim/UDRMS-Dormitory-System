/********************************************************************************
** Form generated from reading UI file 'StudentInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINFO_H
#define UI_STUDENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentInfo
{
public:
    QLabel *Titel;
    QLabel *DormName;
    QLabel *DormName_2;
    QLabel *DormName_3;
    QLabel *DormName_4;
    QLabel *DormName_5;
    QLabel *DormName_6;
    QLabel *DormName_7;
    QLabel *DormName_8;
    QPushButton *btnReturnBack;
    QPushButton *btnSave;
    QLineEdit *DateOfBirth;
    QLineEdit *AcademicYear;
    QLineEdit *School;
    QLineEdit *FullName;
    QLineEdit *Id;
    QSpinBox *Age;
    QSpinBox *YearStudy;
    QLabel *TheRoom;
    QLabel *DormName_9;
    QLabel *showStudentBalance;

    void setupUi(QWidget *StudentInfo)
    {
        if (StudentInfo->objectName().isEmpty())
            StudentInfo->setObjectName("StudentInfo");
        StudentInfo->resize(800, 600);
        StudentInfo->setStyleSheet(QString::fromUtf8("QWidget#StudentInfo{\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        Titel = new QLabel(StudentInfo);
        Titel->setObjectName("Titel");
        Titel->setGeometry(QRect(-10, 40, 788, 82));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(true);
        Titel->setFont(font);
        Titel->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        DormName = new QLabel(StudentInfo);
        DormName->setObjectName("DormName");
        DormName->setGeometry(QRect(150, 140, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setBold(true);
        font1.setItalic(true);
        DormName->setFont(font1);
        DormName->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_2 = new QLabel(StudentInfo);
        DormName_2->setObjectName("DormName_2");
        DormName_2->setGeometry(QRect(150, 420, 231, 41));
        DormName_2->setFont(font1);
        DormName_2->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_3 = new QLabel(StudentInfo);
        DormName_3->setObjectName("DormName_3");
        DormName_3->setGeometry(QRect(150, 300, 221, 41));
        DormName_3->setFont(font1);
        DormName_3->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_4 = new QLabel(StudentInfo);
        DormName_4->setObjectName("DormName_4");
        DormName_4->setGeometry(QRect(150, 180, 201, 41));
        DormName_4->setFont(font1);
        DormName_4->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_5 = new QLabel(StudentInfo);
        DormName_5->setObjectName("DormName_5");
        DormName_5->setGeometry(QRect(150, 380, 201, 41));
        DormName_5->setFont(font1);
        DormName_5->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_6 = new QLabel(StudentInfo);
        DormName_6->setObjectName("DormName_6");
        DormName_6->setGeometry(QRect(150, 340, 231, 41));
        DormName_6->setFont(font1);
        DormName_6->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_7 = new QLabel(StudentInfo);
        DormName_7->setObjectName("DormName_7");
        DormName_7->setGeometry(QRect(150, 260, 201, 41));
        DormName_7->setFont(font1);
        DormName_7->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        DormName_8 = new QLabel(StudentInfo);
        DormName_8->setObjectName("DormName_8");
        DormName_8->setGeometry(QRect(150, 220, 201, 41));
        DormName_8->setFont(font1);
        DormName_8->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        btnReturnBack = new QPushButton(StudentInfo);
        btnReturnBack->setObjectName("btnReturnBack");
        btnReturnBack->setGeometry(QRect(160, 520, 201, 61));
        btnReturnBack->setFont(font);
        btnReturnBack->setStyleSheet(QString::fromUtf8("background-color: white; color:#004d00; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        btnSave = new QPushButton(StudentInfo);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(430, 520, 201, 61));
        btnSave->setFont(font);
        btnSave->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        DateOfBirth = new QLineEdit(StudentInfo);
        DateOfBirth->setObjectName("DateOfBirth");
        DateOfBirth->setGeometry(QRect(360, 420, 171, 31));
        DateOfBirth->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        AcademicYear = new QLineEdit(StudentInfo);
        AcademicYear->setObjectName("AcademicYear");
        AcademicYear->setGeometry(QRect(370, 340, 171, 31));
        AcademicYear->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        School = new QLineEdit(StudentInfo);
        School->setObjectName("School");
        School->setGeometry(QRect(300, 260, 171, 31));
        School->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        FullName = new QLineEdit(StudentInfo);
        FullName->setObjectName("FullName");
        FullName->setGeometry(QRect(340, 140, 171, 31));
        FullName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        Id = new QLineEdit(StudentInfo);
        Id->setObjectName("Id");
        Id->setGeometry(QRect(340, 190, 171, 31));
        Id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        Age = new QSpinBox(StudentInfo);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(260, 220, 81, 31));
        Age->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        Age->setMaximum(100000);
        YearStudy = new QSpinBox(StudentInfo);
        YearStudy->setObjectName("YearStudy");
        YearStudy->setGeometry(QRect(370, 300, 81, 31));
        YearStudy->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        YearStudy->setMaximum(100000);
        TheRoom = new QLabel(StudentInfo);
        TheRoom->setObjectName("TheRoom");
        TheRoom->setGeometry(QRect(360, 380, 161, 31));
        TheRoom->setFont(font1);
        TheRoom->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        TheRoom->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DormName_9 = new QLabel(StudentInfo);
        DormName_9->setObjectName("DormName_9");
        DormName_9->setGeometry(QRect(150, 460, 271, 41));
        DormName_9->setFont(font1);
        DormName_9->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;\n"
""));
        showStudentBalance = new QLabel(StudentInfo);
        showStudentBalance->setObjectName("showStudentBalance");
        showStudentBalance->setGeometry(QRect(420, 460, 161, 31));
        showStudentBalance->setFont(font1);
        showStudentBalance->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        showStudentBalance->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(StudentInfo);

        QMetaObject::connectSlotsByName(StudentInfo);
    } // setupUi

    void retranslateUi(QWidget *StudentInfo)
    {
        StudentInfo->setWindowTitle(QCoreApplication::translate("StudentInfo", "Form", nullptr));
        Titel->setText(QCoreApplication::translate("StudentInfo", "<html><head/><body><p align=\"center\">Student Informations</p></body></html>", nullptr));
        DormName->setText(QCoreApplication::translate("StudentInfo", "The Full Name: ", nullptr));
        DormName_2->setText(QCoreApplication::translate("StudentInfo", "The Date Of Birth: ", nullptr));
        DormName_3->setText(QCoreApplication::translate("StudentInfo", "The Year Of Study: ", nullptr));
        DormName_4->setText(QCoreApplication::translate("StudentInfo", "The Student Id: ", nullptr));
        DormName_5->setText(QCoreApplication::translate("StudentInfo", "The Room: ", nullptr));
        DormName_6->setText(QCoreApplication::translate("StudentInfo", "The Academic Year: ", nullptr));
        DormName_7->setText(QCoreApplication::translate("StudentInfo", "The School: ", nullptr));
        DormName_8->setText(QCoreApplication::translate("StudentInfo", "The Age: ", nullptr));
        btnReturnBack->setText(QCoreApplication::translate("StudentInfo", "return Back", nullptr));
        btnSave->setText(QCoreApplication::translate("StudentInfo", "Save", nullptr));
        TheRoom->setText(QCoreApplication::translate("StudentInfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DormName_9->setText(QCoreApplication::translate("StudentInfo", "The Card Balance(DA): ", nullptr));
        showStudentBalance->setText(QCoreApplication::translate("StudentInfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInfo: public Ui_StudentInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINFO_H
