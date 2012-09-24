#-------------------------------------------------
#
# Project created by QtCreator 2012-09-24T22:00:10
#
#-------------------------------------------------

QT       += core gui

QMAKE_CXXFLAGS += -std=c++0x

TARGET = Universe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Container/container.cpp

HEADERS  += mainwindow.h \
    Container/container.h

FORMS    += mainwindow.ui
