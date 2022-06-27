/********************************************************************************
** Form generated from reading UI file 'qaboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QABOUTDIALOG_H
#define UI_QABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QAboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *lblVersion;
    QLabel *label_6;
    QLabel *label_9;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *lblSsmPath;
    QLabel *label_5;
    QLabel *lblSsmVersion;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *lblDispPath;
    QLabel *lblDispVersion;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnOk;

    void setupUi(QDialog *QAboutDialog)
    {
        if (QAboutDialog->objectName().isEmpty())
            QAboutDialog->setObjectName(QStringLiteral("QAboutDialog"));
        QAboutDialog->resize(300, 250);
        QAboutDialog->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QStringLiteral("CsTestQt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QAboutDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QAboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 12, 12, -1);
        label = new QLabel(QAboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("CsTestQt.ico")));

        horizontalLayout->addWidget(label);

        groupBox = new QGroupBox(QAboutDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(24, -1, -1, -1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lblVersion = new QLabel(groupBox);
        lblVersion->setObjectName(QStringLiteral("lblVersion"));
        lblVersion->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblVersion);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(groupBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(QAboutDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_9 = new QLabel(QAboutDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_9);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(12, 6, -1, -1);
        label_3 = new QLabel(QAboutDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lblSsmPath = new QLabel(QAboutDialog);
        lblSsmPath->setObjectName(QStringLiteral("lblSsmPath"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblSsmPath);

        label_5 = new QLabel(QAboutDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lblSsmVersion = new QLabel(QAboutDialog);
        lblSsmVersion->setObjectName(QStringLiteral("lblSsmVersion"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblSsmVersion);

        label_7 = new QLabel(QAboutDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(QAboutDialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        lblDispPath = new QLabel(QAboutDialog);
        lblDispPath->setObjectName(QStringLiteral("lblDispPath"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblDispPath);

        lblDispVersion = new QLabel(QAboutDialog);
        lblDispVersion->setObjectName(QStringLiteral("lblDispVersion"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lblDispVersion);


        verticalLayout->addLayout(formLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnOk = new QPushButton(QAboutDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        hboxLayout->addWidget(btnOk);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(QAboutDialog);
        QObject::connect(btnOk, SIGNAL(clicked()), QAboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *QAboutDialog)
    {
        QAboutDialog->setWindowTitle(QApplication::translate("QAboutDialog", "About CsTestQt", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QString());
        label_4->setText(QApplication::translate("QAboutDialog", "CsTestQt", Q_NULLPTR));
        label_2->setText(QApplication::translate("QAboutDialog", "Version: ", Q_NULLPTR));
        lblVersion->setText(QApplication::translate("QAboutDialog", "X.XX.XX (XXXX)", Q_NULLPTR));
        label_6->setText(QApplication::translate("QAboutDialog", "(c) Gage Applied Technologies 2003 - 2013", Q_NULLPTR));
        label_9->setText(QApplication::translate("QAboutDialog", "CsTestQt Sample Program", Q_NULLPTR));
        label_3->setText(QApplication::translate("QAboutDialog", "CsSsm Path:", Q_NULLPTR));
        lblSsmPath->setText(QApplication::translate("QAboutDialog", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("QAboutDialog", "CsSsm Version:", Q_NULLPTR));
        lblSsmVersion->setText(QApplication::translate("QAboutDialog", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("QAboutDialog", "CsDisp Path:", Q_NULLPTR));
        label_8->setText(QApplication::translate("QAboutDialog", "CsDisp Version:", Q_NULLPTR));
        lblDispPath->setText(QApplication::translate("QAboutDialog", "TextLabel", Q_NULLPTR));
        lblDispVersion->setText(QApplication::translate("QAboutDialog", "TextLabel", Q_NULLPTR));
        btnOk->setText(QApplication::translate("QAboutDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QAboutDialog: public Ui_QAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QABOUTDIALOG_H
