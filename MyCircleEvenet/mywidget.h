#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

protected:
    void mousePressEvent(QMouseEvent *event);
};
#endif // MYWIDGET_H
