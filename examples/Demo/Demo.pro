QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = Demo
TEMPLATE = app


SOURCES += \
    main.cpp \
    WindowWidget.cpp \
    List.cpp \
    Display.cpp \
    ListItem.cpp

HEADERS += \
    WindowWidget.h \
    List.h \
    Display.h \
    ListItem.h

FORMS += \
    WindowWidget.ui \
    Display.ui

include(../../src/QWidgetsListWidget.pri)
