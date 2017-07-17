QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = C
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        cmainwindow.cpp

HEADERS += \
        cmainwindow.h

FORMS += \
        cmainwindow.ui
