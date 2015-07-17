#include "QWidgetsListWidget.h"
#include "QWidgetsListWidgetDisplay.h"

#include <QDebug>
#include <QStyledItemDelegate>

class QWidgetsListWidgetItemDelegate : public QStyledItemDelegate
{
protected:
    virtual void initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const override
    {
        QStyledItemDelegate::initStyleOption(option, index);

        // Remove selected state
        option->state &= ~QStyle::State_Selected;

        // Remove text
        option->text = QString();
    }
};

QWidgetsListWidget::QWidgetsListWidget(QWidget *parent) :
    QListWidget(parent)
{
    setItemDelegate(new QWidgetsListWidgetItemDelegate());
}

void QWidgetsListWidget::rowsInserted(const QModelIndex &parent, int start, int end)
{
    for (int row = start; row <= end; ++row) {
        auto listIndex = index(row);
        Q_ASSERT(listIndex.isValid());

        if(indexWidget(listIndex) == nullptr) {
            // setItemWidget passes ownership to List's viewport
            auto widget = createDisplay(listIndex);
            setIndexWidget(listIndex, widget);
            item(row)->setSizeHint(widget->sizeHint());
        }
    }
    QListWidget::rowsInserted(parent, start, end);
}

void QWidgetsListWidget::rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end)
{
    for (int row = start; row <= end; ++row) {
        auto listIndex = index(row);
        Q_ASSERT(listIndex.isValid());

        auto widget = indexWidget(listIndex);
        if(widget != nullptr) {
            setIndexWidget(listIndex, nullptr);
            widget->deleteLater();
        }
    }
    QListWidget::rowsAboutToBeRemoved(parent, start, end);
}

void QWidgetsListWidget::dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight, const QVector<int> &roles)
{
    for (int row = topLeft.row(); row <= bottomRight.row(); ++row) {
        auto listItem = item(row);
        Q_ASSERT(listItem != nullptr);

        auto widget = dynamic_cast<QWidgetsListWidgetDisplay*>(itemWidget(listItem));
        if(widget != nullptr) {
            widget->dataChanged();
            listItem->setSizeHint(widget->sizeHint());
        }
    }
    QListWidget::dataChanged(topLeft, bottomRight, roles);
}

QWidgetsListWidgetDisplay *QWidgetsListWidget::createDisplay(const QModelIndex &index) const
{
    return new QWidgetsListWidgetDisplay(index);
}

QModelIndex QWidgetsListWidget::index(int row, int column, const QModelIndex &parent) const
{
    return model()->index(row, column, parent);
}
