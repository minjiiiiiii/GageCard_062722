/********************************************************************************
** Form generated from reading UI file 'qReadWriteRegsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QREADWRITEREGSDIALOG_H
#define UI_QREADWRITEREGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ReadWriteRegsDialog
{
public:
    QLineEdit *lineEdit_Address;
    QLineEdit *lineEdit_ValWrite;
    QLineEdit *lineEdit_ValRead;
    QLabel *label_Address;
    QLabel *label_Value;
    QLabel *label_Status;
    QPushButton *pushButton_Write;
    QPushButton *pushButton_Read;
    QTextEdit *textEdit_Status;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ReadWriteRegsDialog)
    {
        if (ReadWriteRegsDialog->objectName().isEmpty())
            ReadWriteRegsDialog->setObjectName(QStringLiteral("ReadWriteRegsDialog"));
        ReadWriteRegsDialog->setWindowModality(Qt::NonModal);
        ReadWriteRegsDialog->resize(397, 252);
        ReadWriteRegsDialog->setModal(false);
        lineEdit_Address = new QLineEdit(ReadWriteRegsDialog);
        lineEdit_Address->setObjectName(QStringLiteral("lineEdit_Address"));
        lineEdit_Address->setGeometry(QRect(90, 80, 191, 20));
        lineEdit_ValWrite = new QLineEdit(ReadWriteRegsDialog);
        lineEdit_ValWrite->setObjectName(QStringLiteral("lineEdit_ValWrite"));
        lineEdit_ValWrite->setGeometry(QRect(90, 110, 191, 20));
        lineEdit_ValRead = new QLineEdit(ReadWriteRegsDialog);
        lineEdit_ValRead->setObjectName(QStringLiteral("lineEdit_ValRead"));
        lineEdit_ValRead->setGeometry(QRect(90, 140, 191, 20));
        QPalette palette;
        QBrush brush(QColor(230, 230, 230, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_ValRead->setPalette(palette);
        label_Address = new QLabel(ReadWriteRegsDialog);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setGeometry(QRect(30, 80, 46, 13));
        label_Value = new QLabel(ReadWriteRegsDialog);
        label_Value->setObjectName(QStringLiteral("label_Value"));
        label_Value->setGeometry(QRect(30, 110, 46, 13));
        label_Status = new QLabel(ReadWriteRegsDialog);
        label_Status->setObjectName(QStringLiteral("label_Status"));
        label_Status->setGeometry(QRect(30, 180, 46, 13));
        pushButton_Write = new QPushButton(ReadWriteRegsDialog);
        pushButton_Write->setObjectName(QStringLiteral("pushButton_Write"));
        pushButton_Write->setGeometry(QRect(290, 110, 75, 23));
        pushButton_Read = new QPushButton(ReadWriteRegsDialog);
        pushButton_Read->setObjectName(QStringLiteral("pushButton_Read"));
        pushButton_Read->setGeometry(QRect(290, 140, 75, 23));
        textEdit_Status = new QTextEdit(ReadWriteRegsDialog);
        textEdit_Status->setObjectName(QStringLiteral("textEdit_Status"));
        textEdit_Status->setGeometry(QRect(90, 180, 271, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textEdit_Status->setPalette(palette1);
        textEdit_Status->setReadOnly(true);
        label = new QLabel(ReadWriteRegsDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 161, 16));
        label_2 = new QLabel(ReadWriteRegsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 140, 16, 16));

        retranslateUi(ReadWriteRegsDialog);
        QObject::connect(pushButton_Write, SIGNAL(clicked()), ReadWriteRegsDialog, SLOT(s_WriteReg()));
        QObject::connect(pushButton_Read, SIGNAL(clicked()), ReadWriteRegsDialog, SLOT(s_ReadReg()));

        QMetaObject::connectSlotsByName(ReadWriteRegsDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadWriteRegsDialog)
    {
        ReadWriteRegsDialog->setWindowTitle(QApplication::translate("ReadWriteRegsDialog", "Read/Write registers", Q_NULLPTR));
        label_Address->setText(QApplication::translate("ReadWriteRegsDialog", "Address", Q_NULLPTR));
        label_Value->setText(QApplication::translate("ReadWriteRegsDialog", "Value", Q_NULLPTR));
        label_Status->setText(QApplication::translate("ReadWriteRegsDialog", "Status", Q_NULLPTR));
        pushButton_Write->setText(QApplication::translate("ReadWriteRegsDialog", "Write", Q_NULLPTR));
        pushButton_Read->setText(QApplication::translate("ReadWriteRegsDialog", "Read", Q_NULLPTR));
        label->setText(QApplication::translate("ReadWriteRegsDialog", "Use \"0x\" prefix for hexadecimal", Q_NULLPTR));
        label_2->setText(QApplication::translate("ReadWriteRegsDialog", "0x", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReadWriteRegsDialog: public Ui_ReadWriteRegsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QREADWRITEREGSDIALOG_H
