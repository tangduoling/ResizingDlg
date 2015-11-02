/********************************************************************************
** Form generated from reading UI file 'extenddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENDDLG_H
#define UI_EXTENDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ExtendDlgClass
{
public:

    void setupUi(QDialog *ExtendDlgClass)
    {
        if (ExtendDlgClass->objectName().isEmpty())
            ExtendDlgClass->setObjectName(QStringLiteral("ExtendDlgClass"));
        ExtendDlgClass->resize(600, 400);

        retranslateUi(ExtendDlgClass);

        QMetaObject::connectSlotsByName(ExtendDlgClass);
    } // setupUi

    void retranslateUi(QDialog *ExtendDlgClass)
    {
        ExtendDlgClass->setWindowTitle(QApplication::translate("ExtendDlgClass", "ExtendDlg", 0));
    } // retranslateUi

};

namespace Ui {
    class ExtendDlgClass: public Ui_ExtendDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENDDLG_H
