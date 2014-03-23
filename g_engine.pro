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
    gamethread.cpp \
    spirit.cpp \
    block.cpp \
    ball.cpp \
    gameobject.cpp \
    staticbg.cpp \
    score.cpp

HEADERS  += \
    canvas.h \
    ../layer.h \
    gamethread.h \
    spirit.h \
    block.h \
    ball.h \
    gameobject.h \
    staticbg.h \
    score.h

RESOURCES += \
    game.qrc
