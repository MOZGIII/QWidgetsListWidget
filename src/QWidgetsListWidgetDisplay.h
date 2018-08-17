#ifndef QWIDGETLISTWIDGETDISPLAY_H
#define QWIDGETLISTWIDGETDISPLAY_H

#include <QAbstractItemModel>
#include <QWidget>
#include <QListWidgetItem>

class QWidgetsListWidgetDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit QWidgetsListWidgetDisplay(QListWidgetItem *listItem);

public slots:
    virtual void dataChanged();

protected:
    QModelIndex index() const;
    QListWidgetItem *listItem() const;

private:
    QListWidgetItem *m_listItem;
};

#endif // QWIDGETLISTWIDGETDISPLAY_H
