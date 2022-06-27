/********************************************************************************
** Form generated from reading UI file 'cstestqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSTESTQT_H
#define UI_CSTESTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "qscope.h"

QT_BEGIN_NAMESPACE

class Ui_CsTestQtClass
{
public:
    QAction *actionAcquire;
    QAction *actionContinuous;
    QAction *actionAbort;
    QAction *actionForce_Trigger;
    QAction *actionForce_Calibration;
    QAction *actionXfer_Mem;
    QAction *actionAddon_Reset;
    QAction *actionSystem_Reset;
    QAction *actionGoToSample;
    QAction *actionSelect_System;
    QAction *actionInterleavedData;
    QAction *action;
    QAction *actionChannel_Config;
    QAction *actionTrigger_Config;
    QAction *actionPerformance_Test;
    QAction *actionBusmaster_Synchronous;
    QAction *actionBusmaster_Asynchronous;
    QAction *actionSlave_Synchronous;
    QAction *actionDisplay_Controls;
    QAction *actionAbout_CsTest;
    QAction *actionConfiguration;
    QAction *actionTBAcquire;
    QAction *actionTBContinuous;
    QAction *actionTBAbort;
    QAction *actionTBForce_Trigger;
    QAction *actionTBForce_Calibration;
    QAction *actionTBXfer_Mem;
    QAction *actionTBAddOn_Reset;
    QAction *actionTBSystem_Reset;
    QAction *actionTBGoToSample;
    QAction *actionTBConnectPoints;
    QAction *actionTBOverdraw;
    QAction *actionTBClearGraph;
    QAction *actionTBShowCursor;
    QAction *actionTimeStamp;
    QAction *actionRead_Write_registers;
    QAction *actionNIOS_SPI_command;
    QAction *actionMulrec;
    QAction *actionSave_Channels;
    QAction *actionLoad_Channel;
    QAction *actionLoad_Data;
    QAction *actionExit;
    QScope *mainScope;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuControls;
    QMenu *menuParameters;
    QMenu *menuTools;
    QMenu *menuData_Transfer;
    QMenu *menuHelp;
    QMenu *menuDebug;
    QStatusBar *statusBar;
    QToolBar *ShortcutToolBar;

    void setupUi(QMainWindow *CsTestQtClass)
    {
        if (CsTestQtClass->objectName().isEmpty())
            CsTestQtClass->setObjectName(QStringLiteral("CsTestQtClass"));
        CsTestQtClass->resize(1600, 664);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        CsTestQtClass->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("CsTestQt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CsTestQtClass->setWindowIcon(icon);
        actionAcquire = new QAction(CsTestQtClass);
        actionAcquire->setObjectName(QStringLiteral("actionAcquire"));
        QFont font1;
        font1.setPointSize(9);
        actionAcquire->setFont(font1);
        actionContinuous = new QAction(CsTestQtClass);
        actionContinuous->setObjectName(QStringLiteral("actionContinuous"));
        actionContinuous->setCheckable(true);
        actionAbort = new QAction(CsTestQtClass);
        actionAbort->setObjectName(QStringLiteral("actionAbort"));
        actionForce_Trigger = new QAction(CsTestQtClass);
        actionForce_Trigger->setObjectName(QStringLiteral("actionForce_Trigger"));
        actionForce_Calibration = new QAction(CsTestQtClass);
        actionForce_Calibration->setObjectName(QStringLiteral("actionForce_Calibration"));
        actionForce_Calibration->setVisible(false);
        actionXfer_Mem = new QAction(CsTestQtClass);
        actionXfer_Mem->setObjectName(QStringLiteral("actionXfer_Mem"));
        actionXfer_Mem->setVisible(false);
        actionAddon_Reset = new QAction(CsTestQtClass);
        actionAddon_Reset->setObjectName(QStringLiteral("actionAddon_Reset"));
        actionAddon_Reset->setVisible(false);
        actionSystem_Reset = new QAction(CsTestQtClass);
        actionSystem_Reset->setObjectName(QStringLiteral("actionSystem_Reset"));
        actionSystem_Reset->setCheckable(false);
        actionSystem_Reset->setChecked(false);
        actionSystem_Reset->setEnabled(false);
        actionSystem_Reset->setVisible(false);
        actionGoToSample = new QAction(CsTestQtClass);
        actionGoToSample->setObjectName(QStringLiteral("actionGoToSample"));
        actionGoToSample->setVisible(false);
        actionSelect_System = new QAction(CsTestQtClass);
        actionSelect_System->setObjectName(QStringLiteral("actionSelect_System"));
        actionSelect_System->setEnabled(true);
        actionInterleavedData = new QAction(CsTestQtClass);
        actionInterleavedData->setObjectName(QStringLiteral("actionInterleavedData"));
        actionInterleavedData->setCheckable(true);
        action = new QAction(CsTestQtClass);
        action->setObjectName(QStringLiteral("action"));
        actionChannel_Config = new QAction(CsTestQtClass);
        actionChannel_Config->setObjectName(QStringLiteral("actionChannel_Config"));
        actionTrigger_Config = new QAction(CsTestQtClass);
        actionTrigger_Config->setObjectName(QStringLiteral("actionTrigger_Config"));
        actionPerformance_Test = new QAction(CsTestQtClass);
        actionPerformance_Test->setObjectName(QStringLiteral("actionPerformance_Test"));
        actionBusmaster_Synchronous = new QAction(CsTestQtClass);
        actionBusmaster_Synchronous->setObjectName(QStringLiteral("actionBusmaster_Synchronous"));
        actionBusmaster_Synchronous->setCheckable(true);
        actionBusmaster_Synchronous->setChecked(false);
        QFont font2;
        font2.setPointSize(10);
        actionBusmaster_Synchronous->setFont(font2);
        actionBusmaster_Asynchronous = new QAction(CsTestQtClass);
        actionBusmaster_Asynchronous->setObjectName(QStringLiteral("actionBusmaster_Asynchronous"));
        actionBusmaster_Asynchronous->setCheckable(true);
        actionSlave_Synchronous = new QAction(CsTestQtClass);
        actionSlave_Synchronous->setObjectName(QStringLiteral("actionSlave_Synchronous"));
        actionSlave_Synchronous->setCheckable(true);
        actionDisplay_Controls = new QAction(CsTestQtClass);
        actionDisplay_Controls->setObjectName(QStringLiteral("actionDisplay_Controls"));
        actionAbout_CsTest = new QAction(CsTestQtClass);
        actionAbout_CsTest->setObjectName(QStringLiteral("actionAbout_CsTest"));
        actionConfiguration = new QAction(CsTestQtClass);
        actionConfiguration->setObjectName(QStringLiteral("actionConfiguration"));
        actionConfiguration->setFont(font1);
        actionTBAcquire = new QAction(CsTestQtClass);
        actionTBAcquire->setObjectName(QStringLiteral("actionTBAcquire"));
        actionTBAcquire->setCheckable(false);
        QFont font3;
        font3.setFamily(QStringLiteral("Franklin Gothic Medium Cond"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        actionTBAcquire->setFont(font3);
        actionTBContinuous = new QAction(CsTestQtClass);
        actionTBContinuous->setObjectName(QStringLiteral("actionTBContinuous"));
        actionTBContinuous->setCheckable(true);
        QFont font4;
        font4.setFamily(QStringLiteral("Franklin Gothic Medium Cond"));
        font4.setPointSize(9);
        actionTBContinuous->setFont(font4);
        actionTBAbort = new QAction(CsTestQtClass);
        actionTBAbort->setObjectName(QStringLiteral("actionTBAbort"));
        actionTBAbort->setFont(font4);
        actionTBForce_Trigger = new QAction(CsTestQtClass);
        actionTBForce_Trigger->setObjectName(QStringLiteral("actionTBForce_Trigger"));
        actionTBForce_Trigger->setFont(font4);
        actionTBForce_Trigger->setVisible(true);
        actionTBForce_Calibration = new QAction(CsTestQtClass);
        actionTBForce_Calibration->setObjectName(QStringLiteral("actionTBForce_Calibration"));
        actionTBForce_Calibration->setFont(font4);
        actionTBForce_Calibration->setVisible(true);
        actionTBXfer_Mem = new QAction(CsTestQtClass);
        actionTBXfer_Mem->setObjectName(QStringLiteral("actionTBXfer_Mem"));
        actionTBXfer_Mem->setFont(font4);
        actionTBXfer_Mem->setVisible(false);
        actionTBAddOn_Reset = new QAction(CsTestQtClass);
        actionTBAddOn_Reset->setObjectName(QStringLiteral("actionTBAddOn_Reset"));
        actionTBAddOn_Reset->setFont(font4);
        actionTBAddOn_Reset->setVisible(false);
        actionTBAddOn_Reset->setIconVisibleInMenu(true);
        actionTBSystem_Reset = new QAction(CsTestQtClass);
        actionTBSystem_Reset->setObjectName(QStringLiteral("actionTBSystem_Reset"));
        actionTBSystem_Reset->setFont(font4);
        actionTBSystem_Reset->setVisible(false);
        actionTBGoToSample = new QAction(CsTestQtClass);
        actionTBGoToSample->setObjectName(QStringLiteral("actionTBGoToSample"));
        actionTBGoToSample->setFont(font4);
        actionTBConnectPoints = new QAction(CsTestQtClass);
        actionTBConnectPoints->setObjectName(QStringLiteral("actionTBConnectPoints"));
        actionTBConnectPoints->setCheckable(true);
        actionTBConnectPoints->setFont(font4);
        actionTBOverdraw = new QAction(CsTestQtClass);
        actionTBOverdraw->setObjectName(QStringLiteral("actionTBOverdraw"));
        actionTBOverdraw->setCheckable(true);
        actionTBOverdraw->setFont(font4);
        actionTBClearGraph = new QAction(CsTestQtClass);
        actionTBClearGraph->setObjectName(QStringLiteral("actionTBClearGraph"));
        actionTBClearGraph->setFont(font4);
        actionTBShowCursor = new QAction(CsTestQtClass);
        actionTBShowCursor->setObjectName(QStringLiteral("actionTBShowCursor"));
        actionTBShowCursor->setCheckable(true);
        actionTBShowCursor->setFont(font4);
        actionTimeStamp = new QAction(CsTestQtClass);
        actionTimeStamp->setObjectName(QStringLiteral("actionTimeStamp"));
        actionRead_Write_registers = new QAction(CsTestQtClass);
        actionRead_Write_registers->setObjectName(QStringLiteral("actionRead_Write_registers"));
        actionNIOS_SPI_command = new QAction(CsTestQtClass);
        actionNIOS_SPI_command->setObjectName(QStringLiteral("actionNIOS_SPI_command"));
        actionMulrec = new QAction(CsTestQtClass);
        actionMulrec->setObjectName(QStringLiteral("actionMulrec"));
        actionSave_Channels = new QAction(CsTestQtClass);
        actionSave_Channels->setObjectName(QStringLiteral("actionSave_Channels"));
        actionSave_Channels->setFont(font1);
        actionLoad_Channel = new QAction(CsTestQtClass);
        actionLoad_Channel->setObjectName(QStringLiteral("actionLoad_Channel"));
        actionLoad_Data = new QAction(CsTestQtClass);
        actionLoad_Data->setObjectName(QStringLiteral("actionLoad_Data"));
        actionExit = new QAction(CsTestQtClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        mainScope = new QScope(CsTestQtClass);
        mainScope->setObjectName(QStringLiteral("mainScope"));
        mainScope->setMinimumSize(QSize(0, 0));
        CsTestQtClass->setCentralWidget(mainScope);
        menuBar = new QMenuBar(CsTestQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuControls = new QMenu(menuBar);
        menuControls->setObjectName(QStringLiteral("menuControls"));
        menuParameters = new QMenu(menuBar);
        menuParameters->setObjectName(QStringLiteral("menuParameters"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuData_Transfer = new QMenu(menuBar);
        menuData_Transfer->setObjectName(QStringLiteral("menuData_Transfer"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QStringLiteral("menuDebug"));
        CsTestQtClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(CsTestQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setMinimumSize(QSize(0, 20));
        CsTestQtClass->setStatusBar(statusBar);
        ShortcutToolBar = new QToolBar(CsTestQtClass);
        ShortcutToolBar->setObjectName(QStringLiteral("ShortcutToolBar"));
        QFont font5;
        font5.setFamily(QStringLiteral("Arial Narrow"));
        font5.setPointSize(7);
        ShortcutToolBar->setFont(font5);
        CsTestQtClass->addToolBar(Qt::TopToolBarArea, ShortcutToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuControls->menuAction());
        menuBar->addAction(menuParameters->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuData_Transfer->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuFile->addAction(actionSave_Channels);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Channel);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Data);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuControls->addAction(actionAcquire);
        menuControls->addAction(actionContinuous);
        menuControls->addAction(actionAbort);
        menuControls->addAction(actionForce_Trigger);
        menuControls->addAction(actionForce_Calibration);
        menuControls->addAction(actionXfer_Mem);
        menuControls->addAction(actionAddon_Reset);
        menuControls->addAction(actionSystem_Reset);
        menuControls->addSeparator();
        menuControls->addAction(actionGoToSample);
        menuControls->addAction(actionSelect_System);
        menuControls->addAction(actionInterleavedData);
        menuParameters->addAction(actionConfiguration);
        menuTools->addAction(actionPerformance_Test);
        menuData_Transfer->addAction(actionBusmaster_Synchronous);
        menuData_Transfer->addAction(actionBusmaster_Asynchronous);
        menuData_Transfer->addAction(actionSlave_Synchronous);
        menuHelp->addAction(actionDisplay_Controls);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_CsTest);
        menuDebug->addAction(actionTimeStamp);
        menuDebug->addAction(actionRead_Write_registers);
        menuDebug->addAction(actionNIOS_SPI_command);
        menuDebug->addAction(actionMulrec);
        ShortcutToolBar->addAction(actionTBAcquire);
        ShortcutToolBar->addAction(actionTBContinuous);
        ShortcutToolBar->addAction(actionTBAbort);
        ShortcutToolBar->addAction(actionTBForce_Trigger);
        ShortcutToolBar->addAction(actionTBForce_Calibration);
        ShortcutToolBar->addAction(actionTBXfer_Mem);
        ShortcutToolBar->addAction(actionTBAddOn_Reset);
        ShortcutToolBar->addAction(actionTBSystem_Reset);
        ShortcutToolBar->addAction(actionTBGoToSample);
        ShortcutToolBar->addAction(actionTBConnectPoints);
        ShortcutToolBar->addAction(actionTBOverdraw);
        ShortcutToolBar->addAction(actionTBClearGraph);
        ShortcutToolBar->addAction(actionTBShowCursor);

        retranslateUi(CsTestQtClass);
        QObject::connect(actionAbout_CsTest, SIGNAL(triggered()), CsTestQtClass, SLOT(s_OpenAboutDialog()));
        QObject::connect(actionDisplay_Controls, SIGNAL(triggered()), CsTestQtClass, SLOT(s_OpenControlsDialog()));
        QObject::connect(actionBusmaster_Synchronous, SIGNAL(triggered()), CsTestQtClass, SLOT(s_SetBusMasterSynchronous()));
        QObject::connect(actionBusmaster_Asynchronous, SIGNAL(triggered()), CsTestQtClass, SLOT(s_SetBusMasterASynchronous()));
        QObject::connect(actionSlave_Synchronous, SIGNAL(triggered()), CsTestQtClass, SLOT(s_SetSlaveSynchronous()));
        QObject::connect(actionPerformance_Test, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoPerformanceTest()));
        QObject::connect(actionConfiguration, SIGNAL(triggered()), CsTestQtClass, SLOT(s_ConfigureSystem()));
        QObject::connect(actionSelect_System, SIGNAL(triggered()), CsTestQtClass, SLOT(s_SelectSystem()));
        QObject::connect(actionTBAcquire, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoAcquisition()));
        QObject::connect(actionTBContinuous, SIGNAL(toggled(bool)), CsTestQtClass, SLOT(s_SetContinuousMode(bool)));
        QObject::connect(actionTBAbort, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoAbort()));
        QObject::connect(actionTBForce_Trigger, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoForceTrigger()));
        QObject::connect(actionTBForce_Calibration, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoForceCalibration()));
        QObject::connect(actionTBXfer_Mem, SIGNAL(triggered()), CsTestQtClass, SLOT(s_XferMem()));
        QObject::connect(actionTBAddOn_Reset, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoAddOnReset()));
        QObject::connect(actionTBSystem_Reset, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoSystemReset()));
        QObject::connect(actionTBGoToSample, SIGNAL(triggered()), CsTestQtClass, SLOT(s_GoToSample()));
        QObject::connect(actionTBConnectPoints, SIGNAL(toggled(bool)), CsTestQtClass, SLOT(s_ConnectPoints(bool)));
        QObject::connect(actionTBOverdraw, SIGNAL(toggled(bool)), CsTestQtClass, SLOT(s_Overdraw(bool)));
        QObject::connect(actionTBClearGraph, SIGNAL(triggered()), CsTestQtClass, SLOT(s_ClearGraph()));
        QObject::connect(actionTBShowCursor, SIGNAL(toggled(bool)), CsTestQtClass, SLOT(s_ShowCursor(bool)));
        QObject::connect(actionAcquire, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoAcquisition()));
        QObject::connect(actionAbort, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoAbort()));
        QObject::connect(actionContinuous, SIGNAL(toggled(bool)), CsTestQtClass, SLOT(s_SetContinuousMode(bool)));
        QObject::connect(actionInterleavedData, SIGNAL(toggled(bool)), CsTestQtClass, SLOT(s_SetInterleavedData(bool)));
        QObject::connect(actionForce_Trigger, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoForceTrigger()));
        QObject::connect(actionForce_Calibration, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoForceCalibration()));
        QObject::connect(actionXfer_Mem, SIGNAL(triggered()), CsTestQtClass, SLOT(s_XferMem()));
        QObject::connect(actionAddon_Reset, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoAddOnReset()));
        QObject::connect(actionSystem_Reset, SIGNAL(triggered()), CsTestQtClass, SLOT(s_DoSystemReset()));
        QObject::connect(actionGoToSample, SIGNAL(triggered()), CsTestQtClass, SLOT(s_GoToSample()));
        QObject::connect(actionRead_Write_registers, SIGNAL(triggered()), CsTestQtClass, SLOT(s_ReadWriteRegs()));
        QObject::connect(actionNIOS_SPI_command, SIGNAL(triggered()), CsTestQtClass, SLOT(s_NiosSpiCmd()));
        QObject::connect(actionTimeStamp, SIGNAL(triggered()), CsTestQtClass, SLOT(s_SaveTimeStamp()));
        QObject::connect(actionMulrec, SIGNAL(triggered()), CsTestQtClass, SLOT(s_Mulrec()));
        QObject::connect(actionExit, SIGNAL(triggered()), CsTestQtClass, SLOT(s_Close()));
        QObject::connect(actionSave_Channels, SIGNAL(triggered()), CsTestQtClass, SLOT(s_SaveChannels()));
        QObject::connect(actionLoad_Data, SIGNAL(triggered()), CsTestQtClass, SLOT(s_LoadData()));
        QObject::connect(actionLoad_Channel, SIGNAL(triggered()), CsTestQtClass, SLOT(s_LoadChannels()));

        QMetaObject::connectSlotsByName(CsTestQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *CsTestQtClass)
    {
        CsTestQtClass->setWindowTitle(QApplication::translate("CsTestQtClass", "CsTestQt", Q_NULLPTR));
        actionAcquire->setText(QApplication::translate("CsTestQtClass", "Acquire", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAcquire->setShortcut(QApplication::translate("CsTestQtClass", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionContinuous->setText(QApplication::translate("CsTestQtClass", "Continuous", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionContinuous->setShortcut(QApplication::translate("CsTestQtClass", "F2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAbort->setText(QApplication::translate("CsTestQtClass", "Abort", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAbort->setShortcut(QApplication::translate("CsTestQtClass", "F3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionForce_Trigger->setText(QApplication::translate("CsTestQtClass", "Force Trigger", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionForce_Trigger->setShortcut(QApplication::translate("CsTestQtClass", "F4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionForce_Calibration->setText(QApplication::translate("CsTestQtClass", "Force Calibration", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionForce_Calibration->setShortcut(QApplication::translate("CsTestQtClass", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionXfer_Mem->setText(QApplication::translate("CsTestQtClass", "Xfer mem", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionXfer_Mem->setShortcut(QApplication::translate("CsTestQtClass", "F6", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAddon_Reset->setText(QApplication::translate("CsTestQtClass", "Addon Reset", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAddon_Reset->setShortcut(QApplication::translate("CsTestQtClass", "Ctrl+F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSystem_Reset->setText(QApplication::translate("CsTestQtClass", "System Reset", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSystem_Reset->setShortcut(QApplication::translate("CsTestQtClass", "Alt+F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGoToSample->setText(QApplication::translate("CsTestQtClass", "Go to sample", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionGoToSample->setShortcut(QApplication::translate("CsTestQtClass", "F8", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelect_System->setText(QApplication::translate("CsTestQtClass", "Select System", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelect_System->setShortcut(QApplication::translate("CsTestQtClass", "F10", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionInterleavedData->setText(QApplication::translate("CsTestQtClass", "Interleaved data", Q_NULLPTR));
        action->setText(QApplication::translate("CsTestQtClass", "Acquisition Config", Q_NULLPTR));
        actionChannel_Config->setText(QApplication::translate("CsTestQtClass", "Channel Config", Q_NULLPTR));
        actionTrigger_Config->setText(QApplication::translate("CsTestQtClass", "Trigger Config", Q_NULLPTR));
        actionPerformance_Test->setText(QApplication::translate("CsTestQtClass", "Performance Test...", Q_NULLPTR));
        actionBusmaster_Synchronous->setText(QApplication::translate("CsTestQtClass", "Busmaster - Synchronous", Q_NULLPTR));
        actionBusmaster_Asynchronous->setText(QApplication::translate("CsTestQtClass", "Busmaster - Asynchronous", Q_NULLPTR));
        actionSlave_Synchronous->setText(QApplication::translate("CsTestQtClass", "Slave - Synchronous", Q_NULLPTR));
        actionDisplay_Controls->setText(QApplication::translate("CsTestQtClass", "Display Controls...", Q_NULLPTR));
        actionAbout_CsTest->setText(QApplication::translate("CsTestQtClass", "About CsTestQt...", Q_NULLPTR));
        actionConfiguration->setText(QApplication::translate("CsTestQtClass", "Configuration", Q_NULLPTR));
        actionTBAcquire->setText(QApplication::translate("CsTestQtClass", "Acquire", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBAcquire->setToolTip(QApplication::translate("CsTestQtClass", "Acquire", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTBContinuous->setText(QApplication::translate("CsTestQtClass", "Continuous", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBContinuous->setToolTip(QApplication::translate("CsTestQtClass", "Continuous", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTBAbort->setText(QApplication::translate("CsTestQtClass", "Abort", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBAbort->setToolTip(QApplication::translate("CsTestQtClass", "Abort", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTBForce_Trigger->setText(QApplication::translate("CsTestQtClass", "Force Trigger", Q_NULLPTR));
        actionTBForce_Calibration->setText(QApplication::translate("CsTestQtClass", "Force Calib", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBForce_Calibration->setToolTip(QApplication::translate("CsTestQtClass", "Force Calibration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTBXfer_Mem->setText(QApplication::translate("CsTestQtClass", "Xfer mem", Q_NULLPTR));
        actionTBAddOn_Reset->setText(QApplication::translate("CsTestQtClass", "AddOn Reset", Q_NULLPTR));
        actionTBSystem_Reset->setText(QApplication::translate("CsTestQtClass", "System Reset", Q_NULLPTR));
        actionTBGoToSample->setText(QApplication::translate("CsTestQtClass", "Go to sample", Q_NULLPTR));
        actionTBConnectPoints->setText(QApplication::translate("CsTestQtClass", "Connect Points", Q_NULLPTR));
        actionTBConnectPoints->setIconText(QApplication::translate("CsTestQtClass", "Connect Dots", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBConnectPoints->setToolTip(QApplication::translate("CsTestQtClass", "Connect Points", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTBOverdraw->setText(QApplication::translate("CsTestQtClass", "Overdraw", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBOverdraw->setToolTip(QApplication::translate("CsTestQtClass", "Overdraw", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTBClearGraph->setText(QApplication::translate("CsTestQtClass", "Clear graph", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBClearGraph->setToolTip(QApplication::translate("CsTestQtClass", "Clear graph", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTBShowCursor->setText(QApplication::translate("CsTestQtClass", "Cursor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTBShowCursor->setToolTip(QApplication::translate("CsTestQtClass", "Cursor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTimeStamp->setText(QApplication::translate("CsTestQtClass", "TimeStamp ...", Q_NULLPTR));
        actionRead_Write_registers->setText(QApplication::translate("CsTestQtClass", "Read/Write registers ...", Q_NULLPTR));
        actionNIOS_SPI_command->setText(QApplication::translate("CsTestQtClass", "NIOS/SPI command ...", Q_NULLPTR));
        actionMulrec->setText(QApplication::translate("CsTestQtClass", "Mulrec ...", Q_NULLPTR));
        actionSave_Channels->setText(QApplication::translate("CsTestQtClass", "Save Channels", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave_Channels->setShortcut(QApplication::translate("CsTestQtClass", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLoad_Channel->setText(QApplication::translate("CsTestQtClass", "Load Channel", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionLoad_Channel->setShortcut(QApplication::translate("CsTestQtClass", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLoad_Data->setText(QApplication::translate("CsTestQtClass", "Load Data", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionLoad_Data->setShortcut(QApplication::translate("CsTestQtClass", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("CsTestQtClass", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("CsTestQtClass", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        menuFile->setTitle(QApplication::translate("CsTestQtClass", "&File", Q_NULLPTR));
        menuControls->setTitle(QApplication::translate("CsTestQtClass", "&Controls", Q_NULLPTR));
        menuParameters->setTitle(QApplication::translate("CsTestQtClass", "&Parameters", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("CsTestQtClass", "&Tools", Q_NULLPTR));
        menuData_Transfer->setTitle(QApplication::translate("CsTestQtClass", "&Data Transfer", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("CsTestQtClass", "&Help", Q_NULLPTR));
        menuDebug->setTitle(QApplication::translate("CsTestQtClass", "De&bug", Q_NULLPTR));
        ShortcutToolBar->setWindowTitle(QApplication::translate("CsTestQtClass", "Shortcuts ToolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CsTestQtClass: public Ui_CsTestQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSTESTQT_H
