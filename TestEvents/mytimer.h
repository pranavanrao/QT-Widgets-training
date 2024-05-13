#ifndef MYTIMER_H
#define MYTIMER_H

#include <QObject>
#include <QDebug>

class MyTimer : public QObject
{
    Q_OBJECT
public:
    explicit MyTimer(QObject *parent = nullptr);

public slots:
    void startDC();

protected:
    void timerEvent(QTimerEvent *event) override;

signals:
};

#endif // MYTIMER_H
