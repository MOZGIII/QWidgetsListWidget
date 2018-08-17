#include "QWidgetsListWidgetDisplay.h"
#include "QWidgetsListWidget.h"

QWidgetsListWidgetDisplay::QWidgetsListWidgetDisplay(QListWidgetItem *listItem) :
    QWidget(0), // parent is always messed around with later anyway
    m_listItem(listItem)
{
}

void QWidgetsListWidgetDisplay::dataChanged()
{
}

QModelIndex QWidgetsListWidgetDisplay::index() const
{
	QWidgetsListWidget* pListWidget = static_cast<QWidgetsListWidget*>(listItem()->listWidget());
	return pListWidget->index(pListWidget->row(listItem()));
}

QListWidgetItem *QWidgetsListWidgetDisplay::listItem() const
{
    return m_listItem;
}

