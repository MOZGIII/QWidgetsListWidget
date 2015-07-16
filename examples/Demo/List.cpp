#include "List.h"

#include "Display.h"

List::List(QWidget *parent) : QWidgetsListWidget(parent)
{
}

QWidgetsListWidgetDisplay *List::createDisplay(const QModelIndex &index) const
{
    return new Display(index);
}

