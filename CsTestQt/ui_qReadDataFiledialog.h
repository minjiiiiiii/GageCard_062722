/********************************************************************************
** Form generated from reading UI file 'qReadDataFiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QREADDATAFILEDIALOG_H
#define UI_QREADDATAFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReadDataFileDialog
{
public:
    QLineEdit *lineEdit_FilePath;
    QPushButton *pushButton_SelFile;
    QComboBox *comboBox_NbChans;
    QComboBox *comboBox_SampSize;
    QPushButton *pushButton_Ok;
    QLabel *label_ChanCount;
    QLabel *label_SampSize;

    void setupUi(QDialog *ReadDataFileDialog)
    {
        if (ReadDataFileDialog->objectName().isEmpty())
            ReadDataFileDialog->setObjectName(QStringLiteral("ReadDataFileDialog"));
        ReadDataFileDialog->setWindowModality(Qt::NonModal);
        ReadDataFileDialog->resize(543, 231);
        ReadDataFileDialog->setModal(false);
        lineEdit_FilePath = new QLineEdit(ReadDataFileDialog);
        lineEdit_FilePath->setObjectName(QStringLiteral("lineEdit_FilePath"));
        lineEdit_FilePath->setGeometry(QRect(40, 100, 391, 20));
        lineEdit_FilePath->setReadOnly(true);
        pushButton_SelFile = new QPushButton(ReadDataFileDialog);
        pushButton_SelFile->setObjectName(QStringLiteral("pushButton_SelFile"));
        pushButton_SelFile->setGeometry(QRect(450, 100, 75, 23));
        comboBox_NbChans = new QComboBox(ReadDataFileDialog);
        comboBox_NbChans->setObjectName(QStringLiteral("comboBox_NbChans"));
        comboBox_NbChans->setGeometry(QRect(70, 50, 51, 22));
        comboBox_NbChans->setMaxVisibleItems(4);
        comboBox_SampSize = new QComboBox(ReadDataFileDialog);
        comboBox_SampSize->setObjectName(QStringLiteral("comboBox_SampSize"));
        comboBox_SampSize->setGeometry(QRect(220, 50, 51, 22));
        comboBox_SampSize->setMaxVisibleItems(2);
        pushButton_Ok = new QPushButton(ReadDataFileDialog);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(230, 170, 75, 23));
        label_ChanCount = new QLabel(ReadDataFileDialog);
        label_ChanCount->setObjectName(QStringLiteral("label_ChanCount"));
        label_ChanCount->setGeometry(QRect(60, 30, 81, 16));
        label_SampSize = new QLabel(ReadDataFileDialog);
        label_SampSize->setObjectName(QStringLiteral("label_SampSize"));
        label_SampSize->setGeometry(QRect(220, 30, 81, 16));

        retranslateUi(ReadDataFileDialog);
        QObject::connect(pushButton_Ok, SIGNAL(clicked()), ReadDataFileDialog, SLOT(s_Close()));
        QObject::connect(pushButton_SelFile, SIGNAL(clicked()), ReadDataFileDialog, SLOT(s_SelFile()));

        comboBox_NbChans->setCurrentIndex(-1);
        comboBox_SampSize->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ReadDataFileDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadDataFileDialog)
    {
        ReadDataFileDialog->setWindowTitle(QApplication::translate("ReadDataFileDialog", "Select data file", Q_NULLPTR));
        pushButton_SelFile->setText(QApplication::translate("ReadDataFileDialog", "Select file", Q_NULLPTR));
        pushButton_Ok->setText(QApplication::translate("ReadDataFileDialog", "OK", Q_NULLPTR));
        label_ChanCount->setText(QApplication::translate("ReadDataFileDialog", "Channels count", Q_NULLPTR));
        label_SampSize->setText(QApplication::translate("ReadDataFileDialog", "Sample size", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReadDataFileDialog: public Ui_ReadDataFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QREADDATAFILEDIALOG_H
