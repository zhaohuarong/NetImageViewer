QT       += network

QT       -= gui

TARGET = Network
TEMPLATE = lib

DEFINES += NETWORK_LIBRARY

DESTDIR = $$PWD/../bin

CONFIG(debug, debug|release){
    TARGET = $$join(TARGET,,,_d)
    DEFINES += DEBUG _DEBUG
}

CONFIG(release, debug|release){
    DEFINES += RELEASE _RELEASE
}

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    server.cpp \
    client.cpp

HEADERS += \
        network_global.h \ 
    server.h \
    client.h
