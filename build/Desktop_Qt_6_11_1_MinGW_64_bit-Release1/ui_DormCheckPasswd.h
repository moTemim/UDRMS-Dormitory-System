/********************************************************************************
** Form generated from reading UI file 'DormCheckPasswd.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DORMCHECKPASSWD_H
#define UI_DORMCHECKPASSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DormCheckPasswd
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *PasswordTxt;
    QPushButton *btnEnter;
    QPushButton *btnReturn;
    QCheckBox *ViewPasswd;

    void setupUi(QWidget *DormCheckPasswd)
    {
        if (DormCheckPasswd->objectName().isEmpty())
            DormCheckPasswd->setObjectName("DormCheckPasswd");
        DormCheckPasswd->resize(400, 300);
        DormCheckPasswd->setStyleSheet(QString::fromUtf8("QWidget#DormCheckPasswd{\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        label = new QLabel(DormCheckPasswd);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 361, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 30px;\n"
""));
        label_2 = new QLabel(DormCheckPasswd);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 90, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setWeight(QFont::ExtraBold);
        font1.setItalic(true);
        font1.setUnderline(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 25px;"));
        PasswordTxt = new QLineEdit(DormCheckPasswd);
        PasswordTxt->setObjectName("PasswordTxt");
        PasswordTxt->setGeometry(QRect(130, 100, 251, 31));
        PasswordTxt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        PasswordTxt->setEchoMode(QLineEdit::EchoMode::Password);
        btnEnter = new QPushButton(DormCheckPasswd);
        btnEnter->setObjectName("btnEnter");
        btnEnter->setGeometry(QRect(270, 180, 81, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setBold(true);
        font2.setItalic(true);
        btnEnter->setFont(font2);
        btnEnter->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 15px; font-size:25px;"));
        btnReturn = new QPushButton(DormCheckPasswd);
        btnReturn->setObjectName("btnReturn");
        btnReturn->setGeometry(QRect(160, 180, 81, 41));
        btnReturn->setFont(font2);
        btnReturn->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 15px; font-size:25px;"));
        ViewPasswd = new QCheckBox(DormCheckPasswd);
        ViewPasswd->setObjectName("ViewPasswd");
        ViewPasswd->setGeometry(QRect(240, 140, 141, 21));
        ViewPasswd->setFont(font2);
        ViewPasswd->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    color: #1a3d1a;\n"
"    font-size: 15px;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 4px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #2d6a2d;\n"
"    border: 2px solid #2d6a2d;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #1a5c1a;\n"
"}"));

        retranslateUi(DormCheckPasswd);

        QMetaObject::connectSlotsByName(DormCheckPasswd);
    } // setupUi

    void retranslateUi(QWidget *DormCheckPasswd)
    {
        DormCheckPasswd->setWindowTitle(QCoreApplication::translate("DormCheckPasswd", "Form", nullptr));
        label->setText(QCoreApplication::translate("DormCheckPasswd", "Enter Dormitory Password", nullptr));
        label_2->setText(QCoreApplication::translate("DormCheckPasswd", "Password:", nullptr));
        PasswordTxt->setPlaceholderText(QCoreApplication::translate("DormCheckPasswd", "Enter password...", nullptr));
        btnEnter->setText(QCoreApplication::translate("DormCheckPasswd", "Enter", nullptr));
        btnReturn->setText(QCoreApplication::translate("DormCheckPasswd", "return", nullptr));
        ViewPasswd->setText(QCoreApplication::translate("DormCheckPasswd", "Show Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DormCheckPasswd: public Ui_DormCheckPasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMCHECKPASSWD_H
