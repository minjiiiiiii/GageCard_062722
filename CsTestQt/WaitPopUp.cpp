                                                                                                                                                                                                                                                                                                                                                                                                      #include "WaitPopup.h"
#include "qcoreapplication.h"

WaitPopUp::WaitPopUp()
{
    m_bProcessEvents = false;
    i32ProcessEventsTimer = 0;

    m_MsgBoxPleaseWait = new QMessageBox(QMessageBox::NoIcon, "", "Please wait...", QMessageBox::NoButton, nullptr, Qt::Dialog);
    m_MsgBoxPleaseWait->setWindowFlags(Qt::Dialog);
    m_MsgBoxPleaseWait->setStandardButtons(QMessageBox::NoButton);

    m_PleaseWaitTimer = new QTimer();
    m_PleaseWaitTimer->setSingleShot(true);
    m_PleaseWaitTimer->setInterval(1000);
    connect(m_PleaseWaitTimer, SIGNAL(timeout()), this, SLOT(s_StartPleaseWaitTimer()), Qt::DirectConnection);

    m_ProcessEventsTimer = new QTimer();
    m_ProcessEventsTimer->setSingleShot(false);
    m_ProcessEventsTimer->setInterval(500);
    connect(m_ProcessEventsTimer, SIGNAL(timeout()), this, SLOT(s_ProcessEvents()), Qt::DirectConnection);
    m_ProcessEventsTimer->start();
}

WaitPopUp::~WaitPopUp()
{
    delete m_PleaseWaitTimer;
    delete m_MsgBoxPleaseWait;
    delete m_ProcessEventsTimer;
}

void WaitPopUp::s_ProcessEvents()
{
    if(m_bProcessEvents) return;

    m_bProcessEvents = true;
    i32ProcessEventsTimer++;
    qDebug() << "WaitPopUp: Process events: " << i32ProcessEventsTimer;
    QCoreApplication::processEvents();
    m_bProcessEvents = false;
}

void WaitPopUp::s_StartPleaseWaitTimer()
{
    m_PleaseWaitTimer->start();
}

void WaitPopUp::s_ShowPleaseWait()
{
    qDebug() << "s_ShowPleaseWait";
    m_MsgBoxPleaseWait->show();
    m_PleaseWaitTimer->stop();
}

void WaitPopUp::s_HidePleaseWait()
{
    qDebug() << "s_HidePleaseWait";
    m_MsgBoxPleaseWait->hide();
    m_PleaseWaitTimer->stop();
}
