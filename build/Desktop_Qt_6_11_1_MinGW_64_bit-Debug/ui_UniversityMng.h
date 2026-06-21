/********************************************************************************
** Form generated from reading UI file 'UniversityMng.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNIVERSITYMNG_H
#define UI_UNIVERSITYMNG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UniversityMng
{
public:

    void setupUi(QWidget *UniversityMng)
    {
        if (UniversityMng->objectName().isEmpty())
            UniversityMng->setObjectName("UniversityMng");
        UniversityMng->resize(400, 300);

        retranslateUi(UniversityMng);

        QMetaObject::connectSlotsByName(UniversityMng);
    } // setupUi

    void retranslateUi(QWidget *UniversityMng)
    {
        UniversityMng->setWindowTitle(QCoreApplication::translate("UniversityMng", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UniversityMng: public Ui_UniversityMng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNIVERSITYMNG_H
