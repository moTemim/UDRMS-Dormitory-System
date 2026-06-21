/********************************************************************************
** Form generated from reading UI file 'RestaurantForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANTFORM_H
#define UI_RESTAURANTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RestaurantForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *Titel;
    QTabWidget *TabWidget;
    QWidget *menuWin;
    QGroupBox *Breakfast;
    QLabel *Titel_2;
    QLabel *Titel_3;
    QLabel *Titel_6;
    QLabel *Titel_7;
    QLabel *Titel_8;
    QLabel *Titel_9;
    QLabel *Titel_10;
    QLabel *BreakfastOpenTime;
    QLabel *BreakfastCloseTime;
    QLabel *BreakfastAppetizer;
    QLabel *BreakfastMainPlate;
    QLabel *BreakfastDessert;
    QLabel *BreakfastPrice;
    QLabel *BreakfastMealServed;
    QGroupBox *Breakfast_2;
    QLabel *Lunch;
    QLabel *Titel_12;
    QLabel *Titel_13;
    QLabel *Titel_14;
    QLabel *Titel_15;
    QLabel *Titel_16;
    QLabel *Titel_17;
    QLabel *LunchOpenTime;
    QLabel *LunchCloseTime;
    QLabel *LunchAppetizer;
    QLabel *LunchMainPlate;
    QLabel *LunchDessert;
    QLabel *LunchPrice;
    QLabel *LunchMealServed;
    QGroupBox *Dinner;
    QLabel *Titel_18;
    QLabel *Titel_19;
    QLabel *Titel_20;
    QLabel *Titel_21;
    QLabel *Titel_22;
    QLabel *Titel_23;
    QLabel *Titel_24;
    QLabel *DinnerOpenTime;
    QLabel *DinnerCloseTime;
    QLabel *DinnerAppetizer;
    QLabel *DinnerMainPlate;
    QLabel *DinnerDessert;
    QLabel *DinnerPrice;
    QLabel *DinnerMealServed;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Titel_25;
    QComboBox *dayList;
    QPushButton *btnReturn_8;
    QWidget *takeWIn;
    QLabel *Titel_11;
    QLineEdit *editStudentId;
    QLabel *Titel_26;
    QComboBox *theMealToTake;
    QPushButton *btnTakeTheMeal;
    QLabel *Titel_27;
    QLabel *theMealNumber;
    QPushButton *btnReturn_7;
    QWidget *rechargeWin;
    QLabel *Titel_28;
    QLineEdit *editStudentId_2;
    QLabel *Titel_29;
    QSpinBox *editTheAmount;
    QPushButton *btnRecharge;
    QLabel *Titel_30;
    QLabel *theNewBalance;
    QPushButton *btnReturn_6;
    QWidget *modifyWin;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *Titel_31;
    QComboBox *dayList_2;
    QGroupBox *Breakfast_3;
    QLabel *Titel_32;
    QLabel *Titel_33;
    QLabel *Titel_34;
    QLabel *Titel_35;
    QLabel *Titel_36;
    QLabel *Titel_37;
    QLabel *Titel_38;
    QLineEdit *editBreakfastOpenTime;
    QLineEdit *editBreakfastCloseTime;
    QLineEdit *editBreakfastAppetizer;
    QLineEdit *editBreakfastMainPlate;
    QLineEdit *editBreakfastDessert;
    QLineEdit *editBreakfastPrice;
    QLineEdit *editBreakfastMealServed;
    QGroupBox *Breakfast_4;
    QLabel *Titel_39;
    QLabel *Titel_40;
    QLabel *Titel_41;
    QLabel *Titel_42;
    QLabel *Titel_43;
    QLabel *Titel_44;
    QLabel *Titel_45;
    QLineEdit *editLunchOpenTime;
    QLineEdit *editLunchCloseTime;
    QLineEdit *editLunchAppetizer;
    QLineEdit *editLunchMainPlate;
    QLineEdit *editLunchDessert;
    QLineEdit *editLunchPrice;
    QLineEdit *editLunchMealServed;
    QGroupBox *Breakfast_5;
    QLabel *Titel_46;
    QLabel *Titel_47;
    QLabel *Titel_48;
    QLabel *Titel_49;
    QLabel *Titel_50;
    QLabel *Titel_51;
    QLabel *Titel_52;
    QLineEdit *editDinnerOpenTime;
    QLineEdit *editDinnerCloseTime;
    QLineEdit *editDinnerAppetizer;
    QLineEdit *editDinnerMainPlate;
    QLineEdit *editDinnerDessert;
    QLineEdit *editDinnerPrice;
    QLineEdit *editDinnerMealServed;
    QPushButton *btnReturn_4;
    QPushButton *btnSave;

    void setupUi(QWidget *RestaurantForm)
    {
        if (RestaurantForm->objectName().isEmpty())
            RestaurantForm->setObjectName("RestaurantForm");
        RestaurantForm->resize(806, 600);
        RestaurantForm->setStyleSheet(QString::fromUtf8("QWidget#RestaurantForm{\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #EAF7E6, stop:1 #A1DBA1);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(RestaurantForm);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Titel = new QLabel(RestaurantForm);
        Titel->setObjectName("Titel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(true);
        Titel->setFont(font);
        Titel->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));

        verticalLayout_3->addWidget(Titel);

        TabWidget = new QTabWidget(RestaurantForm);
        TabWidget->setObjectName("TabWidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setBold(true);
        font1.setItalic(true);
        TabWidget->setFont(font1);
        TabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    background-color: rgba(255,255,255,180);\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    padding: 10px;\n"
"    border-bottom: 1px solid #a0d0a0;\n"
"    color: #1a3d1a;\n"
"    font-size: 14px;\n"
"    background-color: rgba(255,255,255,180);\n"
"    \n"
"    /* ADDED: This creates a subtle green separator line on the right side of each tab */\n"
"    border-right: 1px solid #a0d0a0; \n"
"}\n"
"\n"
"/* ADDED: Removes the separator line from the last tab so it looks professional */\n"
"QTabBar::tab:last {\n"
"    border-right: none;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: #2d6a2d;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    /* ADDED: Keeps the separator invisible on the right side when selected so the button looks clean */\n"
"    border-right: none; \n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background-color: #c8e6c8;\n"
"    border-radius: 5px;\n"
"}"));
        menuWin = new QWidget();
        menuWin->setObjectName("menuWin");
        Breakfast = new QGroupBox(menuWin);
        Breakfast->setObjectName("Breakfast");
        Breakfast->setGeometry(QRect(0, 90, 261, 341));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        Breakfast->setFont(font2);
        Breakfast->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    /* Bold dark green border with rounded corners */\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    \n"
