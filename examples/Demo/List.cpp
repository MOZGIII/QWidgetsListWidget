#include "List.h"

#include "Display.h"

List::List(QWidget *parent) : QWidgetsListWidget(parent)
{
}

QWidgetsListWidgetDisplay *List::createDisplay(QListWidgetItem *listItem) const
{
    return new Display(listItem);
}
