######################################################################
# Automatically generated by qmake (3.0) Mon May 27 22:59:08 2013
######################################################################

CONFIG += qtestlib
TEMPLATE = app
TARGET = Tests
INCLUDEPATH += .

# Input
HEADERS += test_json.h
SOURCES += test_json.cpp

#Add json parser
unix|win32: LIBS += -L$$PWD/../External/json_spirit/lib/ -ljson_spirit

INCLUDEPATH += $$PWD/../External/json_spirit/include
DEPENDPATH += $$PWD/../External/json_spirit/include

win32: PRE_TARGETDEPS += $$PWD/../External/json_spirit/lib/json_spirit.lib
else:unix: PRE_TARGETDEPS += $$PWD/../External/json_spirit/lib/libjson_spirit.a
