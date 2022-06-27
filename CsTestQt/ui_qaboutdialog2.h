/********************************************************************************
** Form generated from reading UI file 'qaboutdialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QABOUTDIALOG2_H
#define UI_QABOUTDIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_QAboutDialog
{
public:

    void setupUi(QDialog *QAboutDialog)
    {
        if (QAboutDialog->objectName().isEmpty())
            QAboutDialog->setObjectName(QStringLiteral("QAboutDialog"));
        QAboutDialog->resize(400, 300);

        retranslateUi(QAboutDialog);

        QMetaObject::connectSlotsByName(QAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *QAboutDialog)
    {
        QAboutDialog->setWindowTitle(QApplication::translate("QAboutDialog", "QAboutDialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QAboutDialog: public Ui_QAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QABOUTDIALOG2_H
