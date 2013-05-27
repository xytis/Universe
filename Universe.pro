#-------------------------------------------------
#
# Project created by QtCreator 2013-05-27T21:50:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Universe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

#Add json parser
LIBS += -L"External/json_spirit/lib" -ljson_spirit
INCLUDEPATH += "External/json_spirit/include"
