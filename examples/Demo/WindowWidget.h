#ifndef WINDOWWIDGET_H
#define WINDOWWIDGET_H

#include <QWidget>

namespace Ui {
class WindowWidget;
}

class WindowWidget : public QWidget
{
    Q_OBJECT

public:
    explicit WindowWidget(QWidget *parent = 0);
    ~WindowWidget();

private:
    Ui::WindowWidget *ui;
};

#endif // WINDOWWIDGET_H
