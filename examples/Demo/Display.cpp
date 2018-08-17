#include "Display.h"
#include "ui_Display.h"

Display::Display(QListWidgetItem *listItem) :
    QWidgetsListWidgetDisplay(listItem),
    ui(new Ui::Display)
{
    ui->setupUi(this);
}

Display::~Display()
{
    delete ui;
}

void Display::dataChanged()
{
    ui->label->setText(index().data(Qt::DisplayRole).toString());
}
