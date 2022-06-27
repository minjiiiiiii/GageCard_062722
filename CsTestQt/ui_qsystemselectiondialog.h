/********************************************************************************
** Form generated from reading UI file 'qsystemselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSYSTEMSELECTIONDIALOG_H
#define UI_QSYSTEMSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QSystemSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listCsSystems;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *QSystemSelectionDialog)
    {
        if (QSystemSelectionDialog->objectName().isEmpty())
            QSystemSelectionDialog->setObjectName(QStringLiteral("QSystemSelectionDialog"));
        QSystemSelectionDialog->resize(532, 300);
        QIcon icon;
        icon.addFile(QStringLiteral("CsTestQt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QSystemSelectionDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QSystemSelectionDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listCsSystems = new QListWidget(QSystemSelectionDialog);
        listCsSystems->setObjectName(QStringLiteral("listCsSystems"));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Console"));
        listCsSystems->setFont(font);

        verticalLayout->addWidget(listCsSystems);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(24);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(24, -1, 24, -1);
        btnOk = new QPushButton(QSystemSelectionDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(QSystemSelectionDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QSystemSelectionDialog);
        QObject::connect(btnOk, SIGNAL(clicked()), QSystemSelectionDialog, SLOT(s_Save()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QSystemSelectionDialog, SLOT(s_Close()));

        QMetaObject::connectSlotsByName(QSystemSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *QSystemSelectionDialog)
    {
        QSystemSelectionDialog->setWindowTitle(QApplication::translate("QSystemSelectionDialog", "Select system", Q_NULLPTR));
        btnOk->setText(QApplication::translate("QSystemSelectionDialog", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QSystemSelectionDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QSystemSelectionDialog: public Ui_QSystemSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSYSTEMSELECTIONDIALOG_H
