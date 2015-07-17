#ifndef DISPLAY_H
#define DISPLAY_H

#include "QWidgetsListWidgetDisplay.h"

namespace Ui {
class Display;
}

class Display : public QWidgetsListWidgetDisplay
{
    Q_OBJECT

public:
    explicit Display(const QModelIndex &index);
    ~Display();

public slots:
    virtual void dataChanged();

private:
    Ui::Display *ui;
};

#endif // DISPLAY_H
