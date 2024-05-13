#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

bool MyWidget::event(QEvent *ev)
{
    qDebug() << Q_FUNC_INFO << Qt::endl;
    if (ev->type() == QEvent::MouseButtonPress) {
        return QWidget::event(ev);
    } else {
        return true;
    }
    // return true;
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::mousePressEvent(QMouseEvent *event)
{
    qDebug() << Q_FUNC_INFO << "Mouse press event received" << this->objectName() << Qt::endl;

    QString val = QString("%1_%2").arg(event->x()).arg(event->y());
    QPushButton *b1 = new QPushButton(val, this);
    b1->setGeometry(event->x(), event->y(), 100, 50);
    b1->show();
    qDebug() << event->pos() << " Type : " << event->type();

    emit myPress();
}

void MyWidget::mouseMoveEvent(QMouseEvent *event1)
{
    qDebug() << Q_FUNC_INFO << "Mouse move event received" << this->objectName() << Qt::endl;
    qDebug() << event1->pos();
}

void MyWidget::mouseReleaseEvent(QMouseEvent *event2)
{
    qDebug() << Q_FUNC_INFO << "Mouse release event received" << this->objectName() << Qt::endl;
    qDebug() << event2->pos();
}
