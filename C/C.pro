QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = C
TEMPLATE = app

DESTDIR = $$PWD/../bin

INCLUDEPATH += $$PWD/../Network

LIBS += -L$$PWD/../bin

CONFIG(debug, debug|release){
    TARGET = $$join(TARGET,,,_d)
    DEFINES += DEBUG _DEBUG
    LIBS += -lNetwork_d
}

CONFIG(release, debug|release){
    DEFINES += RELEASE _RELEASE
    LIBS += -lNetwork
}

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        cmainwindow.cpp

HEADERS += \
        cmainwindow.h

FORMS += \
        cmainwindow.ui
