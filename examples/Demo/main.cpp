#include "WindowWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowWidget w;
    w.show();

    return a.exec();
}
