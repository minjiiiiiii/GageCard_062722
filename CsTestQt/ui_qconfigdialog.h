/********************************************************************************
** Form generated from reading UI file 'qconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCONFIGDIALOG_H
#define UI_QCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QConfigDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tabAcquisition;
    QGroupBox *formGroupBox_Expert;
    QSpinBox *spinBox_AvgCount;
    QLabel *label_7;
    QCheckBox *ckbExpert2;
    QCheckBox *ckbExpert1;
    QGroupBox *formGroupBox_Acquisition;
    QLabel *label_SampleRate;
    QLabel *label_8;
    QLineEdit *txtExternalClock;
    QComboBox *cbxSampleRate;
    QLineEdit *txtNbrRecords;
    QCheckBox *ckbNbrRecords;
    QCheckBox *checkBox_DisplaySingleSeg;
    QDoubleSpinBox *dblSpinBox_CurrSeg;
    QGroupBox *groupBox_Depth;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtPreTrigger;
    QLineEdit *txtPostTrigger;
    QGroupBox *formGroupBox_Mode;
    QComboBox *cbxMode;
    QCheckBox *ckbExternalClock;
    QCheckBox *ckbReferenceClock;
    QGroupBox *groupBox_TrigTimeout;
    QCheckBox *ckbTriggerTimeOut;
    QDoubleSpinBox *dblSpinBox_TriggerTimeout;
    QWidget *tabChannel;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QComboBox *cbxInputRange;
    QSpinBox *sbxDCOffset;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton_Filter;
    QGroupBox *groupBox_Impedance;
    QRadioButton *rbtnChannelFiftyOhms;
    QRadioButton *rbtnChannelOneMegaOhms;
    QGroupBox *groupBox_Coupling;
    QRadioButton *rbtnChannelDC;
    QRadioButton *rbtnChannelAC;
    QGroupBox *groupBox_Channel;
    QComboBox *cbxChannelIndex;
    QCheckBox *ckbAllChannels;
    QWidget *tabTrigger;
    QTableWidget *tableAdvancedTriggering;
    QCheckBox *ckbAdvanceTriggering;
    QGroupBox *boxExternalTriggerParameters;
    QGroupBox *groupBox_3;
    QRadioButton *rbtnTriggerFiftyOhm;
    QRadioButton *rbtnTriggerHighZ;
    QGroupBox *groupBox_6;
    QRadioButton *rbtnTriggerOneVolt;
    QRadioButton *rbtnTriggerFiveVolt;
    QRadioButton *rbtnTrigger3V3;
    QRadioButton *rbtnTriggerPlus5V;
    QGroupBox *groupBox_7;
    QRadioButton *rbtnTriggerAC;
    QRadioButton *rbtnTriggerDC;
    QLabel *label_4;
    QSpinBox *spbxTriggerLevel;
    QLabel *label_9;
    QComboBox *cbxTriggerCondition;
    QComboBox *cbxTriggerSource;
    QLabel *label_3;
    QGroupBox *groupBox_Buttons;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *QConfigDialog)
    {
        if (QConfigDialog->objectName().isEmpty())
            QConfigDialog->setObjectName(QStringLiteral("QConfigDialog"));
        QConfigDialog->resize(405, 530);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(QConfigDialog->sizePolicy().hasHeightForWidth());
        QConfigDialog->setSizePolicy(sizePolicy);
        QConfigDialog->setMinimumSize(QSize(377, 507));
        QConfigDialog->setMaximumSize(QSize(500, 530));
        QIcon icon;
        icon.addFile(QStringLiteral("CsTestQt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QConfigDialog->setWindowIcon(icon);
        QConfigDialog->setAutoFillBackground(false);
        tabWidget = new QTabWidget(QConfigDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 2, 389, 455));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(8);
        tabWidget->setFont(font);
        tabWidget->setUsesScrollButtons(false);
        tabAcquisition = new QWidget();
        tabAcquisition->setObjectName(QStringLiteral("tabAcquisition"));
        formGroupBox_Expert = new QGroupBox(tabAcquisition);
        formGroupBox_Expert->setObjectName(QStringLiteral("formGroupBox_Expert"));
        formGroupBox_Expert->setGeometry(QRect(9, 82, 367, 85));
        spinBox_AvgCount = new QSpinBox(formGroupBox_Expert);
        spinBox_AvgCount->setObjectName(QStringLiteral("spinBox_AvgCount"));
        spinBox_AvgCount->setGeometry(QRect(20, 53, 61, 20));
        spinBox_AvgCount->setMaximumSize(QSize(100, 16777215));
        spinBox_AvgCount->setAlignment(Qt::AlignCenter);
        spinBox_AvgCount->setMaximum(1024);
        spinBox_AvgCount->setValue(10);
        label_7 = new QLabel(formGroupBox_Expert);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(26, 38, 50, 16));
        ckbExpert2 = new QCheckBox(formGroupBox_Expert);
        ckbExpert2->setObjectName(QStringLiteral("ckbExpert2"));
        ckbExpert2->setGeometry(QRect(214, 20, 133, 18));
        ckbExpert1 = new QCheckBox(formGroupBox_Expert);
        ckbExpert1->setObjectName(QStringLiteral("ckbExpert1"));
        ckbExpert1->setGeometry(QRect(20, 20, 127, 18));
        formGroupBox_Acquisition = new QGroupBox(tabAcquisition);
        formGroupBox_Acquisition->setObjectName(QStringLiteral("formGroupBox_Acquisition"));
        formGroupBox_Acquisition->setGeometry(QRect(9, 168, 367, 103));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(formGroupBox_Acquisition->sizePolicy().hasHeightForWidth());
        formGroupBox_Acquisition->setSizePolicy(sizePolicy2);
        formGroupBox_Acquisition->setSizeIncrement(QSize(5, 5));
        label_SampleRate = new QLabel(formGroupBox_Acquisition);
        label_SampleRate->setObjectName(QStringLiteral("label_SampleRate"));
        label_SampleRate->setGeometry(QRect(22, 34, 101, 16));
        label_8 = new QLabel(formGroupBox_Acquisition);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(232, 16, 109, 16));
        txtExternalClock = new QLineEdit(formGroupBox_Acquisition);
        txtExternalClock->setObjectName(QStringLiteral("txtExternalClock"));
        txtExternalClock->setGeometry(QRect(18, 50, 121, 20));
        txtExternalClock->setMaximumSize(QSize(150, 16777215));
        txtExternalClock->setMaxLength(45);
        cbxSampleRate = new QComboBox(formGroupBox_Acquisition);
        cbxSampleRate->setObjectName(QStringLiteral("cbxSampleRate"));
        cbxSampleRate->setGeometry(QRect(20, 50, 121, 20));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cbxSampleRate->sizePolicy().hasHeightForWidth());
        cbxSampleRate->setSizePolicy(sizePolicy3);
        cbxSampleRate->setMaximumSize(QSize(150, 16777215));
        txtNbrRecords = new QLineEdit(formGroupBox_Acquisition);
        txtNbrRecords->setObjectName(QStringLiteral("txtNbrRecords"));
        txtNbrRecords->setGeometry(QRect(232, 50, 111, 20));
        txtNbrRecords->setMaximumSize(QSize(150, 16777215));
        txtNbrRecords->setMaxLength(45);
        ckbNbrRecords = new QCheckBox(formGroupBox_Acquisition);
        ckbNbrRecords->setObjectName(QStringLiteral("ckbNbrRecords"));
        ckbNbrRecords->setGeometry(QRect(212, 52, 16, 17));
        checkBox_DisplaySingleSeg = new QCheckBox(formGroupBox_Acquisition);
        checkBox_DisplaySingleSeg->setObjectName(QStringLiteral("checkBox_DisplaySingleSeg"));
        checkBox_DisplaySingleSeg->setGeometry(QRect(90, 72, 16, 17));
        dblSpinBox_CurrSeg = new QDoubleSpinBox(formGroupBox_Acquisition);
        dblSpinBox_CurrSeg->setObjectName(QStringLiteral("dblSpinBox_CurrSeg"));
        dblSpinBox_CurrSeg->setGeometry(QRect(110, 70, 111, 22));
        dblSpinBox_CurrSeg->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        dblSpinBox_CurrSeg->setDecimals(0);
        dblSpinBox_CurrSeg->setMaximum(1e+11);
        dblSpinBox_CurrSeg->setValue(1);
        groupBox_Depth = new QGroupBox(tabAcquisition);
        groupBox_Depth->setObjectName(QStringLiteral("groupBox_Depth"));
        groupBox_Depth->setGeometry(QRect(9, 272, 367, 71));
        label_5 = new QLabel(groupBox_Depth);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(26, 16, 65, 16));
        label_6 = new QLabel(groupBox_Depth);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(234, 16, 73, 16));
        txtPreTrigger = new QLineEdit(groupBox_Depth);
        txtPreTrigger->setObjectName(QStringLiteral("txtPreTrigger"));
        txtPreTrigger->setEnabled(true);
        txtPreTrigger->setGeometry(QRect(24, 32, 93, 20));
        txtPostTrigger = new QLineEdit(groupBox_Depth);
        txtPostTrigger->setObjectName(QStringLiteral("txtPostTrigger"));
        txtPostTrigger->setGeometry(QRect(232, 32, 111, 20));
        formGroupBox_Mode = new QGroupBox(tabAcquisition);
        formGroupBox_Mode->setObjectName(QStringLiteral("formGroupBox_Mode"));
        formGroupBox_Mode->setGeometry(QRect(9, 9, 367, 73));
        cbxMode = new QComboBox(formGroupBox_Mode);
        cbxMode->setObjectName(QStringLiteral("cbxMode"));
        cbxMode->setGeometry(QRect(20, 30, 101, 20));
        sizePolicy1.setHeightForWidth(cbxMode->sizePolicy().hasHeightForWidth());
        cbxMode->setSizePolicy(sizePolicy1);
        cbxMode->setEditable(false);
        ckbExternalClock = new QCheckBox(formGroupBox_Mode);
        ckbExternalClock->setObjectName(QStringLiteral("ckbExternalClock"));
        ckbExternalClock->setGeometry(QRect(214, 20, 105, 18));
        ckbReferenceClock = new QCheckBox(formGroupBox_Mode);
        ckbReferenceClock->setObjectName(QStringLiteral("ckbReferenceClock"));
        ckbReferenceClock->setGeometry(QRect(214, 44, 121, 18));
        groupBox_TrigTimeout = new QGroupBox(tabAcquisition);
        groupBox_TrigTimeout->setObjectName(QStringLiteral("groupBox_TrigTimeout"));
        groupBox_TrigTimeout->setGeometry(QRect(10, 344, 365, 63));
        ckbTriggerTimeOut = new QCheckBox(groupBox_TrigTimeout);
        ckbTriggerTimeOut->setObjectName(QStringLiteral("ckbTriggerTimeOut"));
        ckbTriggerTimeOut->setGeometry(QRect(18, 28, 129, 18));
        dblSpinBox_TriggerTimeout = new QDoubleSpinBox(groupBox_TrigTimeout);
        dblSpinBox_TriggerTimeout->setObjectName(QStringLiteral("dblSpinBox_TriggerTimeout"));
        dblSpinBox_TriggerTimeout->setGeometry(QRect(214, 26, 109, 20));
        dblSpinBox_TriggerTimeout->setDecimals(1);
        dblSpinBox_TriggerTimeout->setMinimum(-1);
        dblSpinBox_TriggerTimeout->setMaximum(1e+9);
        dblSpinBox_TriggerTimeout->setSingleStep(0.1);
        tabWidget->addTab(tabAcquisition, QString());
        groupBox_TrigTimeout->raise();
        formGroupBox_Expert->raise();
        formGroupBox_Acquisition->raise();
        groupBox_Depth->raise();
        formGroupBox_Mode->raise();
        tabChannel = new QWidget();
        tabChannel->setObjectName(QStringLiteral("tabChannel"));
        groupBox = new QGroupBox(tabChannel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(4, 84, 371, 315));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 353, 69));
        cbxInputRange = new QComboBox(groupBox_2);
        cbxInputRange->setObjectName(QStringLiteral("cbxInputRange"));
        cbxInputRange->setGeometry(QRect(32, 36, 111, 20));
        sbxDCOffset = new QSpinBox(groupBox_2);
        sbxDCOffset->setObjectName(QStringLiteral("sbxDCOffset"));
        sbxDCOffset->setGeometry(QRect(224, 36, 91, 20));
        sbxDCOffset->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sbxDCOffset->setMinimum(-100);
        sbxDCOffset->setMaximum(100);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 18, 81, 16));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(226, 20, 87, 17));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(12, 246, 351, 61));
        radioButton_Filter = new QRadioButton(groupBox_5);
        radioButton_Filter->setObjectName(QStringLiteral("radioButton_Filter"));
        radioButton_Filter->setGeometry(QRect(32, 28, 57, 18));
        radioButton_Filter->setAutoExclusive(false);
        groupBox_Impedance = new QGroupBox(groupBox);
        groupBox_Impedance->setObjectName(QStringLiteral("groupBox_Impedance"));
        groupBox_Impedance->setGeometry(QRect(12, 96, 351, 67));
        rbtnChannelFiftyOhms = new QRadioButton(groupBox_Impedance);
        rbtnChannelFiftyOhms->setObjectName(QStringLiteral("rbtnChannelFiftyOhms"));
        rbtnChannelFiftyOhms->setGeometry(QRect(34, 30, 81, 17));
        rbtnChannelFiftyOhms->setAutoExclusive(false);
        rbtnChannelOneMegaOhms = new QRadioButton(groupBox_Impedance);
        rbtnChannelOneMegaOhms->setObjectName(QStringLiteral("rbtnChannelOneMegaOhms"));
        rbtnChannelOneMegaOhms->setGeometry(QRect(224, 30, 87, 17));
        rbtnChannelOneMegaOhms->setAutoExclusive(false);
        groupBox_Coupling = new QGroupBox(groupBox);
        groupBox_Coupling->setObjectName(QStringLiteral("groupBox_Coupling"));
        groupBox_Coupling->setGeometry(QRect(12, 170, 351, 71));
        rbtnChannelDC = new QRadioButton(groupBox_Coupling);
        rbtnChannelDC->setObjectName(QStringLiteral("rbtnChannelDC"));
        rbtnChannelDC->setGeometry(QRect(34, 34, 55, 17));
        rbtnChannelDC->setAutoExclusive(false);
        rbtnChannelAC = new QRadioButton(groupBox_Coupling);
        rbtnChannelAC->setObjectName(QStringLiteral("rbtnChannelAC"));
        rbtnChannelAC->setGeometry(QRect(224, 34, 55, 17));
        rbtnChannelAC->setAutoExclusive(false);
        groupBox_Channel = new QGroupBox(tabChannel);
        groupBox_Channel->setObjectName(QStringLiteral("groupBox_Channel"));
        groupBox_Channel->setEnabled(true);
        groupBox_Channel->setGeometry(QRect(6, 8, 369, 67));
        cbxChannelIndex = new QComboBox(groupBox_Channel);
        cbxChannelIndex->setObjectName(QStringLiteral("cbxChannelIndex"));
        cbxChannelIndex->setGeometry(QRect(38, 28, 105, 20));
        ckbAllChannels = new QCheckBox(groupBox_Channel);
        ckbAllChannels->setObjectName(QStringLiteral("ckbAllChannels"));
        ckbAllChannels->setGeometry(QRect(234, 24, 99, 18));
        tabWidget->addTab(tabChannel, QString());
        tabTrigger = new QWidget();
        tabTrigger->setObjectName(QStringLiteral("tabTrigger"));
        tableAdvancedTriggering = new QTableWidget(tabTrigger);
        if (tableAdvancedTriggering->columnCount() < 3)
            tableAdvancedTriggering->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableAdvancedTriggering->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableAdvancedTriggering->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableAdvancedTriggering->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableAdvancedTriggering->setObjectName(QStringLiteral("tableAdvancedTriggering"));
        tableAdvancedTriggering->setGeometry(QRect(162, 9, 215, 357));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableAdvancedTriggering->sizePolicy().hasHeightForWidth());
        tableAdvancedTriggering->setSizePolicy(sizePolicy4);
        tableAdvancedTriggering->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableAdvancedTriggering->setTabKeyNavigation(false);
        tableAdvancedTriggering->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAdvancedTriggering->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableAdvancedTriggering->setColumnCount(3);
        tableAdvancedTriggering->horizontalHeader()->setDefaultSectionSize(70);
        ckbAdvanceTriggering = new QCheckBox(tabTrigger);
        ckbAdvanceTriggering->setObjectName(QStringLiteral("ckbAdvanceTriggering"));
        ckbAdvanceTriggering->setGeometry(QRect(14, 10, 135, 18));
        boxExternalTriggerParameters = new QGroupBox(tabTrigger);
        boxExternalTriggerParameters->setObjectName(QStringLiteral("boxExternalTriggerParameters"));
        boxExternalTriggerParameters->setEnabled(true);
        boxExternalTriggerParameters->setGeometry(QRect(20, 116, 121, 293));
        boxExternalTriggerParameters->setMinimumSize(QSize(0, 0));
        groupBox_3 = new QGroupBox(boxExternalTriggerParameters);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(16, 216, 89, 69));
        rbtnTriggerFiftyOhm = new QRadioButton(groupBox_3);
        rbtnTriggerFiftyOhm->setObjectName(QStringLiteral("rbtnTriggerFiftyOhm"));
        rbtnTriggerFiftyOhm->setGeometry(QRect(18, 20, 67, 17));
        rbtnTriggerFiftyOhm->setAutoExclusive(false);
        rbtnTriggerHighZ = new QRadioButton(groupBox_3);
        rbtnTriggerHighZ->setObjectName(QStringLiteral("rbtnTriggerHighZ"));
        rbtnTriggerHighZ->setGeometry(QRect(18, 44, 61, 17));
        rbtnTriggerHighZ->setAutoExclusive(false);
        groupBox_6 = new QGroupBox(boxExternalTriggerParameters);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(16, 86, 89, 123));
        rbtnTriggerOneVolt = new QRadioButton(groupBox_6);
        rbtnTriggerOneVolt->setObjectName(QStringLiteral("rbtnTriggerOneVolt"));
        rbtnTriggerOneVolt->setGeometry(QRect(18, 18, 51, 17));
        rbtnTriggerOneVolt->setAutoExclusive(false);
        rbtnTriggerFiveVolt = new QRadioButton(groupBox_6);
        rbtnTriggerFiveVolt->setObjectName(QStringLiteral("rbtnTriggerFiveVolt"));
        rbtnTriggerFiveVolt->setGeometry(QRect(18, 44, 51, 17));
        rbtnTriggerFiveVolt->setAutoExclusive(false);
        rbtnTrigger3V3 = new QRadioButton(groupBox_6);
        rbtnTrigger3V3->setObjectName(QStringLiteral("rbtnTrigger3V3"));
        rbtnTrigger3V3->setGeometry(QRect(18, 70, 59, 17));
        rbtnTrigger3V3->setAutoExclusive(false);
        rbtnTriggerPlus5V = new QRadioButton(groupBox_6);
        rbtnTriggerPlus5V->setObjectName(QStringLiteral("rbtnTriggerPlus5V"));
        rbtnTriggerPlus5V->setGeometry(QRect(18, 94, 59, 17));
        rbtnTriggerPlus5V->setAutoExclusive(false);
        groupBox_7 = new QGroupBox(boxExternalTriggerParameters);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(16, 22, 91, 61));
        rbtnTriggerAC = new QRadioButton(groupBox_7);
        rbtnTriggerAC->setObjectName(QStringLiteral("rbtnTriggerAC"));
        rbtnTriggerAC->setGeometry(QRect(18, 16, 47, 17));
        rbtnTriggerAC->setAutoExclusive(false);
        rbtnTriggerDC = new QRadioButton(groupBox_7);
        rbtnTriggerDC->setObjectName(QStringLiteral("rbtnTriggerDC"));
        rbtnTriggerDC->setGeometry(QRect(18, 38, 47, 17));
        rbtnTriggerDC->setAutoExclusive(false);
        label_4 = new QLabel(tabTrigger);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(12, 62, 51, 16));
        spbxTriggerLevel = new QSpinBox(tabTrigger);
        spbxTriggerLevel->setObjectName(QStringLiteral("spbxTriggerLevel"));
        spbxTriggerLevel->setGeometry(QRect(98, 90, 47, 20));
        spbxTriggerLevel->setMinimum(-100);
        spbxTriggerLevel->setMaximum(100);
        label_9 = new QLabel(tabTrigger);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 90, 51, 16));
        cbxTriggerCondition = new QComboBox(tabTrigger);
        cbxTriggerCondition->setObjectName(QStringLiteral("cbxTriggerCondition"));
        cbxTriggerCondition->setGeometry(QRect(62, 62, 83, 20));
        cbxTriggerSource = new QComboBox(tabTrigger);
        cbxTriggerSource->setObjectName(QStringLiteral("cbxTriggerSource"));
        cbxTriggerSource->setGeometry(QRect(62, 36, 83, 20));
        label_3 = new QLabel(tabTrigger);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(12, 36, 45, 16));
        tabWidget->addTab(tabTrigger, QString());
        groupBox_Buttons = new QGroupBox(QConfigDialog);
        groupBox_Buttons->setObjectName(QStringLiteral("groupBox_Buttons"));
        groupBox_Buttons->setGeometry(QRect(12, 474, 351, 41));
        btnOk = new QPushButton(groupBox_Buttons);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(25, 10, 115, 23));
        btnOk->setFocusPolicy(Qt::NoFocus);
        btnCancel = new QPushButton(groupBox_Buttons);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(210, 10, 117, 23));
        btnCancel->setFocusPolicy(Qt::NoFocus);
        QWidget::setTabOrder(cbxMode, ckbExternalClock);
        QWidget::setTabOrder(ckbExternalClock, ckbReferenceClock);
        QWidget::setTabOrder(ckbReferenceClock, ckbExpert1);
        QWidget::setTabOrder(ckbExpert1, ckbExpert2);
        QWidget::setTabOrder(ckbExpert2, spinBox_AvgCount);
        QWidget::setTabOrder(spinBox_AvgCount, cbxSampleRate);
        QWidget::setTabOrder(cbxSampleRate, txtExternalClock);
        QWidget::setTabOrder(txtExternalClock, ckbNbrRecords);
        QWidget::setTabOrder(ckbNbrRecords, txtNbrRecords);
        QWidget::setTabOrder(txtNbrRecords, checkBox_DisplaySingleSeg);
        QWidget::setTabOrder(checkBox_DisplaySingleSeg, dblSpinBox_CurrSeg);
        QWidget::setTabOrder(dblSpinBox_CurrSeg, txtPreTrigger);
        QWidget::setTabOrder(txtPreTrigger, txtPostTrigger);
        QWidget::setTabOrder(txtPostTrigger, ckbTriggerTimeOut);
        QWidget::setTabOrder(ckbTriggerTimeOut, dblSpinBox_TriggerTimeout);
        QWidget::setTabOrder(dblSpinBox_TriggerTimeout, cbxChannelIndex);
        QWidget::setTabOrder(cbxChannelIndex, ckbAllChannels);
        QWidget::setTabOrder(ckbAllChannels, cbxInputRange);
        QWidget::setTabOrder(cbxInputRange, sbxDCOffset);
        QWidget::setTabOrder(sbxDCOffset, rbtnChannelFiftyOhms);
        QWidget::setTabOrder(rbtnChannelFiftyOhms, rbtnChannelOneMegaOhms);
        QWidget::setTabOrder(rbtnChannelOneMegaOhms, rbtnChannelDC);
        QWidget::setTabOrder(rbtnChannelDC, rbtnChannelAC);
        QWidget::setTabOrder(rbtnChannelAC, radioButton_Filter);
        QWidget::setTabOrder(radioButton_Filter, ckbAdvanceTriggering);
        QWidget::setTabOrder(ckbAdvanceTriggering, cbxTriggerSource);
        QWidget::setTabOrder(cbxTriggerSource, cbxTriggerCondition);
        QWidget::setTabOrder(cbxTriggerCondition, spbxTriggerLevel);
        QWidget::setTabOrder(spbxTriggerLevel, tableAdvancedTriggering);
        QWidget::setTabOrder(tableAdvancedTriggering, rbtnTriggerAC);
        QWidget::setTabOrder(rbtnTriggerAC, rbtnTriggerDC);
        QWidget::setTabOrder(rbtnTriggerDC, rbtnTriggerOneVolt);
        QWidget::setTabOrder(rbtnTriggerOneVolt, rbtnTriggerFiveVolt);
        QWidget::setTabOrder(rbtnTriggerFiveVolt, rbtnTrigger3V3);
        QWidget::setTabOrder(rbtnTrigger3V3, rbtnTriggerFiftyOhm);
        QWidget::setTabOrder(rbtnTriggerFiftyOhm, rbtnTriggerHighZ);
        QWidget::setTabOrder(rbtnTriggerHighZ, tabWidget);
        QWidget::setTabOrder(tabWidget, rbtnTriggerPlus5V);

        retranslateUi(QConfigDialog);
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), QConfigDialog, SLOT(s_UpdateTab(int)));
        QObject::connect(ckbExpert1, SIGNAL(stateChanged(int)), QConfigDialog, SLOT(s_ChangeExpert1(int)));
        QObject::connect(spinBox_AvgCount, SIGNAL(editingFinished()), QConfigDialog, SLOT(s_ChangeAvgCount()));
        QObject::connect(ckbExpert2, SIGNAL(stateChanged(int)), QConfigDialog, SLOT(s_ChangeExpert2(int)));
        QObject::connect(ckbTriggerTimeOut, SIGNAL(stateChanged(int)), QConfigDialog, SLOT(s_EnableTriggerTimeOut(int)));
        QObject::connect(ckbAllChannels, SIGNAL(stateChanged(int)), QConfigDialog, SLOT(s_EnableAllChannels(int)));
        QObject::connect(cbxChannelIndex, SIGNAL(activated(int)), QConfigDialog, SLOT(s_ChangeChannelIndex(int)));
        QObject::connect(cbxTriggerCondition, SIGNAL(currentIndexChanged(int)), QConfigDialog, SLOT(s_ChangeTriggerCondition(int)));
        QObject::connect(ckbAdvanceTriggering, SIGNAL(stateChanged(int)), QConfigDialog, SLOT(s_EnableAdvanceTriggering(int)));
        QObject::connect(cbxTriggerSource, SIGNAL(currentIndexChanged(int)), QConfigDialog, SLOT(s_ChangeTriggerSource(int)));
        QObject::connect(ckbExternalClock, SIGNAL(stateChanged(int)), QConfigDialog, SLOT(s_EnableExternalClock(int)));
        QObject::connect(ckbReferenceClock, SIGNAL(stateChanged(int)), QConfigDialog, SLOT(s_EnableReferenceClock(int)));
        QObject::connect(cbxMode, SIGNAL(activated(int)), QConfigDialog, SLOT(s_ChangeAcquisitionMode(int)));
        QObject::connect(spbxTriggerLevel, SIGNAL(valueChanged(int)), QConfigDialog, SLOT(s_ChangeTriggerLevel(int)));
        QObject::connect(boxExternalTriggerParameters, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTrigger1V(bool)));
        QObject::connect(tableAdvancedTriggering, SIGNAL(itemClicked(QTableWidgetItem*)), QConfigDialog, SLOT(s_AdvancedTriggerItemClicked(QTableWidgetItem*)));
        QObject::connect(txtExternalClock, SIGNAL(editingFinished()), QConfigDialog, SLOT(s_UpdateExtClock()));
        QObject::connect(ckbNbrRecords, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_EnableNbrRecords(bool)));
        QObject::connect(radioButton_Filter, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_EnableFilter(bool)));
        QObject::connect(dblSpinBox_TriggerTimeout, SIGNAL(editingFinished()), QConfigDialog, SLOT(s_ChangeTriggerTimeOut()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QConfigDialog, SLOT(s_Cancel()));
        QObject::connect(btnOk, SIGNAL(clicked()), QConfigDialog, SLOT(s_Ok()));
        QObject::connect(cbxInputRange, SIGNAL(activated(int)), QConfigDialog, SLOT(s_ChangeInputRange(int)));
        QObject::connect(rbtnChannelDC, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_EnableDC(bool)));
        QObject::connect(rbtnChannelAC, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_EnableAC(bool)));
        QObject::connect(dblSpinBox_CurrSeg, SIGNAL(valueChanged(double)), QConfigDialog, SLOT(s_ChangeCurrSeg(double)));
        QObject::connect(dblSpinBox_CurrSeg, SIGNAL(editingFinished()), QConfigDialog, SLOT(s_ChangeCurrSeg()));
        QObject::connect(checkBox_DisplaySingleSeg, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_DisplaySingleSeg(bool)));
        QObject::connect(rbtnTriggerAC, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTriggerAC(bool)));
        QObject::connect(rbtnTriggerDC, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTriggerDC(bool)));
        QObject::connect(rbtnTriggerOneVolt, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTrigger1V(bool)));
        QObject::connect(rbtnTriggerFiveVolt, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTrigger5V(bool)));
        QObject::connect(rbtnTrigger3V3, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTrigger3V3(bool)));
        QObject::connect(rbtnTriggerFiftyOhm, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTrigger50Ohm(bool)));
        QObject::connect(rbtnTriggerHighZ, SIGNAL(clicked(bool)), QConfigDialog, SLOT(s_EnableTriggerHZ(bool)));
        QObject::connect(rbtnTriggerPlus5V, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_EnableTriggerPlus5V(bool)));
        QObject::connect(rbtnChannelFiftyOhms, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_Enable50Ohm(bool)));
        QObject::connect(rbtnChannelOneMegaOhms, SIGNAL(toggled(bool)), QConfigDialog, SLOT(s_Enable1MOhm(bool)));
        QObject::connect(sbxDCOffset, SIGNAL(editingFinished()), QConfigDialog, SLOT(s_ChangeDcOffset()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *QConfigDialog)
    {
        QConfigDialog->setWindowTitle(QApplication::translate("QConfigDialog", "Configure your system...", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        QConfigDialog->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        formGroupBox_Expert->setTitle(QApplication::translate("QConfigDialog", "Expert", Q_NULLPTR));
        label_7->setText(QApplication::translate("QConfigDialog", "Avg count", Q_NULLPTR));
        ckbExpert2->setText(QApplication::translate("QConfigDialog", "Expert 2", Q_NULLPTR));
        ckbExpert1->setText(QApplication::translate("QConfigDialog", "Expert 1", Q_NULLPTR));
        formGroupBox_Acquisition->setTitle(QApplication::translate("QConfigDialog", "Acquisition", Q_NULLPTR));
        label_SampleRate->setText(QApplication::translate("QConfigDialog", "Sample Rate", Q_NULLPTR));
        label_8->setText(QApplication::translate("QConfigDialog", "Number of records", Q_NULLPTR));
        ckbNbrRecords->setText(QString());
        checkBox_DisplaySingleSeg->setText(QString());
        groupBox_Depth->setTitle(QApplication::translate("QConfigDialog", "Depth", Q_NULLPTR));
        label_5->setText(QApplication::translate("QConfigDialog", "PreTrigger", Q_NULLPTR));
        label_6->setText(QApplication::translate("QConfigDialog", "PostTrigger", Q_NULLPTR));
        formGroupBox_Mode->setTitle(QApplication::translate("QConfigDialog", "Mode", Q_NULLPTR));
        ckbExternalClock->setText(QApplication::translate("QConfigDialog", "External Clock", Q_NULLPTR));
        ckbReferenceClock->setText(QApplication::translate("QConfigDialog", "Reference Clock", Q_NULLPTR));
        groupBox_TrigTimeout->setTitle(QApplication::translate("QConfigDialog", "Trigger timeout", Q_NULLPTR));
        ckbTriggerTimeOut->setText(QApplication::translate("QConfigDialog", "Trigger timeout, \316\274s", Q_NULLPTR));
        dblSpinBox_TriggerTimeout->setSpecialValueText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabAcquisition), QApplication::translate("QConfigDialog", "Acquisition", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QConfigDialog", "Configuration", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QConfigDialog", "Range", Q_NULLPTR));
        label_2->setText(QApplication::translate("QConfigDialog", "Input Range", Q_NULLPTR));
        label->setText(QApplication::translate("QConfigDialog", "DC Offset, %", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("QConfigDialog", "More", Q_NULLPTR));
        radioButton_Filter->setText(QApplication::translate("QConfigDialog", "Filter", Q_NULLPTR));
        groupBox_Impedance->setTitle(QApplication::translate("QConfigDialog", "Impedance", Q_NULLPTR));
        rbtnChannelFiftyOhms->setText(QApplication::translate("QConfigDialog", "50 Ohms", Q_NULLPTR));
        rbtnChannelOneMegaOhms->setText(QApplication::translate("QConfigDialog", "1 MOhms", Q_NULLPTR));
        groupBox_Coupling->setTitle(QApplication::translate("QConfigDialog", "Coupling", Q_NULLPTR));
        rbtnChannelDC->setText(QApplication::translate("QConfigDialog", "DC", Q_NULLPTR));
        rbtnChannelAC->setText(QApplication::translate("QConfigDialog", "AC", Q_NULLPTR));
        groupBox_Channel->setTitle(QApplication::translate("QConfigDialog", "Channels", Q_NULLPTR));
        ckbAllChannels->setText(QApplication::translate("QConfigDialog", "All Channels", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabChannel), QApplication::translate("QConfigDialog", "Channel", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableAdvancedTriggering->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QConfigDialog", "Source", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableAdvancedTriggering->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QConfigDialog", "Condition", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableAdvancedTriggering->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QConfigDialog", "Level", Q_NULLPTR));
        ckbAdvanceTriggering->setText(QApplication::translate("QConfigDialog", "Advanced Triggering", Q_NULLPTR));
        boxExternalTriggerParameters->setTitle(QApplication::translate("QConfigDialog", "External trigger", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("QConfigDialog", "Impedance", Q_NULLPTR));
        rbtnTriggerFiftyOhm->setText(QApplication::translate("QConfigDialog", "50 Ohm", Q_NULLPTR));
        rbtnTriggerHighZ->setText(QApplication::translate("QConfigDialog", "High Z", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("QConfigDialog", "Range", Q_NULLPTR));
        rbtnTriggerOneVolt->setText(QApplication::translate("QConfigDialog", "\302\2611V", Q_NULLPTR));
        rbtnTriggerFiveVolt->setText(QApplication::translate("QConfigDialog", "\302\2615V", Q_NULLPTR));
        rbtnTrigger3V3->setText(QApplication::translate("QConfigDialog", "+3.3V", Q_NULLPTR));
        rbtnTriggerPlus5V->setText(QApplication::translate("QConfigDialog", "+5V", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("QConfigDialog", "Coupling", Q_NULLPTR));
        rbtnTriggerAC->setText(QApplication::translate("QConfigDialog", "AC", Q_NULLPTR));
        rbtnTriggerDC->setText(QApplication::translate("QConfigDialog", "DC", Q_NULLPTR));
        label_4->setText(QApplication::translate("QConfigDialog", "Condition", Q_NULLPTR));
        label_9->setText(QApplication::translate("QConfigDialog", "Level, %", Q_NULLPTR));
        label_3->setText(QApplication::translate("QConfigDialog", "Source", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabTrigger), QApplication::translate("QConfigDialog", "Trigger", Q_NULLPTR));
        btnOk->setText(QApplication::translate("QConfigDialog", "OK", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QConfigDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QConfigDialog: public Ui_QConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCONFIGDIALOG_H