"    /* Pushes the interior content down so it doesn't overlap the title */\n"
"    margin-top: 14px;\n"
"    padding-top: 15px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    \n"
"    /* Header text formatting */\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    color: #2d6a2d;\n"
"    \n"
"    /* Clean, soft off-white/cream background to pop against the dark workspace */\n"
"    background-color: #f7faf6;\n"
"}\n"
"\n"
"/* Position and style the text title anchor on the top line */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 12px;\n"
"    padding-left: 6px;\n"
"    padding-right: 6px;\n"
"    \n"
"    /* Matches the parent container's solid background color to cut through the border line cleanly */\n"
"    background-color: #f7faf6; \n"
"}"));
        Titel_2 = new QLabel(Breakfast);
        Titel_2->setObjectName("Titel_2");
        Titel_2->setGeometry(QRect(0, 20, 111, 71));
        Titel_2->setFont(font);
        Titel_2->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_3 = new QLabel(Breakfast);
        Titel_3->setObjectName("Titel_3");
        Titel_3->setGeometry(QRect(0, 60, 111, 71));
        Titel_3->setFont(font);
        Titel_3->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_6 = new QLabel(Breakfast);
        Titel_6->setObjectName("Titel_6");
        Titel_6->setGeometry(QRect(0, 100, 111, 71));
        Titel_6->setFont(font);
        Titel_6->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_7 = new QLabel(Breakfast);
        Titel_7->setObjectName("Titel_7");
        Titel_7->setGeometry(QRect(0, 140, 111, 71));
        Titel_7->setFont(font);
        Titel_7->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_8 = new QLabel(Breakfast);
        Titel_8->setObjectName("Titel_8");
        Titel_8->setGeometry(QRect(0, 180, 111, 71));
        Titel_8->setFont(font);
        Titel_8->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_9 = new QLabel(Breakfast);
        Titel_9->setObjectName("Titel_9");
        Titel_9->setGeometry(QRect(0, 220, 111, 71));
        Titel_9->setFont(font);
        Titel_9->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_10 = new QLabel(Breakfast);
        Titel_10->setObjectName("Titel_10");
        Titel_10->setGeometry(QRect(0, 260, 121, 71));
        Titel_10->setFont(font);
        Titel_10->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        BreakfastOpenTime = new QLabel(Breakfast);
        BreakfastOpenTime->setObjectName("BreakfastOpenTime");
        BreakfastOpenTime->setGeometry(QRect(110, 40, 131, 31));
        BreakfastOpenTime->setFont(font1);
        BreakfastOpenTime->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        BreakfastOpenTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        BreakfastCloseTime = new QLabel(Breakfast);
        BreakfastCloseTime->setObjectName("BreakfastCloseTime");
        BreakfastCloseTime->setGeometry(QRect(110, 80, 131, 31));
        BreakfastCloseTime->setFont(font1);
        BreakfastCloseTime->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        BreakfastCloseTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        BreakfastAppetizer = new QLabel(Breakfast);
        BreakfastAppetizer->setObjectName("BreakfastAppetizer");
        BreakfastAppetizer->setGeometry(QRect(110, 120, 131, 31));
        BreakfastAppetizer->setFont(font1);
        BreakfastAppetizer->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        BreakfastAppetizer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        BreakfastMainPlate = new QLabel(Breakfast);
        BreakfastMainPlate->setObjectName("BreakfastMainPlate");
        BreakfastMainPlate->setGeometry(QRect(110, 160, 131, 31));
        BreakfastMainPlate->setFont(font1);
        BreakfastMainPlate->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        BreakfastMainPlate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        BreakfastDessert = new QLabel(Breakfast);
        BreakfastDessert->setObjectName("BreakfastDessert");
        BreakfastDessert->setGeometry(QRect(110, 200, 131, 31));
        BreakfastDessert->setFont(font1);
        BreakfastDessert->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        BreakfastDessert->setAlignment(Qt::AlignmentFlag::AlignCenter);
        BreakfastPrice = new QLabel(Breakfast);
        BreakfastPrice->setObjectName("BreakfastPrice");
        BreakfastPrice->setGeometry(QRect(110, 240, 131, 31));
        BreakfastPrice->setFont(font1);
        BreakfastPrice->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        BreakfastPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        BreakfastMealServed = new QLabel(Breakfast);
        BreakfastMealServed->setObjectName("BreakfastMealServed");
        BreakfastMealServed->setGeometry(QRect(120, 280, 121, 31));
        BreakfastMealServed->setFont(font1);
        BreakfastMealServed->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        BreakfastMealServed->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Breakfast_2 = new QGroupBox(menuWin);
        Breakfast_2->setObjectName("Breakfast_2");
        Breakfast_2->setGeometry(QRect(260, 90, 261, 341));
        Breakfast_2->setFont(font2);
        Breakfast_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    /* Bold dark green border with rounded corners */\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    \n"
