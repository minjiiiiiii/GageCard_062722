/********************************************************************************
** Form generated from reading UI file 'qscope.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSCOPE_H
#define UI_QSCOPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcsgraph.h"

QT_BEGIN_NAMESPACE

class Ui_QScope
{
public:
    QVBoxLayout *verticalLayout;
    QCsGraph *graph;
    QScrollBar *sbarRange;

    void setupUi(QWidget *QScope)
    {
        if (QScope->objectName().isEmpty())
            QScope->setObjectName(QStringLiteral("QScope"));
        QScope->resize(585, 418);
        verticalLayout = new QVBoxLayout(QScope);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        graph = new QCsGraph(QScope);
        graph->setObjectName(QStringLiteral("graph"));

        verticalLayout->addWidget(graph);

        sbarRange = new QScrollBar(QScope);
        sbarRange->setObjectName(QStringLiteral("sbarRange"));
        sbarRange->setMaximum(99);
        sbarRange->setValue(1);
        sbarRange->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(sbarRange);


        retranslateUi(QScope);
        QObject::connect(graph, SIGNAL(zoomXChanged()), QScope, SLOT(s_adjustHScrollBar()));
        QObject::connect(graph, SIGNAL(zoomXChanged()), graph, SLOT(update()));
        QObject::connect(sbarRange, SIGNAL(valueChanged(int)), graph, SLOT(s_movePositionX(int)));

        QMetaObject::connectSlotsByName(QScope);
    } // setupUi

    void retranslateUi(QWidget *QScope)
    {
        QScope->setWindowTitle(QApplication::translate("QScope", "QScope", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QScope: public Ui_QScope {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSCOPE_H
