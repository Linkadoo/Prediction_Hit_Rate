#-------------------------------------------------
#
# Project created by QtCreator 2015-11-05T16:16:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Prediction_Hit_Rate
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra -pedantic

SOURCES += main.cpp\
        mainwindow.cpp \
    storager.cpp \
    analyser.cpp \
    analysis.cpp

HEADERS  += mainwindow.h \
    storager.h \
    analyser.h \
    analysis.h

FORMS    += mainwindow.ui
