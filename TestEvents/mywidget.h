#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyWidget;
}
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    bool event(QEvent *ev);
    ~MyWidget();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event1);
    void mouseReleaseEvent(QMouseEvent *event2);

signals:
    void myPress();
    void myMove();
    void myRelease();
    void myClick();

private:
    Ui::MyWidget *ui;
};
#endif // MYWIDGET_H
