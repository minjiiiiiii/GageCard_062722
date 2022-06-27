/********************************************************************************
** Form generated from reading UI file 'qCursorInfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCURSORINFODIALOG_H
#define UI_QCURSORINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CursorInfodialog
{
public:
    QTextEdit *textEdit_Status;

    void setupUi(QDialog *CursorInfodialog)
    {
        if (CursorInfodialog->objectName().isEmpty())
            CursorInfodialog->setObjectName(QStringLiteral("CursorInfodialog"));
        CursorInfodialog->setWindowModality(Qt::NonModal);
        CursorInfodialog->resize(212, 265);
        CursorInfodialog->setModal(false);
        textEdit_Status = new QTextEdit(CursorInfodialog);
        textEdit_Status->setObjectName(QStringLiteral("textEdit_Status"));
        textEdit_Status->setGeometry(QRect(20, 20, 169, 219));
        textEdit_Status->setReadOnly(true);

        retranslateUi(CursorInfodialog);

        QMetaObject::connectSlotsByName(CursorInfodialog);
    } // setupUi

    void retranslateUi(QDialog *CursorInfodialog)
    {
        CursorInfodialog->setWindowTitle(QApplication::translate("CursorInfodialog", "Cursor information", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CursorInfodialog: public Ui_CursorInfodialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCURSORINFODIALOG_H
