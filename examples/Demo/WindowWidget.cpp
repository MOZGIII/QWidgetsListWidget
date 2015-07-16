#include "WindowWidget.h"
#include "ui_WindowWidget.h"

WindowWidget::WindowWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowWidget)
{
    ui->setupUi(this);

    ui->listWidget->addItem(QString());
    ui->listWidget->addItem(QString());
    ui->listWidget->addItem(QString());
}

WindowWidget::~WindowWidget()
{
    delete ui;
}
