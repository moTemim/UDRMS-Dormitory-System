/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *prjctTitle;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnStartManaging;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        prjctTitle = new QLabel(centralwidget);
        prjctTitle->setObjectName("prjctTitle");
        prjctTitle->setGeometry(QRect(0, -20, 801, 401));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(50);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        prjctTitle->setFont(font);
        prjctTitle->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        prjctTitle->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        prjctTitle->setAcceptDrops(false);
        prjctTitle->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none;\n"
"\n"
""));
        prjctTitle->setWordWrap(true);
        prjctTitle->setMargin(0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 400, 161, 131));
        label->setStyleSheet(QString::fromUtf8("border-image: none;\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/dorm2.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(620, 390, 161, 131));
        QFont font1;
        font1.setPointSize(9);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border-image: none;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/dorm3.png")));
        label_2->setScaledContents(true);
        btnStartManaging = new QPushButton(centralwidget);
        btnStartManaging->setObjectName("btnStartManaging");
        btnStartManaging->setGeometry(QRect(270, 450, 271, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setWeight(QFont::ExtraBold);
        font2.setItalic(true);
        font2.setUnderline(false);
        btnStartManaging->setFont(font2);
        btnStartManaging->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        prjctTitle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">University </p><p align=\"center\">Dormitory &amp; Restaurant </p><p align=\"center\">Management System</p></body></html>", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        btnStartManaging->setText(QCoreApplication::translate("MainWindow", "Start Managing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
