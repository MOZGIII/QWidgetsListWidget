#include "QWidgetsListWidgetDisplay.h"

QWidgetsListWidgetDisplay::QWidgetsListWidgetDisplay(const QModelIndex &index) :
    QWidget(0), // parent is always messed around with later anyway
    m_index(index)
{
}

void QWidgetsListWidgetDisplay::dataChanged()
{
}

const QModelIndex &QWidgetsListWidgetDisplay::index() const
{
    return m_index;
}
