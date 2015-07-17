#include "WindowWidget.h"
#include "ui_WindowWidget.h"

WindowWidget::WindowWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowWidget)
{
    ui->setupUi(this);

    ui->listWidget->addItem("123");
    ui->listWidget->addItem("456");
    ui->listWidget->addItem("789");
}

WindowWidget::~WindowWidget()
{
    delete ui;
}
