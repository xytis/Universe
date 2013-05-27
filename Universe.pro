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
        mainwindow.cpp \
    Tests/test_json.cpp

HEADERS  += mainwindow.h \
    Tests/test_json.h

FORMS    += mainwindow.ui

#Add json parser
unix|win32: LIBS += -L$$PWD/External/json_spirit/lib/ -ljson_spirit

INCLUDEPATH += $$PWD/External/json_spirit/include
DEPENDPATH += $$PWD/External/json_spirit/include

win32: PRE_TARGETDEPS += $$PWD/External/json_spirit/lib/json_spirit.lib
else:unix: PRE_TARGETDEPS += $$PWD/External/json_spirit/lib/libjson_spirit.a
