/********************************************************************************
** Form generated from reading UI file 'qNiosSpiCmddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QNIOSSPICMDDIALOG_H
#define UI_QNIOSSPICMDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NiosSpiCmdDialog
{
public:
    QLineEdit *lineEdit_Data;
    QLineEdit *lineEdit_DataRead;
    QLabel *label_Command;
    QLabel *label_Data;
    QLabel *label_Status;
    QPushButton *pushButton_Send;
    QTextEdit *textEdit_Status;
    QCheckBox *checkBox_ReadData;
    QSpinBox *spinBox_CardIndex;
    QLabel *label_CardIndex;
    QSpinBox *spinBox_Timeout;
    QLabel *label_Timeout;
    QLabel *label_DataRead;
    QComboBox *comboBox_Cmd;
    QLabel *label;
    QLabel *label_DataRead_2;

    void setupUi(QDialog *NiosSpiCmdDialog)
    {
        if (NiosSpiCmdDialog->objectName().isEmpty())
            NiosSpiCmdDialog->setObjectName(QStringLiteral("NiosSpiCmdDialog"));
        NiosSpiCmdDialog->setWindowModality(Qt::NonModal);
        NiosSpiCmdDialog->resize(496, 336);
        NiosSpiCmdDialog->setModal(false);
        lineEdit_Data = new QLineEdit(NiosSpiCmdDialog);
        lineEdit_Data->setObjectName(QStringLiteral("lineEdit_Data"));
        lineEdit_Data->setGeometry(QRect(150, 90, 191, 20));
        lineEdit_DataRead = new QLineEdit(NiosSpiCmdDialog);
        lineEdit_DataRead->setObjectName(QStringLiteral("lineEdit_DataRead"));
        lineEdit_DataRead->setGeometry(QRect(150, 250, 191, 20));
        lineEdit_DataRead->setReadOnly(true);
        label_Command = new QLabel(NiosSpiCmdDialog);
        label_Command->setObjectName(QStringLiteral("label_Command"));
        label_Command->setGeometry(QRect(30, 50, 46, 13));
        label_Data = new QLabel(NiosSpiCmdDialog);
        label_Data->setObjectName(QStringLiteral("label_Data"));
        label_Data->setGeometry(QRect(30, 90, 46, 13));
        label_Status = new QLabel(NiosSpiCmdDialog);
        label_Status->setObjectName(QStringLiteral("label_Status"));
        label_Status->setGeometry(QRect(30, 200, 46, 13));
        pushButton_Send = new QPushButton(NiosSpiCmdDialog);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(220, 290, 75, 23));
        textEdit_Status = new QTextEdit(NiosSpiCmdDialog);
        textEdit_Status->setObjectName(QStringLiteral("textEdit_Status"));
        textEdit_Status->setGeometry(QRect(150, 200, 271, 41));
        textEdit_Status->setReadOnly(true);
        checkBox_ReadData = new QCheckBox(NiosSpiCmdDialog);
        checkBox_ReadData->setObjectName(QStringLiteral("checkBox_ReadData"));
        checkBox_ReadData->setGeometry(QRect(360, 50, 131, 17));
        checkBox_ReadData->setChecked(true);
        spinBox_CardIndex = new QSpinBox(NiosSpiCmdDialog);
        spinBox_CardIndex->setObjectName(QStringLiteral("spinBox_CardIndex"));
        spinBox_CardIndex->setGeometry(QRect(150, 120, 81, 22));
        spinBox_CardIndex->setAlignment(Qt::AlignCenter);
        spinBox_CardIndex->setValue(1);
        label_CardIndex = new QLabel(NiosSpiCmdDialog);
        label_CardIndex->setObjectName(QStringLiteral("label_CardIndex"));
        label_CardIndex->setGeometry(QRect(30, 120, 61, 16));
        spinBox_Timeout = new QSpinBox(NiosSpiCmdDialog);
        spinBox_Timeout->setObjectName(QStringLiteral("spinBox_Timeout"));
        spinBox_Timeout->setGeometry(QRect(150, 160, 81, 22));
        spinBox_Timeout->setAlignment(Qt::AlignCenter);
        spinBox_Timeout->setMaximum(1000000);
        spinBox_Timeout->setValue(10);
        label_Timeout = new QLabel(NiosSpiCmdDialog);
        label_Timeout->setObjectName(QStringLiteral("label_Timeout"));
        label_Timeout->setGeometry(QRect(30, 160, 61, 16));
        label_DataRead = new QLabel(NiosSpiCmdDialog);
        label_DataRead->setObjectName(QStringLiteral("label_DataRead"));
        label_DataRead->setGeometry(QRect(30, 250, 81, 16));
        comboBox_Cmd = new QComboBox(NiosSpiCmdDialog);
        comboBox_Cmd->setObjectName(QStringLiteral("comboBox_Cmd"));
        comboBox_Cmd->setGeometry(QRect(150, 50, 191, 22));
        comboBox_Cmd->setEditable(true);
        label = new QLabel(NiosSpiCmdDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 161, 16));
        label_DataRead_2 = new QLabel(NiosSpiCmdDialog);
        label_DataRead_2->setObjectName(QStringLiteral("label_DataRead_2"));
        label_DataRead_2->setGeometry(QRect(130, 250, 16, 16));

        retranslateUi(NiosSpiCmdDialog);
        QObject::connect(pushButton_Send, SIGNAL(clicked()), NiosSpiCmdDialog, SLOT(s_SendCmd()));

        QMetaObject::connectSlotsByName(NiosSpiCmdDialog);
    } // setupUi

    void retranslateUi(QDialog *NiosSpiCmdDialog)
    {
        NiosSpiCmdDialog->setWindowTitle(QApplication::translate("NiosSpiCmdDialog", "Send NIOS/SPI command", Q_NULLPTR));
        label_Command->setText(QApplication::translate("NiosSpiCmdDialog", "Command", Q_NULLPTR));
        label_Data->setText(QApplication::translate("NiosSpiCmdDialog", "Data", Q_NULLPTR));
        label_Status->setText(QApplication::translate("NiosSpiCmdDialog", "Status", Q_NULLPTR));
        pushButton_Send->setText(QApplication::translate("NiosSpiCmdDialog", "Send", Q_NULLPTR));
        checkBox_ReadData->setText(QApplication::translate("NiosSpiCmdDialog", "Read data from NIOS", Q_NULLPTR));
        label_CardIndex->setText(QApplication::translate("NiosSpiCmdDialog", "Card index", Q_NULLPTR));
        label_Timeout->setText(QApplication::translate("NiosSpiCmdDialog", "Timeout (ms)", Q_NULLPTR));
        label_DataRead->setText(QApplication::translate("NiosSpiCmdDialog", "Data from NIOS", Q_NULLPTR));
        label->setText(QApplication::translate("NiosSpiCmdDialog", "Use \"0x\" prefix for hexadecimal", Q_NULLPTR));
        label_DataRead_2->setText(QApplication::translate("NiosSpiCmdDialog", "0x", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NiosSpiCmdDialog: public Ui_NiosSpiCmdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QNIOSSPICMDDIALOG_H