"    /* Pushes the interior content down so it doesn't overlap the title */\n"
"    margin-top: 14px;\n"
"    padding-top: 15px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    \n"
"    /* Header text formatting */\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    color: #2d6a2d;\n"
"    \n"
"    /* Clean, soft off-white/cream background to pop against the dark workspace */\n"
"    background-color: #f7faf6;\n"
"}\n"
"\n"
"/* Position and style the text title anchor on the top line */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 12px;\n"
"    padding-left: 6px;\n"
"    padding-right: 6px;\n"
"    \n"
"    /* Matches the parent container's solid background color to cut through the border line cleanly */\n"
"    background-color: #f7faf6; \n"
"}"));
        Lunch = new QLabel(Breakfast_2);
        Lunch->setObjectName("Lunch");
        Lunch->setGeometry(QRect(0, 20, 111, 71));
        Lunch->setFont(font);
        Lunch->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_12 = new QLabel(Breakfast_2);
        Titel_12->setObjectName("Titel_12");
        Titel_12->setGeometry(QRect(0, 60, 111, 71));
        Titel_12->setFont(font);
        Titel_12->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_13 = new QLabel(Breakfast_2);
        Titel_13->setObjectName("Titel_13");
        Titel_13->setGeometry(QRect(0, 100, 111, 71));
        Titel_13->setFont(font);
        Titel_13->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_14 = new QLabel(Breakfast_2);
        Titel_14->setObjectName("Titel_14");
        Titel_14->setGeometry(QRect(0, 140, 111, 71));
        Titel_14->setFont(font);
        Titel_14->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_15 = new QLabel(Breakfast_2);
        Titel_15->setObjectName("Titel_15");
        Titel_15->setGeometry(QRect(0, 180, 111, 71));
        Titel_15->setFont(font);
        Titel_15->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_16 = new QLabel(Breakfast_2);
        Titel_16->setObjectName("Titel_16");
        Titel_16->setGeometry(QRect(0, 220, 111, 71));
        Titel_16->setFont(font);
        Titel_16->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_17 = new QLabel(Breakfast_2);
        Titel_17->setObjectName("Titel_17");
        Titel_17->setGeometry(QRect(0, 260, 121, 71));
        Titel_17->setFont(font);
        Titel_17->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        LunchOpenTime = new QLabel(Breakfast_2);
        LunchOpenTime->setObjectName("LunchOpenTime");
        LunchOpenTime->setGeometry(QRect(110, 40, 131, 31));
        LunchOpenTime->setFont(font1);
        LunchOpenTime->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        LunchOpenTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LunchCloseTime = new QLabel(Breakfast_2);
        LunchCloseTime->setObjectName("LunchCloseTime");
        LunchCloseTime->setGeometry(QRect(110, 80, 131, 31));
        LunchCloseTime->setFont(font1);
        LunchCloseTime->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        LunchCloseTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LunchAppetizer = new QLabel(Breakfast_2);
        LunchAppetizer->setObjectName("LunchAppetizer");
        LunchAppetizer->setGeometry(QRect(110, 120, 131, 31));
        LunchAppetizer->setFont(font1);
        LunchAppetizer->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        LunchAppetizer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LunchMainPlate = new QLabel(Breakfast_2);
        LunchMainPlate->setObjectName("LunchMainPlate");
        LunchMainPlate->setGeometry(QRect(110, 160, 131, 31));
        LunchMainPlate->setFont(font1);
        LunchMainPlate->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        LunchMainPlate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LunchDessert = new QLabel(Breakfast_2);
        LunchDessert->setObjectName("LunchDessert");
        LunchDessert->setGeometry(QRect(110, 200, 131, 31));
        LunchDessert->setFont(font1);
        LunchDessert->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        LunchDessert->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LunchPrice = new QLabel(Breakfast_2);
        LunchPrice->setObjectName("LunchPrice");
        LunchPrice->setGeometry(QRect(110, 240, 131, 31));
        LunchPrice->setFont(font1);
        LunchPrice->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        LunchPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LunchMealServed = new QLabel(Breakfast_2);
        LunchMealServed->setObjectName("LunchMealServed");
        LunchMealServed->setGeometry(QRect(120, 280, 121, 31));
        LunchMealServed->setFont(font1);
        LunchMealServed->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        LunchMealServed->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Dinner = new QGroupBox(menuWin);
        Dinner->setObjectName("Dinner");
        Dinner->setGeometry(QRect(520, 90, 261, 341));
        Dinner->setFont(font2);
        Dinner->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    /* Bold dark green border with rounded corners */\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    \n"
"    /* Pushes the interior content down so it doesn't overlap the title */\n"
"    margin-top: 14px;\n"
"    padding-top: 15px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    \n"
"    /* Header text formatting */\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    color: #2d6a2d;\n"
"    \n"
"    /* Clean, soft off-white/cream background to pop against the dark workspace */\n"
"    background-color: #f7faf6;\n"
"}\n"
"\n"
"/* Position and style the text title anchor on the top line */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 12px;\n"
"    padding-left: 6px;\n"
"    padding-right: 6px;\n"
"    \n"
"    /* Matches the parent container's solid background color to cut through the border line cleanly */\n"
"    background-color: #f7faf6; \n"
"}"));
        Titel_18 = new QLabel(Dinner);
        Titel_18->setObjectName("Titel_18");
        Titel_18->setGeometry(QRect(0, 20, 111, 71));
        Titel_18->setFont(font);
        Titel_18->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_19 = new QLabel(Dinner);
        Titel_19->setObjectName("Titel_19");
        Titel_19->setGeometry(QRect(0, 60, 111, 71));
        Titel_19->setFont(font);
        Titel_19->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_20 = new QLabel(Dinner);
        Titel_20->setObjectName("Titel_20");
        Titel_20->setGeometry(QRect(0, 100, 111, 71));
        Titel_20->setFont(font);
        Titel_20->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_21 = new QLabel(Dinner);
        Titel_21->setObjectName("Titel_21");
        Titel_21->setGeometry(QRect(0, 140, 111, 71));
        Titel_21->setFont(font);
        Titel_21->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_22 = new QLabel(Dinner);
        Titel_22->setObjectName("Titel_22");
        Titel_22->setGeometry(QRect(0, 180, 111, 71));
        Titel_22->setFont(font);
        Titel_22->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_23 = new QLabel(Dinner);
        Titel_23->setObjectName("Titel_23");
        Titel_23->setGeometry(QRect(0, 220, 111, 71));
        Titel_23->setFont(font);
        Titel_23->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_24 = new QLabel(Dinner);
        Titel_24->setObjectName("Titel_24");
        Titel_24->setGeometry(QRect(0, 260, 121, 71));
        Titel_24->setFont(font);
        Titel_24->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        DinnerOpenTime = new QLabel(Dinner);
        DinnerOpenTime->setObjectName("DinnerOpenTime");
        DinnerOpenTime->setGeometry(QRect(110, 40, 131, 31));
        DinnerOpenTime->setFont(font1);
        DinnerOpenTime->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        DinnerOpenTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DinnerCloseTime = new QLabel(Dinner);
        DinnerCloseTime->setObjectName("DinnerCloseTime");
        DinnerCloseTime->setGeometry(QRect(110, 80, 131, 31));
        DinnerCloseTime->setFont(font1);
        DinnerCloseTime->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        DinnerCloseTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DinnerAppetizer = new QLabel(Dinner);
        DinnerAppetizer->setObjectName("DinnerAppetizer");
        DinnerAppetizer->setGeometry(QRect(110, 120, 131, 31));
        DinnerAppetizer->setFont(font1);
        DinnerAppetizer->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        DinnerAppetizer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DinnerMainPlate = new QLabel(Dinner);
        DinnerMainPlate->setObjectName("DinnerMainPlate");
        DinnerMainPlate->setGeometry(QRect(110, 160, 131, 31));
        DinnerMainPlate->setFont(font1);
        DinnerMainPlate->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        DinnerMainPlate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DinnerDessert = new QLabel(Dinner);
        DinnerDessert->setObjectName("DinnerDessert");
        DinnerDessert->setGeometry(QRect(110, 200, 131, 31));
        DinnerDessert->setFont(font1);
        DinnerDessert->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        DinnerDessert->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DinnerPrice = new QLabel(Dinner);
        DinnerPrice->setObjectName("DinnerPrice");
        DinnerPrice->setGeometry(QRect(110, 240, 131, 31));
        DinnerPrice->setFont(font1);
        DinnerPrice->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        DinnerPrice->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DinnerMealServed = new QLabel(Dinner);
        DinnerMealServed->setObjectName("DinnerMealServed");
        DinnerMealServed->setGeometry(QRect(120, 280, 121, 31));
        DinnerMealServed->setFont(font1);
        DinnerMealServed->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 20px;"));
        DinnerMealServed->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayoutWidget = new QWidget(menuWin);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(170, 0, 451, 85));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Titel_25 = new QLabel(verticalLayoutWidget);
        Titel_25->setObjectName("Titel_25");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setWeight(QFont::ExtraBold);
        font3.setItalic(true);
        font3.setUnderline(true);
        Titel_25->setFont(font3);
        Titel_25->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 30px;\n"
