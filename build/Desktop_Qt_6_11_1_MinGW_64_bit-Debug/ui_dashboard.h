/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QLabel *DashTitel;
    QPushButton *btnThroughUniversity;
    QPushButton *btnThroughDormitory;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(800, 600);
        Dashboard->setMinimumSize(QSize(0, 600));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setBold(true);
        font.setItalic(false);
        Dashboard->setFont(font);
        Dashboard->setAutoFillBackground(false);
        Dashboard->setStyleSheet(QString::fromUtf8("QWidget#Dashboard {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        DashTitel = new QLabel(Dashboard);
        DashTitel->setObjectName("DashTitel");
        DashTitel->setGeometry(QRect(220, -30, 361, 471));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setWeight(QFont::ExtraBold);
        font1.setItalic(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        DashTitel->setFont(font1);
        DashTitel->setAcceptDrops(false);
        DashTitel->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 75px;\n"
"\n"
""));
        btnThroughUniversity = new QPushButton(Dashboard);
        btnThroughUniversity->setObjectName("btnThroughUniversity");
        btnThroughUniversity->setGeometry(QRect(460, 440, 271, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setWeight(QFont::ExtraBold);
        font2.setItalic(true);
        btnThroughUniversity->setFont(font2);
        btnThroughUniversity->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        btnThroughDormitory = new QPushButton(Dashboard);
        btnThroughDormitory->setObjectName("btnThroughDormitory");
        btnThroughDormitory->setGeometry(QRect(60, 440, 271, 81));
        btnThroughDormitory->setFont(font2);
        btnThroughDormitory->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Form", nullptr));
        DashTitel->setText(QCoreApplication::translate("Dashboard", "<html><head/><body><p align=\"center\">Choose </p><p align=\"center\">The Way </p><p align=\"center\">Of </p><p align=\"center\">Managing</p></body></html>", nullptr));
        btnThroughUniversity->setText(QCoreApplication::translate("Dashboard", "through University", nullptr));
        btnThroughDormitory->setText(QCoreApplication::translate("Dashboard", "through Dormitory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
