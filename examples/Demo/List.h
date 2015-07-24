#ifndef LIST_H
#define LIST_H

#include <QObject>
#include "QWidgetsListWidget.h"

class List : public QWidgetsListWidget
{
    Q_OBJECT
public:
    explicit List(QWidget *parent = 0);

signals:

public slots:

protected slots:
    virtual QWidgetsListWidgetDisplay *createDisplay(const QModelIndex &index, QListWidgetItem *listItem) const override;
};

#endif // LIST_H