""));

        verticalLayout_2->addWidget(Titel_25);

        dayList = new QComboBox(verticalLayoutWidget);
        dayList->addItem(QString());
        dayList->addItem(QString());
        dayList->addItem(QString());
        dayList->addItem(QString());
        dayList->addItem(QString());
        dayList->addItem(QString());
        dayList->addItem(QString());
        dayList->setObjectName("dayList");
        dayList->setFont(font1);
        dayList->setStyleSheet(QString::fromUtf8("/* Style the main closed dropdown box */\n"
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

        verticalLayout_2->addWidget(dayList);

        btnReturn_8 = new QPushButton(menuWin);
        btnReturn_8->setObjectName("btnReturn_8");
        btnReturn_8->setGeometry(QRect(690, 0, 81, 41));
        btnReturn_8->setFont(font1);
        btnReturn_8->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 15px; font-size:25px;"));
        TabWidget->addTab(menuWin, QString());
        takeWIn = new QWidget();
        takeWIn->setObjectName("takeWIn");
        Titel_11 = new QLabel(takeWIn);
        Titel_11->setObjectName("Titel_11");
        Titel_11->setGeometry(QRect(-10, 0, 781, 82));
        Titel_11->setFont(font);
        Titel_11->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        editStudentId = new QLineEdit(takeWIn);
        editStudentId->setObjectName("editStudentId");
        editStudentId->setGeometry(QRect(20, 80, 731, 61));
        editStudentId->setFont(font1);
        editStudentId->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"     font-size: 30px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        Titel_26 = new QLabel(takeWIn);
        Titel_26->setObjectName("Titel_26");
        Titel_26->setGeometry(QRect(-10, 140, 781, 82));
        Titel_26->setFont(font);
        Titel_26->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        theMealToTake = new QComboBox(takeWIn);
        theMealToTake->addItem(QString());
        theMealToTake->addItem(QString());
        theMealToTake->addItem(QString());
        theMealToTake->setObjectName("theMealToTake");
        theMealToTake->setGeometry(QRect(20, 220, 731, 61));
        theMealToTake->setFont(font1);
        theMealToTake->setStyleSheet(QString::fromUtf8("/* Style the main closed dropdown box */\n"
"QComboBox {\n"
"    border: 1px solid #2d6a2d;\n"
"    border-radius: 4px;\n"
"    padding: 4px 10px;\n"
"    min-width: 6em;\n"
"    color: #004d00;\n"
"    background-color: rgba(255, 255, 255, 210);\n"
"    font-size: 30px;\n"
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
        btnTakeTheMeal = new QPushButton(takeWIn);
        btnTakeTheMeal->setObjectName("btnTakeTheMeal");
        btnTakeTheMeal->setGeometry(QRect(230, 290, 271, 81));
        btnTakeTheMeal->setFont(font);
        btnTakeTheMeal->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        Titel_27 = new QLabel(takeWIn);
        Titel_27->setObjectName("Titel_27");
        Titel_27->setGeometry(QRect(0, 370, 341, 82));
        Titel_27->setFont(font);
        Titel_27->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 40px;\n"
""));
        theMealNumber = new QLabel(takeWIn);
        theMealNumber->setObjectName("theMealNumber");
        theMealNumber->setGeometry(QRect(340, 380, 371, 51));
        theMealNumber->setFont(font1);
        theMealNumber->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 30px;"));
        theMealNumber->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnReturn_7 = new QPushButton(takeWIn);
        btnReturn_7->setObjectName("btnReturn_7");
        btnReturn_7->setGeometry(QRect(690, 0, 81, 41));
        btnReturn_7->setFont(font1);
        btnReturn_7->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 15px; font-size:25px;"));
        TabWidget->addTab(takeWIn, QString());
        rechargeWin = new QWidget();
        rechargeWin->setObjectName("rechargeWin");
        Titel_28 = new QLabel(rechargeWin);
        Titel_28->setObjectName("Titel_28");
        Titel_28->setGeometry(QRect(-20, 0, 781, 82));
        Titel_28->setFont(font);
        Titel_28->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        editStudentId_2 = new QLineEdit(rechargeWin);
        editStudentId_2->setObjectName("editStudentId_2");
        editStudentId_2->setGeometry(QRect(20, 80, 731, 61));
        editStudentId_2->setFont(font1);
        editStudentId_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"     font-size: 30px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        Titel_29 = new QLabel(rechargeWin);
        Titel_29->setObjectName("Titel_29");
        Titel_29->setGeometry(QRect(0, 140, 781, 82));
        Titel_29->setFont(font);
        Titel_29->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 65px;\n"
""));
        editTheAmount = new QSpinBox(rechargeWin);
        editTheAmount->setObjectName("editTheAmount");
        editTheAmount->setGeometry(QRect(20, 220, 731, 61));
        editTheAmount->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: rgba(255,255,255,210);\n"
"    color: #1b5e20;\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 10px;\n"
"    padding: 4px 24px 4px 8px;\n"
"    font-size: 30px;\n"
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
        editTheAmount->setMaximum(100000);
        btnRecharge = new QPushButton(rechargeWin);
        btnRecharge->setObjectName("btnRecharge");
        btnRecharge->setGeometry(QRect(230, 290, 271, 81));
        btnRecharge->setFont(font);
        btnRecharge->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 25px; font-size:30px;"));
        Titel_30 = new QLabel(rechargeWin);
        Titel_30->setObjectName("Titel_30");
        Titel_30->setGeometry(QRect(10, 370, 341, 82));
        Titel_30->setFont(font);
        Titel_30->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 40px;\n"
""));
        theNewBalance = new QLabel(rechargeWin);
        theNewBalance->setObjectName("theNewBalance");
        theNewBalance->setGeometry(QRect(340, 380, 371, 51));
        theNewBalance->setFont(font1);
        theNewBalance->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px; border: 1px solid #b3d1b3; \n"
"    border-radius: 15px;; font-size: 30px;"));
        theNewBalance->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnReturn_6 = new QPushButton(rechargeWin);
        btnReturn_6->setObjectName("btnReturn_6");
        btnReturn_6->setGeometry(QRect(690, 0, 81, 41));
        btnReturn_6->setFont(font1);
        btnReturn_6->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 15px; font-size:25px;"));
        TabWidget->addTab(rechargeWin, QString());
        modifyWin = new QWidget();
        modifyWin->setObjectName("modifyWin");
        verticalLayoutWidget_2 = new QWidget(modifyWin);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(170, 0, 451, 85));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Titel_31 = new QLabel(verticalLayoutWidget_2);
        Titel_31->setObjectName("Titel_31");
        Titel_31->setFont(font3);
        Titel_31->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 30px;\n"
