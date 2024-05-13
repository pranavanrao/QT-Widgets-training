#include "mywidget.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    // QPushButton b1("R1", &w);
    w.setWindowTitle("Virat Kohli");
    w.setObjectName("King");
    w.show();

    MyWidget w1;
    // QPushButton b2("R2", &w1);
    w1.setWindowTitle("Rohit Sharma");
    w1.setObjectName("Hitman");
    w1.show();

    return a.exec();
}
