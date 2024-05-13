#include "mytimer.h"

#include <QTimerEvent>

MyTimer::MyTimer(QObject *parent)
    : QObject{parent}
{
    qDebug() << Q_FUNC_INFO << Qt::endl;
    int id1 = this->startTimer(5000);
    qDebug() << "ID1 : " << id1;
    // this->startTimer(5000);
}

void MyTimer::startDC()
{
    qDebug()  << Q_FUNC_INFO << "Start data collection" << Qt::endl;
}

void MyTimer::timerEvent(QTimerEvent *event)
{
    qDebug() << Q_FUNC_INFO << Qt::endl;
    qDebug() << "MY ID : " << event->timerId();
}