""));

        verticalLayout_4->addWidget(Titel_31);

        dayList_2 = new QComboBox(verticalLayoutWidget_2);
        dayList_2->addItem(QString());
        dayList_2->addItem(QString());
        dayList_2->addItem(QString());
        dayList_2->addItem(QString());
        dayList_2->addItem(QString());
        dayList_2->addItem(QString());
        dayList_2->addItem(QString());
        dayList_2->setObjectName("dayList_2");
        dayList_2->setFont(font1);
        dayList_2->setStyleSheet(QString::fromUtf8("/* Style the main closed dropdown box */\n"
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

        verticalLayout_4->addWidget(dayList_2);

        Breakfast_3 = new QGroupBox(modifyWin);
        Breakfast_3->setObjectName("Breakfast_3");
        Breakfast_3->setGeometry(QRect(0, 90, 261, 341));
        Breakfast_3->setFont(font2);
        Breakfast_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    /* Bold dark green border with rounded corners */\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    \n"
"    /* Pushes the interior content down so it doesn't overlap the title */\n"
"    margin-top: 14px;\n"
"    padding-top: 15px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    \n"
"    /* Header text formatting */\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    color: #2d6a2d;\n"
"    \n"
"    /* Clean, soft off-white/cream background to pop against the dark workspace */\n"
"    background-color: #f7faf6;\n"
"}\n"
"\n"
"/* Position and style the text title anchor on the top line */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 12px;\n"
"    padding-left: 6px;\n"
"    padding-right: 6px;\n"
"    \n"
"    /* Matches the parent container's solid background color to cut through the border line cleanly */\n"
"    background-color: #f7faf6; \n"
"}"));
        Titel_32 = new QLabel(Breakfast_3);
        Titel_32->setObjectName("Titel_32");
        Titel_32->setGeometry(QRect(0, 20, 111, 71));
        Titel_32->setFont(font);
        Titel_32->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_33 = new QLabel(Breakfast_3);
        Titel_33->setObjectName("Titel_33");
        Titel_33->setGeometry(QRect(0, 60, 111, 71));
        Titel_33->setFont(font);
        Titel_33->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_34 = new QLabel(Breakfast_3);
        Titel_34->setObjectName("Titel_34");
        Titel_34->setGeometry(QRect(0, 100, 111, 71));
        Titel_34->setFont(font);
        Titel_34->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_35 = new QLabel(Breakfast_3);
        Titel_35->setObjectName("Titel_35");
        Titel_35->setGeometry(QRect(0, 140, 111, 71));
        Titel_35->setFont(font);
        Titel_35->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_36 = new QLabel(Breakfast_3);
        Titel_36->setObjectName("Titel_36");
        Titel_36->setGeometry(QRect(0, 180, 111, 71));
        Titel_36->setFont(font);
        Titel_36->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_37 = new QLabel(Breakfast_3);
        Titel_37->setObjectName("Titel_37");
        Titel_37->setGeometry(QRect(0, 220, 111, 71));
        Titel_37->setFont(font);
        Titel_37->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_38 = new QLabel(Breakfast_3);
        Titel_38->setObjectName("Titel_38");
        Titel_38->setGeometry(QRect(0, 260, 121, 71));
        Titel_38->setFont(font);
        Titel_38->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        editBreakfastOpenTime = new QLineEdit(Breakfast_3);
        editBreakfastOpenTime->setObjectName("editBreakfastOpenTime");
        editBreakfastOpenTime->setGeometry(QRect(110, 40, 141, 31));
        editBreakfastOpenTime->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editBreakfastOpenTime->setEchoMode(QLineEdit::EchoMode::Normal);
        editBreakfastCloseTime = new QLineEdit(Breakfast_3);
        editBreakfastCloseTime->setObjectName("editBreakfastCloseTime");
        editBreakfastCloseTime->setGeometry(QRect(110, 80, 141, 31));
        editBreakfastCloseTime->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editBreakfastCloseTime->setEchoMode(QLineEdit::EchoMode::Normal);
        editBreakfastAppetizer = new QLineEdit(Breakfast_3);
        editBreakfastAppetizer->setObjectName("editBreakfastAppetizer");
        editBreakfastAppetizer->setGeometry(QRect(110, 120, 141, 31));
        editBreakfastAppetizer->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editBreakfastAppetizer->setEchoMode(QLineEdit::EchoMode::Normal);
        editBreakfastMainPlate = new QLineEdit(Breakfast_3);
        editBreakfastMainPlate->setObjectName("editBreakfastMainPlate");
        editBreakfastMainPlate->setGeometry(QRect(110, 160, 141, 31));
        editBreakfastMainPlate->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editBreakfastMainPlate->setEchoMode(QLineEdit::EchoMode::Normal);
        editBreakfastDessert = new QLineEdit(Breakfast_3);
        editBreakfastDessert->setObjectName("editBreakfastDessert");
        editBreakfastDessert->setGeometry(QRect(110, 200, 141, 31));
        editBreakfastDessert->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editBreakfastDessert->setEchoMode(QLineEdit::EchoMode::Normal);
        editBreakfastPrice = new QLineEdit(Breakfast_3);
        editBreakfastPrice->setObjectName("editBreakfastPrice");
        editBreakfastPrice->setGeometry(QRect(110, 240, 141, 31));
        editBreakfastPrice->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editBreakfastPrice->setEchoMode(QLineEdit::EchoMode::Normal);
        editBreakfastMealServed = new QLineEdit(Breakfast_3);
        editBreakfastMealServed->setObjectName("editBreakfastMealServed");
        editBreakfastMealServed->setGeometry(QRect(130, 280, 121, 31));
        editBreakfastMealServed->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editBreakfastMealServed->setEchoMode(QLineEdit::EchoMode::Normal);
        Breakfast_4 = new QGroupBox(modifyWin);
        Breakfast_4->setObjectName("Breakfast_4");
        Breakfast_4->setGeometry(QRect(260, 90, 251, 341));
        Breakfast_4->setFont(font2);
        Breakfast_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    /* Bold dark green border with rounded corners */\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    \n"
