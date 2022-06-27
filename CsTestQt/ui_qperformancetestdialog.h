/********************************************************************************
** Form generated from reading UI file 'qperformancetestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPERFORMANCETESTDIALOG_H
#define UI_QPERFORMANCETESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QPerformanceTestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txtNbrAcquisitions;
    QProgressBar *pbarProgress;
    QLineEdit *txtResult;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStart;
    QPushButton *btnExit;

    void setupUi(QDialog *QPerformanceTestDialog)
    {
        if (QPerformanceTestDialog->objectName().isEmpty())
            QPerformanceTestDialog->setObjectName(QStringLiteral("QPerformanceTestDialog"));
        QPerformanceTestDialog->resize(270, 150);
        QIcon icon;
        icon.addFile(QStringLiteral("CsTestQt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QPerformanceTestDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QPerformanceTestDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, -1, -1, -1);
        label = new QLabel(QPerformanceTestDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        txtNbrAcquisitions = new QLineEdit(QPerformanceTestDialog);
        txtNbrAcquisitions->setObjectName(QStringLiteral("txtNbrAcquisitions"));

        verticalLayout->addWidget(txtNbrAcquisitions);

        pbarProgress = new QProgressBar(QPerformanceTestDialog);
        pbarProgress->setObjectName(QStringLiteral("pbarProgress"));
        pbarProgress->setValue(0);

        verticalLayout->addWidget(pbarProgress);

        txtResult = new QLineEdit(QPerformanceTestDialog);
        txtResult->setObjectName(QStringLiteral("txtResult"));
        txtResult->setAlignment(Qt::AlignCenter);
        txtResult->setReadOnly(true);

        verticalLayout->addWidget(txtResult);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnStart = new QPushButton(QPerformanceTestDialog);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        horizontalLayout->addWidget(btnStart);

        btnExit = new QPushButton(QPerformanceTestDialog);
        btnExit->setObjectName(QStringLiteral("btnExit"));

        horizontalLayout->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QPerformanceTestDialog);
        QObject::connect(btnExit, SIGNAL(clicked()), QPerformanceTestDialog, SLOT(s_Close()));
        QObject::connect(btnStart, SIGNAL(clicked()), QPerformanceTestDialog, SLOT(s_DoTest()));

        QMetaObject::connectSlotsByName(QPerformanceTestDialog);
    } // setupUi

    void retranslateUi(QDialog *QPerformanceTestDialog)
    {
        QPerformanceTestDialog->setWindowTitle(QApplication::translate("QPerformanceTestDialog", "Performance Test", Q_NULLPTR));
        label->setText(QApplication::translate("QPerformanceTestDialog", "Number of Acquisitions (Max 1.000.000)", Q_NULLPTR));
        txtNbrAcquisitions->setInputMask(QString());
        btnStart->setText(QApplication::translate("QPerformanceTestDialog", "Start Test", Q_NULLPTR));
        btnExit->setText(QApplication::translate("QPerformanceTestDialog", "Cancel/Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QPerformanceTestDialog: public Ui_QPerformanceTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPERFORMANCETESTDIALOG_H
