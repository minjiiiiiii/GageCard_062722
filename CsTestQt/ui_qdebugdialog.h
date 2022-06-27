/********************************************************************************
** Form generated from reading UI file 'qdebugdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDEBUGDIALOG_H
#define UI_QDEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DebugDialog
{
public:
    QRadioButton *radioButton_GageReg;
    QRadioButton *radioButton_NiosSpi;
    QLineEdit *lineEdit_Address;
    QLineEdit *lineEdit_ValWrite;
    QLineEdit *lineEdit_ValRead;
    QLabel *label_Address;
    QLabel *label_Value;
    QLabel *label_Status;
    QPushButton *pushButton_Write;
    QPushButton *pushButton_Read;
    QTextEdit *textEdit_Status;

    void setupUi(QDialog *DebugDialog)
    {
        if (DebugDialog->objectName().isEmpty())
            DebugDialog->setObjectName(QStringLiteral("DebugDialog"));
        DebugDialog->setWindowModality(Qt::NonModal);
        DebugDialog->resize(397, 315);
        DebugDialog->setModal(false);
        radioButton_GageReg = new QRadioButton(DebugDialog);
        radioButton_GageReg->setObjectName(QStringLiteral("radioButton_GageReg"));
        radioButton_GageReg->setGeometry(QRect(30, 30, 91, 17));
        radioButton_GageReg->setChecked(true);
        radioButton_NiosSpi = new QRadioButton(DebugDialog);
        radioButton_NiosSpi->setObjectName(QStringLiteral("radioButton_NiosSpi"));
        radioButton_NiosSpi->setGeometry(QRect(30, 60, 82, 17));
        lineEdit_Address = new QLineEdit(DebugDialog);
        lineEdit_Address->setObjectName(QStringLiteral("lineEdit_Address"));
        lineEdit_Address->setGeometry(QRect(90, 100, 191, 20));
        lineEdit_ValWrite = new QLineEdit(DebugDialog);
        lineEdit_ValWrite->setObjectName(QStringLiteral("lineEdit_ValWrite"));
        lineEdit_ValWrite->setGeometry(QRect(90, 130, 191, 20));
        lineEdit_ValRead = new QLineEdit(DebugDialog);
        lineEdit_ValRead->setObjectName(QStringLiteral("lineEdit_ValRead"));
        lineEdit_ValRead->setGeometry(QRect(90, 160, 191, 20));
        lineEdit_ValRead->setReadOnly(true);
        label_Address = new QLabel(DebugDialog);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setGeometry(QRect(30, 100, 46, 13));
        label_Value = new QLabel(DebugDialog);
        label_Value->setObjectName(QStringLiteral("label_Value"));
        label_Value->setGeometry(QRect(30, 130, 46, 13));
        label_Status = new QLabel(DebugDialog);
        label_Status->setObjectName(QStringLiteral("label_Status"));
        label_Status->setGeometry(QRect(30, 200, 46, 13));
        pushButton_Write = new QPushButton(DebugDialog);
        pushButton_Write->setObjectName(QStringLiteral("pushButton_Write"));
        pushButton_Write->setGeometry(QRect(290, 130, 75, 23));
        pushButton_Read = new QPushButton(DebugDialog);
        pushButton_Read->setObjectName(QStringLiteral("pushButton_Read"));
        pushButton_Read->setGeometry(QRect(290, 160, 75, 23));
        textEdit_Status = new QTextEdit(DebugDialog);
        textEdit_Status->setObjectName(QStringLiteral("textEdit_Status"));
        textEdit_Status->setGeometry(QRect(90, 200, 271, 41));
        textEdit_Status->setReadOnly(true);

        retranslateUi(DebugDialog);
        QObject::connect(radioButton_GageReg, SIGNAL(toggled(bool)), DebugDialog, SLOT(s_ChangeMode(bool)));
        QObject::connect(pushButton_Write, SIGNAL(clicked()), DebugDialog, SLOT(s_WriteReg()));
        QObject::connect(pushButton_Read, SIGNAL(clicked()), DebugDialog, SLOT(s_ReadReg()));

        QMetaObject::connectSlotsByName(DebugDialog);
    } // setupUi

    void retranslateUi(QDialog *DebugDialog)
    {
        DebugDialog->setWindowTitle(QApplication::translate("DebugDialog", "Debug register", Q_NULLPTR));
        radioButton_GageReg->setText(QApplication::translate("DebugDialog", "Gage Register", Q_NULLPTR));
        radioButton_NiosSpi->setText(QApplication::translate("DebugDialog", "NIOS / SPI", Q_NULLPTR));
        label_Address->setText(QApplication::translate("DebugDialog", "Address", Q_NULLPTR));
        label_Value->setText(QApplication::translate("DebugDialog", "Value", Q_NULLPTR));
        label_Status->setText(QApplication::translate("DebugDialog", "Status", Q_NULLPTR));
        pushButton_Write->setText(QApplication::translate("DebugDialog", "Write", Q_NULLPTR));
        pushButton_Read->setText(QApplication::translate("DebugDialog", "Read", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DebugDialog: public Ui_DebugDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDEBUGDIALOG_H
