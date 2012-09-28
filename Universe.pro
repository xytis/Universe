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
    Container/container.cpp \
    Project/projectloader.cpp \
    Project/project.cpp

HEADERS  += mainwindow.h \
    Container/container.h \
    Project/projectloader.h \
    Project/project.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    Test \
    Test \
    Sample/Parent/Child/Child/description.txt \
    Sample/Parent/description.txt \
    Sample/Sample.uproject

unix|win32: LIBS += -lboost_filesystem
unix|win32: LIBS += -lboost_system

