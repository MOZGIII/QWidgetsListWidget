#include "QWidgetsListWidgetDisplay.h"

QWidgetsListWidgetDisplay::QWidgetsListWidgetDisplay(const QModelIndex &index, QListWidgetItem *listItem) :
    QWidget(0), // parent is always messed around with later anyway
    m_index(index),
    m_listItem(listItem)
{
}

void QWidgetsListWidgetDisplay::dataChanged()
{
}

const QModelIndex &QWidgetsListWidgetDisplay::index() const
{
    return m_index;
}
QListWidgetItem *QWidgetsListWidgetDisplay::listItem() const
{
    return m_listItem;
}

