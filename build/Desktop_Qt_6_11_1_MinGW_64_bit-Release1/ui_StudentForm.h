/********************************************************************************
** Form generated from reading UI file 'StudentForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTFORM_H
#define UI_STUDENTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentForm
{
public:
    QLabel *Titel;
    QListWidget *listStudents;
    QLineEdit *searchBar;
    QPushButton *btnReturnBack;
    QPushButton *btnAddStudent;
    QPushButton *btnRemoveFromDormitory;

    void setupUi(QWidget *StudentForm)
    {
        if (StudentForm->objectName().isEmpty())
            StudentForm->setObjectName("StudentForm");
        StudentForm->resize(800, 600);
        StudentForm->setStyleSheet(QString::fromUtf8("QWidget#StudentForm {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        Titel = new QLabel(StudentForm);
        Titel->setObjectName("Titel");
        Titel->setGeometry(QRect(80, -20, 771, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(true);
        Titel->setFont(font);
        Titel->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        listStudents = new QListWidget(StudentForm);
        listStudents->setObjectName("listStudents");
        listStudents->setGeometry(QRect(0, 150, 801, 301));
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
        searchBar = new QLineEdit(StudentForm);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(0, 120, 801, 31));
        searchBar->setFont(font);
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #1a3d1a;\n"
"}"));
        btnReturnBack = new QPushButton(StudentForm);
        btnReturnBack->setObjectName("btnReturnBack");
        btnReturnBack->setGeometry(QRect(80, 480, 271, 81));
        btnReturnBack->setFont(font);
        btnReturnBack->setStyleSheet(QString::fromUtf8("background-color: white; color:#004d00; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        btnAddStudent = new QPushButton(StudentForm);
        btnAddStudent->setObjectName("btnAddStudent");
        btnAddStudent->setGeometry(QRect(460, 480, 271, 81));
        btnAddStudent->setFont(font);
        btnAddStudent->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        btnRemoveFromDormitory = new QPushButton(StudentForm);
        btnRemoveFromDormitory->setObjectName("btnRemoveFromDormitory");
        btnRemoveFromDormitory->setGeometry(QRect(710, 80, 81, 31));
        btnRemoveFromDormitory->setFont(font);
        btnRemoveFromDormitory->setStyleSheet(QString::fromUtf8("background-color: white; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 10px; font-size:20px;"));

        retranslateUi(StudentForm);

        QMetaObject::connectSlotsByName(StudentForm);
    } // setupUi

    void retranslateUi(QWidget *StudentForm)
    {
        StudentForm->setWindowTitle(QCoreApplication::translate("StudentForm", "Form", nullptr));
        Titel->setText(QCoreApplication::translate("StudentForm", "Students Management", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("StudentForm", "Search students...", nullptr));
        btnReturnBack->setText(QCoreApplication::translate("StudentForm", "return Back", nullptr));
        btnAddStudent->setText(QCoreApplication::translate("StudentForm", "add Student", nullptr));
        btnRemoveFromDormitory->setText(QCoreApplication::translate("StudentForm", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentForm: public Ui_StudentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTFORM_H
