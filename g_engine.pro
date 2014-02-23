#-------------------------------------------------
#
# Project created by QtCreator 2014-02-06T20:22:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = g_engine
TEMPLATE = app


SOURCES += main.cpp \
    canvas.cpp \
    staticbg.cpp

HEADERS  += \
    canvas.h \
    ../layer.h \
    staticbg.h

RESOURCES += \
    game.qrc
