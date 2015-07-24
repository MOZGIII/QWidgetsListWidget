#include "List.h"

#include "Display.h"

List::List(QWidget *parent) : QWidgetsListWidget(parent)
{
}

QWidgetsListWidgetDisplay *List::createDisplay(const QModelIndex &index, QListWidgetItem *listItem) const
{
    return new Display(index, listItem);
}
