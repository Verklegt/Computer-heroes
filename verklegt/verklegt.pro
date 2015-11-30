QT += core
QT -= gui

TARGET = verklegt
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Heroes.cpp \
    Scientist.cpp \
    User.cpp \
    Service.cpp \

HEADERS += \
    Heroes.h \
    Scientist.h \
    User.h \
    Service.h \
