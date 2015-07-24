#ifndef QWIDGETSLISTWIDGET_H
#define QWIDGETSLISTWIDGET_H

#include <QListWidget>

class QWidgetsListWidgetDisplay;

class QWidgetsListWidget : public QListWidget
{
    Q_OBJECT
public:
    explicit QWidgetsListWidget(QWidget *parent = 0);

protected slots:
    virtual void rowsInserted(const QModelIndex &parent, int start, int end) override;
    virtual void rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end);
    virtual void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight, const QVector<int> &roles) override;
    virtual QWidgetsListWidgetDisplay *createDisplay(const QModelIndex &index, QListWidgetItem *listItem) const;

protected:
    QModelIndex index(int row, int column = 0, const QModelIndex &parent = QModelIndex()) const;
};

#endif // QWIDGETSLISTWIDGET_H
