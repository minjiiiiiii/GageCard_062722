/********************************************************************************
** Form generated from reading UI file 'qMulrecdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMULRECDIALOG_H
#define UI_QMULRECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MulrecDialog
{
public:
    QSpinBox *spinBox_FromSeg;
    QSpinBox *spinBox_ToSeg;
    QSpinBox *spinBox_SegCount;
    QLabel *label_To;
    QLabel *label_Of;
    QGroupBox *groupBox_DispData;
    QCheckBox *checkBox_OneSeg;
    QRadioButton *radioButton_OnlySegs;
    QRadioButton *radioButton_AllSegs;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *MulrecDialog)
    {
        if (MulrecDialog->objectName().isEmpty())
            MulrecDialog->setObjectName(QStringLiteral("MulrecDialog"));
        MulrecDialog->setWindowModality(Qt::NonModal);
        MulrecDialog->setEnabled(true);
        MulrecDialog->resize(472, 282);
        MulrecDialog->setModal(true);
        spinBox_FromSeg = new QSpinBox(MulrecDialog);
        spinBox_FromSeg->setObjectName(QStringLiteral("spinBox_FromSeg"));
        spinBox_FromSeg->setGeometry(QRect(60, 140, 81, 22));
        spinBox_FromSeg->setAlignment(Qt::AlignCenter);
        spinBox_FromSeg->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_ToSeg = new QSpinBox(MulrecDialog);
        spinBox_ToSeg->setObjectName(QStringLiteral("spinBox_ToSeg"));
        spinBox_ToSeg->setGeometry(QRect(190, 140, 81, 22));
        spinBox_ToSeg->setAlignment(Qt::AlignCenter);
        spinBox_ToSeg->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_SegCount = new QSpinBox(MulrecDialog);
        spinBox_SegCount->setObjectName(QStringLiteral("spinBox_SegCount"));
        spinBox_SegCount->setGeometry(QRect(320, 140, 91, 22));
        spinBox_SegCount->setAlignment(Qt::AlignCenter);
        spinBox_SegCount->setReadOnly(true);
        spinBox_SegCount->setButtonSymbols(QAbstractSpinBox::NoButtons);
        label_To = new QLabel(MulrecDialog);
        label_To->setObjectName(QStringLiteral("label_To"));
        label_To->setGeometry(QRect(160, 140, 21, 16));
        label_Of = new QLabel(MulrecDialog);
        label_Of->setObjectName(QStringLiteral("label_Of"));
        label_Of->setGeometry(QRect(290, 140, 21, 16));
        groupBox_DispData = new QGroupBox(MulrecDialog);
        groupBox_DispData->setObjectName(QStringLiteral("groupBox_DispData"));
        groupBox_DispData->setGeometry(QRect(20, 30, 431, 161));
        checkBox_OneSeg = new QCheckBox(groupBox_DispData);
        checkBox_OneSeg->setObjectName(QStringLiteral("checkBox_OneSeg"));
        checkBox_OneSeg->setGeometry(QRect(260, 40, 131, 17));
        radioButton_OnlySegs = new QRadioButton(groupBox_DispData);
        radioButton_OnlySegs->setObjectName(QStringLiteral("radioButton_OnlySegs"));
        radioButton_OnlySegs->setGeometry(QRect(40, 70, 181, 17));
        radioButton_AllSegs = new QRadioButton(groupBox_DispData);
        radioButton_AllSegs->setObjectName(QStringLiteral("radioButton_AllSegs"));
        radioButton_AllSegs->setGeometry(QRect(40, 40, 101, 17));
        radioButton_AllSegs->setChecked(true);
        pushButton_Ok = new QPushButton(MulrecDialog);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(130, 220, 81, 31));
        pushButton_Cancel = new QPushButton(MulrecDialog);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(260, 220, 81, 31));
        groupBox_DispData->raise();
        spinBox_FromSeg->raise();
        spinBox_ToSeg->raise();
        spinBox_SegCount->raise();
        label_To->raise();
        label_Of->raise();
        pushButton_Ok->raise();
        pushButton_Cancel->raise();

        retranslateUi(MulrecDialog);
        QObject::connect(pushButton_Ok, SIGNAL(clicked()), MulrecDialog, SLOT(s_Ok()));
        QObject::connect(pushButton_Cancel, SIGNAL(clicked()), MulrecDialog, SLOT(s_Cancel()));
        QObject::connect(radioButton_AllSegs, SIGNAL(toggled(bool)), MulrecDialog, SLOT(s_ModeChanged(bool)));

        QMetaObject::connectSlotsByName(MulrecDialog);
    } // setupUi

    void retranslateUi(QDialog *MulrecDialog)
    {
        MulrecDialog->setWindowTitle(QApplication::translate("MulrecDialog", "Debug Multiple Records", Q_NULLPTR));
        label_To->setText(QApplication::translate("MulrecDialog", "to", Q_NULLPTR));
        label_Of->setText(QApplication::translate("MulrecDialog", "of", Q_NULLPTR));
        groupBox_DispData->setTitle(QApplication::translate("MulrecDialog", "Display data", Q_NULLPTR));
        checkBox_OneSeg->setText(QApplication::translate("MulrecDialog", "One segment at a time", Q_NULLPTR));
        radioButton_OnlySegs->setText(QApplication::translate("MulrecDialog", "For only the following segments", Q_NULLPTR));
        radioButton_AllSegs->setText(QApplication::translate("MulrecDialog", "For all segments", Q_NULLPTR));
        pushButton_Ok->setText(QApplication::translate("MulrecDialog", "OK", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("MulrecDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MulrecDialog: public Ui_MulrecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMULRECDIALOG_H