"    /* Pushes the interior content down so it doesn't overlap the title */\n"
"    margin-top: 14px;\n"
"    padding-top: 15px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    \n"
"    /* Header text formatting */\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    color: #2d6a2d;\n"
"    \n"
"    /* Clean, soft off-white/cream background to pop against the dark workspace */\n"
"    background-color: #f7faf6;\n"
"}\n"
"\n"
"/* Position and style the text title anchor on the top line */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 12px;\n"
"    padding-left: 6px;\n"
"    padding-right: 6px;\n"
"    \n"
"    /* Matches the parent container's solid background color to cut through the border line cleanly */\n"
"    background-color: #f7faf6; \n"
"}"));
        Titel_39 = new QLabel(Breakfast_4);
        Titel_39->setObjectName("Titel_39");
        Titel_39->setGeometry(QRect(0, 20, 111, 71));
        Titel_39->setFont(font);
        Titel_39->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_40 = new QLabel(Breakfast_4);
        Titel_40->setObjectName("Titel_40");
        Titel_40->setGeometry(QRect(0, 60, 111, 71));
        Titel_40->setFont(font);
        Titel_40->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_41 = new QLabel(Breakfast_4);
        Titel_41->setObjectName("Titel_41");
        Titel_41->setGeometry(QRect(0, 100, 111, 71));
        Titel_41->setFont(font);
        Titel_41->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_42 = new QLabel(Breakfast_4);
        Titel_42->setObjectName("Titel_42");
        Titel_42->setGeometry(QRect(0, 140, 111, 71));
        Titel_42->setFont(font);
        Titel_42->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_43 = new QLabel(Breakfast_4);
        Titel_43->setObjectName("Titel_43");
        Titel_43->setGeometry(QRect(0, 180, 111, 71));
        Titel_43->setFont(font);
        Titel_43->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_44 = new QLabel(Breakfast_4);
        Titel_44->setObjectName("Titel_44");
        Titel_44->setGeometry(QRect(0, 220, 111, 71));
        Titel_44->setFont(font);
        Titel_44->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_45 = new QLabel(Breakfast_4);
        Titel_45->setObjectName("Titel_45");
        Titel_45->setGeometry(QRect(0, 260, 121, 71));
        Titel_45->setFont(font);
        Titel_45->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        editLunchOpenTime = new QLineEdit(Breakfast_4);
        editLunchOpenTime->setObjectName("editLunchOpenTime");
        editLunchOpenTime->setGeometry(QRect(110, 40, 141, 31));
        editLunchOpenTime->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editLunchOpenTime->setEchoMode(QLineEdit::EchoMode::Normal);
        editLunchCloseTime = new QLineEdit(Breakfast_4);
        editLunchCloseTime->setObjectName("editLunchCloseTime");
        editLunchCloseTime->setGeometry(QRect(110, 80, 141, 31));
        editLunchCloseTime->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editLunchCloseTime->setEchoMode(QLineEdit::EchoMode::Normal);
        editLunchAppetizer = new QLineEdit(Breakfast_4);
        editLunchAppetizer->setObjectName("editLunchAppetizer");
        editLunchAppetizer->setGeometry(QRect(110, 120, 141, 31));
        editLunchAppetizer->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editLunchAppetizer->setEchoMode(QLineEdit::EchoMode::Normal);
        editLunchMainPlate = new QLineEdit(Breakfast_4);
        editLunchMainPlate->setObjectName("editLunchMainPlate");
        editLunchMainPlate->setGeometry(QRect(110, 160, 141, 31));
        editLunchMainPlate->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editLunchMainPlate->setEchoMode(QLineEdit::EchoMode::Normal);
        editLunchDessert = new QLineEdit(Breakfast_4);
        editLunchDessert->setObjectName("editLunchDessert");
        editLunchDessert->setGeometry(QRect(110, 200, 141, 31));
        editLunchDessert->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editLunchDessert->setEchoMode(QLineEdit::EchoMode::Normal);
        editLunchPrice = new QLineEdit(Breakfast_4);
        editLunchPrice->setObjectName("editLunchPrice");
        editLunchPrice->setGeometry(QRect(110, 240, 141, 31));
        editLunchPrice->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editLunchPrice->setEchoMode(QLineEdit::EchoMode::Normal);
        editLunchMealServed = new QLineEdit(Breakfast_4);
        editLunchMealServed->setObjectName("editLunchMealServed");
        editLunchMealServed->setGeometry(QRect(130, 280, 121, 31));
        editLunchMealServed->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editLunchMealServed->setEchoMode(QLineEdit::EchoMode::Normal);
        Breakfast_5 = new QGroupBox(modifyWin);
        Breakfast_5->setObjectName("Breakfast_5");
        Breakfast_5->setGeometry(QRect(510, 90, 261, 341));
        Breakfast_5->setFont(font2);
        Breakfast_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    /* Bold dark green border with rounded corners */\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    \n"
