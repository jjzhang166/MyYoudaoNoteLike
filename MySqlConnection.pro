#-------------------------------------------------
#
# Project created by QtCreator 2015-02-03T14:42:29
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MySqlConnection
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tabitem.cpp

HEADERS  += mainwindow.h \
    tabitem.h

FORMS    += mainwindow.ui \
    tabitem.ui
