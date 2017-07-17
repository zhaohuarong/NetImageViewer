QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = S
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        smainwindow.cpp

HEADERS += \
        smainwindow.h

FORMS += \
        smainwindow.ui
