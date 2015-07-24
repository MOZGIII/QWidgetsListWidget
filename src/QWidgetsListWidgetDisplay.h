#ifndef QWIDGETLISTWIDGETDISPLAY_H
#define QWIDGETLISTWIDGETDISPLAY_H

#include <QAbstractItemModel>
#include <QWidget>
#include <QListWidgetItem>

class QWidgetsListWidgetDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit QWidgetsListWidgetDisplay(const QModelIndex &index, QListWidgetItem *listItem);

public slots:
    virtual void dataChanged();

protected:
    const QModelIndex &index() const;
    QListWidgetItem *listItem() const;

private:
    QModelIndex m_index;
    QListWidgetItem *m_listItem;
};

#endif // QWIDGETLISTWIDGETDISPLAY_H
