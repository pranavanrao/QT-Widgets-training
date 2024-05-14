#include "mywidget.h"

#include <QApplication>
#include <QListView>
#include <QTableView>
#include <QTreeView>
#include <QStringListModel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();

    QListView list_view;
    QTableView table_view;
    QTreeView tree_view;

    list_view.show();
    table_view.show();
    tree_view.show();

    QStringList list;
    list.append("Kohli");
    list.append("Rohit");
    list << "Smrithi" << "Perry";

    QStringListModel *model = new QStringListModel();
    model->setStringList(list);

    list_view.setModel(model);
    table_view.setModel(model);
    tree_view.setModel(model);

    return a.exec();
}