"    /* Pushes the interior content down so it doesn't overlap the title */\n"
"    margin-top: 14px;\n"
"    padding-top: 15px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    \n"
"    /* Header text formatting */\n"
"    font-weight: bold;\n"
"    font-size: 13px;\n"
"    color: #2d6a2d;\n"
"    \n"
"    /* Clean, soft off-white/cream background to pop against the dark workspace */\n"
"    background-color: #f7faf6;\n"
"}\n"
"\n"
"/* Position and style the text title anchor on the top line */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left: 12px;\n"
"    padding-left: 6px;\n"
"    padding-right: 6px;\n"
"    \n"
"    /* Matches the parent container's solid background color to cut through the border line cleanly */\n"
"    background-color: #f7faf6; \n"
"}"));
        Titel_46 = new QLabel(Breakfast_5);
        Titel_46->setObjectName("Titel_46");
        Titel_46->setGeometry(QRect(0, 20, 111, 71));
        Titel_46->setFont(font);
        Titel_46->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_47 = new QLabel(Breakfast_5);
        Titel_47->setObjectName("Titel_47");
        Titel_47->setGeometry(QRect(0, 60, 111, 71));
        Titel_47->setFont(font);
        Titel_47->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_48 = new QLabel(Breakfast_5);
        Titel_48->setObjectName("Titel_48");
        Titel_48->setGeometry(QRect(0, 100, 111, 71));
        Titel_48->setFont(font);
        Titel_48->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_49 = new QLabel(Breakfast_5);
        Titel_49->setObjectName("Titel_49");
        Titel_49->setGeometry(QRect(0, 140, 111, 71));
        Titel_49->setFont(font);
        Titel_49->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_50 = new QLabel(Breakfast_5);
        Titel_50->setObjectName("Titel_50");
        Titel_50->setGeometry(QRect(0, 180, 111, 71));
        Titel_50->setFont(font);
        Titel_50->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_51 = new QLabel(Breakfast_5);
        Titel_51->setObjectName("Titel_51");
        Titel_51->setGeometry(QRect(0, 220, 111, 71));
        Titel_51->setFont(font);
        Titel_51->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        Titel_52 = new QLabel(Breakfast_5);
        Titel_52->setObjectName("Titel_52");
        Titel_52->setGeometry(QRect(0, 260, 121, 71));
        Titel_52->setFont(font);
        Titel_52->setStyleSheet(QString::fromUtf8("background-color: transparent; color: #004d00; padding: 5px; border-image: none; border: none; font-size: 20px;\n"
""));
        editDinnerOpenTime = new QLineEdit(Breakfast_5);
        editDinnerOpenTime->setObjectName("editDinnerOpenTime");
        editDinnerOpenTime->setGeometry(QRect(110, 40, 141, 31));
        editDinnerOpenTime->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editDinnerOpenTime->setEchoMode(QLineEdit::EchoMode::Normal);
        editDinnerCloseTime = new QLineEdit(Breakfast_5);
        editDinnerCloseTime->setObjectName("editDinnerCloseTime");
        editDinnerCloseTime->setGeometry(QRect(110, 80, 141, 31));
        editDinnerCloseTime->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editDinnerCloseTime->setEchoMode(QLineEdit::EchoMode::Normal);
        editDinnerAppetizer = new QLineEdit(Breakfast_5);
        editDinnerAppetizer->setObjectName("editDinnerAppetizer");
        editDinnerAppetizer->setGeometry(QRect(110, 120, 141, 31));
        editDinnerAppetizer->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editDinnerAppetizer->setEchoMode(QLineEdit::EchoMode::Normal);
        editDinnerMainPlate = new QLineEdit(Breakfast_5);
        editDinnerMainPlate->setObjectName("editDinnerMainPlate");
        editDinnerMainPlate->setGeometry(QRect(110, 160, 141, 31));
        editDinnerMainPlate->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editDinnerMainPlate->setEchoMode(QLineEdit::EchoMode::Normal);
        editDinnerDessert = new QLineEdit(Breakfast_5);
        editDinnerDessert->setObjectName("editDinnerDessert");
        editDinnerDessert->setGeometry(QRect(110, 200, 141, 31));
        editDinnerDessert->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editDinnerDessert->setEchoMode(QLineEdit::EchoMode::Normal);
        editDinnerPrice = new QLineEdit(Breakfast_5);
        editDinnerPrice->setObjectName("editDinnerPrice");
        editDinnerPrice->setGeometry(QRect(110, 240, 141, 31));
        editDinnerPrice->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editDinnerPrice->setEchoMode(QLineEdit::EchoMode::Normal);
        editDinnerMealServed = new QLineEdit(Breakfast_5);
        editDinnerMealServed->setObjectName("editDinnerMealServed");
        editDinnerMealServed->setGeometry(QRect(130, 280, 121, 31));
        editDinnerMealServed->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #2d6a2d;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 13px;\n"
