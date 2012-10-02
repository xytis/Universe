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
    Project/projectloader.cpp \
    Project/project.cpp \
    Container/node.cpp \
    Container/description.cpp

HEADERS  += mainwindow.h \
    Project/projectloader.h \
    Project/project.h \
    Container/node.h \
    Container/description.h \
    common.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    Test \
    Test \
    Sample/Parent/Child/Child/description.txt \
    Sample/Parent/description.txt \
    Sample/Sample.uproject

unix|win32: LIBS += -lboost_filesystem
unix|win32: LIBS += -lboost_system
unix|win32: LIBS += -lboost_serialization

