QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = S
TEMPLATE = app

DESTDIR = $$PWD/../bin

LIBS += -L$$PWD/../bin

CONFIG(debug, debug|release){
    TARGET = $$join(TARGET,,,_d)
    DEFINES += DEBUG _DEBUG
}

CONFIG(release, debug|release){
    DEFINES += RELEASE _RELEASE
}

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        smainwindow.cpp

HEADERS += \
        smainwindow.h

FORMS += \
        smainwindow.ui
