/********************************************************************************
** Form generated from reading UI file 'qGotoSample.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGOTOSAMPLE_H
#define UI_QGOTOSAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gotoSample
{
public:
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *gotoSample)
    {
        if (gotoSample->objectName().isEmpty())
            gotoSample->setObjectName(QStringLiteral("gotoSample"));
        gotoSample->resize(220, 123);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        gotoSample->setFont(font);
        doubleSpinBox = new QDoubleSpinBox(gotoSample);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(24, 46, 175, 22));
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMinimum(-1e+8);
        doubleSpinBox->setMaximum(1e+14);
        pushButton = new QPushButton(gotoSample);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 86, 99, 23));
        pushButton->setFont(font);
        label = new QLabel(gotoSample);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(28, 16, 165, 16));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(gotoSample);
        QObject::connect(pushButton, SIGNAL(clicked()), gotoSample, SLOT(s_Ok()));

        QMetaObject::connectSlotsByName(gotoSample);
    } // setupUi

    void retranslateUi(QWidget *gotoSample)
    {
        gotoSample->setWindowTitle(QString());
        pushButton->setText(QApplication::translate("gotoSample", "Go to sample", Q_NULLPTR));
        label->setText(QApplication::translate("gotoSample", "Enter sample address", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gotoSample: public Ui_gotoSample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGOTOSAMPLE_H
