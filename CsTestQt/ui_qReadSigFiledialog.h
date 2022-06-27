/********************************************************************************
** Form generated from reading UI file 'qReadSigFiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QREADSIGFILEDIALOG_H
#define UI_QREADSIGFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReadSigFileDialog
{
public:
    QLineEdit *lineEdit_FilePath;
    QPushButton *pushButton_SelFile;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *ReadSigFileDialog)
    {
        if (ReadSigFileDialog->objectName().isEmpty())
            ReadSigFileDialog->setObjectName(QStringLiteral("ReadSigFileDialog"));
        ReadSigFileDialog->setWindowModality(Qt::NonModal);
        ReadSigFileDialog->resize(543, 132);
        ReadSigFileDialog->setModal(false);
        lineEdit_FilePath = new QLineEdit(ReadSigFileDialog);
        lineEdit_FilePath->setObjectName(QStringLiteral("lineEdit_FilePath"));
        lineEdit_FilePath->setGeometry(QRect(40, 34, 391, 20));
        lineEdit_FilePath->setReadOnly(true);
        pushButton_SelFile = new QPushButton(ReadSigFileDialog);
        pushButton_SelFile->setObjectName(QStringLiteral("pushButton_SelFile"));
        pushButton_SelFile->setGeometry(QRect(450, 34, 75, 23));
        pushButton_Ok = new QPushButton(ReadSigFileDialog);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(230, 86, 75, 23));

        retranslateUi(ReadSigFileDialog);
        QObject::connect(pushButton_Ok, SIGNAL(clicked()), ReadSigFileDialog, SLOT(s_Close()));
        QObject::connect(pushButton_SelFile, SIGNAL(clicked()), ReadSigFileDialog, SLOT(s_SelFile()));

        QMetaObject::connectSlotsByName(ReadSigFileDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadSigFileDialog)
    {
        ReadSigFileDialog->setWindowTitle(QApplication::translate("ReadSigFileDialog", "Select data file", Q_NULLPTR));
        pushButton_SelFile->setText(QApplication::translate("ReadSigFileDialog", "Select file", Q_NULLPTR));
        pushButton_Ok->setText(QApplication::translate("ReadSigFileDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReadSigFileDialog: public Ui_ReadSigFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QREADSIGFILEDIALOG_H
