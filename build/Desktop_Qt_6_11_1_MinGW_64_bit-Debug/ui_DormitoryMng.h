/********************************************************************************
** Form generated from reading UI file 'DormitoryMng.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DORMITORYMNG_H
#define UI_DORMITORYMNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DormitoryMng
{
public:
    QLabel *label;
    QListWidget *listDormitories;
    QPushButton *btnAddDorm;
    QLineEdit *searchBar;
    QPushButton *btnRemoveDormitory;

    void setupUi(QWidget *DormitoryMng)
    {
        if (DormitoryMng->objectName().isEmpty())
            DormitoryMng->setObjectName("DormitoryMng");
        DormitoryMng->resize(800, 600);
        DormitoryMng->setStyleSheet(QString::fromUtf8("QWidget#DormitoryMng {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        label = new QLabel(DormitoryMng);
        label->setObjectName("label");
        label->setGeometry(QRect(40, -20, 771, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        listDormitories = new QListWidget(DormitoryMng);
        listDormitories->setObjectName("listDormitories");
        listDormitories->setGeometry(QRect(0, 170, 801, 301));
        listDormitories->setFont(font);
        listDormitories->setStyleSheet(QString::fromUtf8("QListWidget {\n"
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
        listDormitories->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        listDormitories->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        btnAddDorm = new QPushButton(DormitoryMng);
        btnAddDorm->setObjectName("btnAddDorm");
        btnAddDorm->setGeometry(QRect(250, 500, 271, 81));
        btnAddDorm->setFont(font);
        btnAddDorm->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        searchBar = new QLineEdit(DormitoryMng);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(0, 140, 801, 31));
        searchBar->setFont(font);
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #1a3d1a;\n"
"}"));
        btnRemoveDormitory = new QPushButton(DormitoryMng);
        btnRemoveDormitory->setObjectName("btnRemoveDormitory");
        btnRemoveDormitory->setGeometry(QRect(700, 100, 81, 31));
        btnRemoveDormitory->setFont(font);
        btnRemoveDormitory->setStyleSheet(QString::fromUtf8("background-color: white; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 10px; font-size:20px;"));

        retranslateUi(DormitoryMng);

        QMetaObject::connectSlotsByName(DormitoryMng);
    } // setupUi

    void retranslateUi(QWidget *DormitoryMng)
    {
        DormitoryMng->setWindowTitle(QCoreApplication::translate("DormitoryMng", "Form", nullptr));
        label->setText(QCoreApplication::translate("DormitoryMng", "Dormitories Management", nullptr));
        btnAddDorm->setText(QCoreApplication::translate("DormitoryMng", "add Dormitory", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("DormitoryMng", "Search dormitories...", nullptr));
        btnRemoveDormitory->setText(QCoreApplication::translate("DormitoryMng", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DormitoryMng: public Ui_DormitoryMng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMITORYMNG_H
