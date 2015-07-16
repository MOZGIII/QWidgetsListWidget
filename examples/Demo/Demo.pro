#-------------------------------------------------
#
# Project created by QtCreator 2015-07-16T21:32:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Demo
TEMPLATE = app


SOURCES += main.cpp\
        WindowWidget.cpp \
    List.cpp \
    Display.cpp

HEADERS  += WindowWidget.h \
    List.h \
    Display.h

FORMS    += WindowWidget.ui \
    Display.ui

include(../../src/QWidgetsListWidget.pri)