"    background-color: rgba(255,255,255,180);\n"
"	color: #2d6a2d;\n"
"}"));
        editDinnerMealServed->setEchoMode(QLineEdit::EchoMode::Normal);
        btnReturn_4 = new QPushButton(modifyWin);
        btnReturn_4->setObjectName("btnReturn_4");
        btnReturn_4->setGeometry(QRect(690, 0, 81, 41));
        btnReturn_4->setFont(font1);
        btnReturn_4->setStyleSheet(QString::fromUtf8("background-color: #ededed; color: #004d00; padding: 5px;  border-image: none; border: none; border-radius: 15px; font-size:25px;"));
        btnSave = new QPushButton(modifyWin);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(690, 60, 81, 41));
        btnSave->setFont(font1);
        btnSave->setStyleSheet(QString::fromUtf8("background-color: #004d00; color: white; padding: 5px;  border-image: none; border: none; border-radius: 15px; font-size:25px;"));
        TabWidget->addTab(modifyWin, QString());

        verticalLayout_3->addWidget(TabWidget);


        retranslateUi(RestaurantForm);

        TabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(RestaurantForm);
    } // setupUi

    void retranslateUi(QWidget *RestaurantForm)
    {
        RestaurantForm->setWindowTitle(QCoreApplication::translate("RestaurantForm", "Form", nullptr));
        Titel->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\">Restaurant Management</p></body></html>", nullptr));
        Breakfast->setTitle(QCoreApplication::translate("RestaurantForm", "Breakfast", nullptr));
        Titel_2->setText(QCoreApplication::translate("RestaurantForm", "Open Time", nullptr));
        Titel_3->setText(QCoreApplication::translate("RestaurantForm", "Close Time", nullptr));
        Titel_6->setText(QCoreApplication::translate("RestaurantForm", "Appetizer", nullptr));
        Titel_7->setText(QCoreApplication::translate("RestaurantForm", "Main Plate", nullptr));
        Titel_8->setText(QCoreApplication::translate("RestaurantForm", "Dessert", nullptr));
        Titel_9->setText(QCoreApplication::translate("RestaurantForm", "Price", nullptr));
        Titel_10->setText(QCoreApplication::translate("RestaurantForm", "Meal Served", nullptr));
        BreakfastOpenTime->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        BreakfastCloseTime->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        BreakfastAppetizer->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        BreakfastMainPlate->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        BreakfastDessert->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        BreakfastPrice->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        BreakfastMealServed->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        Breakfast_2->setTitle(QCoreApplication::translate("RestaurantForm", "Lunch", nullptr));
        Lunch->setText(QCoreApplication::translate("RestaurantForm", "Open Time", nullptr));
        Titel_12->setText(QCoreApplication::translate("RestaurantForm", "Close Time", nullptr));
        Titel_13->setText(QCoreApplication::translate("RestaurantForm", "Appetizer", nullptr));
        Titel_14->setText(QCoreApplication::translate("RestaurantForm", "Main Plate", nullptr));
        Titel_15->setText(QCoreApplication::translate("RestaurantForm", "Dessert", nullptr));
        Titel_16->setText(QCoreApplication::translate("RestaurantForm", "Price", nullptr));
        Titel_17->setText(QCoreApplication::translate("RestaurantForm", "Meal Served", nullptr));
        LunchOpenTime->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LunchCloseTime->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LunchAppetizer->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LunchMainPlate->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LunchDessert->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LunchPrice->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LunchMealServed->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        Dinner->setTitle(QCoreApplication::translate("RestaurantForm", "Dinner", nullptr));
        Titel_18->setText(QCoreApplication::translate("RestaurantForm", "Open Time", nullptr));
        Titel_19->setText(QCoreApplication::translate("RestaurantForm", "Close Time", nullptr));
        Titel_20->setText(QCoreApplication::translate("RestaurantForm", "Appetizer", nullptr));
        Titel_21->setText(QCoreApplication::translate("RestaurantForm", "Main Plate", nullptr));
        Titel_22->setText(QCoreApplication::translate("RestaurantForm", "Dessert", nullptr));
        Titel_23->setText(QCoreApplication::translate("RestaurantForm", "Price", nullptr));
        Titel_24->setText(QCoreApplication::translate("RestaurantForm", "Meal Served", nullptr));
        DinnerOpenTime->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DinnerCloseTime->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DinnerAppetizer->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DinnerMainPlate->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DinnerDessert->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DinnerPrice->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        DinnerMealServed->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        Titel_25->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\">Select Day</p></body></html>", nullptr));
        dayList->setItemText(0, QCoreApplication::translate("RestaurantForm", "Sunday", nullptr));
        dayList->setItemText(1, QCoreApplication::translate("RestaurantForm", "Monday", nullptr));
        dayList->setItemText(2, QCoreApplication::translate("RestaurantForm", "Tuesday", nullptr));
        dayList->setItemText(3, QCoreApplication::translate("RestaurantForm", "Wednesday", nullptr));
        dayList->setItemText(4, QCoreApplication::translate("RestaurantForm", "Thirsday", nullptr));
        dayList->setItemText(5, QCoreApplication::translate("RestaurantForm", "Friday", nullptr));
        dayList->setItemText(6, QCoreApplication::translate("RestaurantForm", "Saturday", nullptr));

        btnReturn_8->setText(QCoreApplication::translate("RestaurantForm", "return", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(menuWin), QCoreApplication::translate("RestaurantForm", "Tab 1", nullptr));
        Titel_11->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\">Enter The Student Id</p></body></html>", nullptr));
        editStudentId->setPlaceholderText(QCoreApplication::translate("RestaurantForm", "Enter the student Id...", nullptr));
        Titel_26->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\">Choose The Meal</p></body></html>", nullptr));
        theMealToTake->setItemText(0, QCoreApplication::translate("RestaurantForm", "Breakfast", nullptr));
        theMealToTake->setItemText(1, QCoreApplication::translate("RestaurantForm", "Lunch", nullptr));
        theMealToTake->setItemText(2, QCoreApplication::translate("RestaurantForm", "Dinner", nullptr));

        btnTakeTheMeal->setText(QCoreApplication::translate("RestaurantForm", "Take The Meal", nullptr));
        Titel_27->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p>The Meal Number:</p></body></html>", nullptr));
        theMealNumber->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        btnReturn_7->setText(QCoreApplication::translate("RestaurantForm", "return", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(takeWIn), QCoreApplication::translate("RestaurantForm", "Tab 2", nullptr));
        Titel_28->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\">Enter The Student Id</p></body></html>", nullptr));
        editStudentId_2->setPlaceholderText(QCoreApplication::translate("RestaurantForm", "Enter the student Id...", nullptr));
        Titel_29->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\">Enter The Amount(DA)</p></body></html>", nullptr));
        btnRecharge->setText(QCoreApplication::translate("RestaurantForm", "Recharge", nullptr));
        Titel_30->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p>The New Balance:</p></body></html>", nullptr));
        theNewBalance->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        btnReturn_6->setText(QCoreApplication::translate("RestaurantForm", "return", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(rechargeWin), QCoreApplication::translate("RestaurantForm", "Page", nullptr));
        Titel_31->setText(QCoreApplication::translate("RestaurantForm", "<html><head/><body><p align=\"center\">Select Day</p></body></html>", nullptr));
        dayList_2->setItemText(0, QCoreApplication::translate("RestaurantForm", "Sunday", nullptr));
        dayList_2->setItemText(1, QCoreApplication::translate("RestaurantForm", "Monday", nullptr));
        dayList_2->setItemText(2, QCoreApplication::translate("RestaurantForm", "Tuesday", nullptr));
        dayList_2->setItemText(3, QCoreApplication::translate("RestaurantForm", "Wednesday", nullptr));
        dayList_2->setItemText(4, QCoreApplication::translate("RestaurantForm", "Thirsday", nullptr));
        dayList_2->setItemText(5, QCoreApplication::translate("RestaurantForm", "Friday", nullptr));
        dayList_2->setItemText(6, QCoreApplication::translate("RestaurantForm", "Saturday", nullptr));

        Breakfast_3->setTitle(QCoreApplication::translate("RestaurantForm", "Breakfast", nullptr));
        Titel_32->setText(QCoreApplication::translate("RestaurantForm", "Open Time", nullptr));
        Titel_33->setText(QCoreApplication::translate("RestaurantForm", "Close Time", nullptr));
        Titel_34->setText(QCoreApplication::translate("RestaurantForm", "Appetizer", nullptr));
        Titel_35->setText(QCoreApplication::translate("RestaurantForm", "Main Plate", nullptr));
        Titel_36->setText(QCoreApplication::translate("RestaurantForm", "Dessert", nullptr));
        Titel_37->setText(QCoreApplication::translate("RestaurantForm", "Price", nullptr));
        Titel_38->setText(QCoreApplication::translate("RestaurantForm", "Meal Served", nullptr));
        editBreakfastOpenTime->setPlaceholderText(QString());
        Breakfast_4->setTitle(QCoreApplication::translate("RestaurantForm", "Breakfast", nullptr));
        Titel_39->setText(QCoreApplication::translate("RestaurantForm", "Open Time", nullptr));
        Titel_40->setText(QCoreApplication::translate("RestaurantForm", "Close Time", nullptr));
        Titel_41->setText(QCoreApplication::translate("RestaurantForm", "Appetizer", nullptr));
        Titel_42->setText(QCoreApplication::translate("RestaurantForm", "Main Plate", nullptr));
        Titel_43->setText(QCoreApplication::translate("RestaurantForm", "Dessert", nullptr));
        Titel_44->setText(QCoreApplication::translate("RestaurantForm", "Price", nullptr));
        Titel_45->setText(QCoreApplication::translate("RestaurantForm", "Meal Served", nullptr));
        editLunchOpenTime->setPlaceholderText(QString());
        Breakfast_5->setTitle(QCoreApplication::translate("RestaurantForm", "Breakfast", nullptr));
        Titel_46->setText(QCoreApplication::translate("RestaurantForm", "Open Time", nullptr));
        Titel_47->setText(QCoreApplication::translate("RestaurantForm", "Close Time", nullptr));
        Titel_48->setText(QCoreApplication::translate("RestaurantForm", "Appetizer", nullptr));
        Titel_49->setText(QCoreApplication::translate("RestaurantForm", "Main Plate", nullptr));
        Titel_50->setText(QCoreApplication::translate("RestaurantForm", "Dessert", nullptr));
        Titel_51->setText(QCoreApplication::translate("RestaurantForm", "Price", nullptr));
        Titel_52->setText(QCoreApplication::translate("RestaurantForm", "Meal Served", nullptr));
        editDinnerOpenTime->setPlaceholderText(QString());
        btnReturn_4->setText(QCoreApplication::translate("RestaurantForm", "return", nullptr));
        btnSave->setText(QCoreApplication::translate("RestaurantForm", "Save", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(modifyWin), QCoreApplication::translate("RestaurantForm", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RestaurantForm: public Ui_RestaurantForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANTFORM_H
