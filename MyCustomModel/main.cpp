#include "mywidget.h"

#include <QApplication>
#include <QListView>
#include "mycustommodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    // w.show();

    MyCustomModel *model = new MyCustomModel;
    QListView *view = new QListView;

    view->show();

    return a.exec();
}
