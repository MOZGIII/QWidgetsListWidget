#ifndef QWIDGETLISTWIDGETDISPLAY_H
#define QWIDGETLISTWIDGETDISPLAY_H

#include <QAbstractItemModel>
#include <QWidget>

class QWidgetsListWidgetDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit QWidgetsListWidgetDisplay(const QModelIndex &index);

public slots:
    virtual void dataChanged();

protected:
    const QModelIndex &index() const;

private:
    QModelIndex m_index;
};

#endif // QWIDGETLISTWIDGETDISPLAY_H
