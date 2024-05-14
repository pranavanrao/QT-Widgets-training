#ifndef MYCUSTOMMODEL_H
#define MYCUSTOMMODEL_H

#include <QAbstractListModel>

class MyCustomModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit MyCustomModel(QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section,
                        Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
};

#endif // MYCUSTOMMODEL_H
