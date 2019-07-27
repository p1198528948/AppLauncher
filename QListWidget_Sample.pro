#-------------------------------------------------
#
# Project created by QtCreator 2016-12-18T11:36:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QListWidget_Sample
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    AddItemWidget.cpp \
    CustomWidget.cpp \
    custommadelistviewdialog.cpp \
    appiconwidget.cpp \
    upmdialog.cpp

HEADERS  += MainWindow.h \
    AddItemWidget.h \
    CustomWidget.h \
    custommadelistviewdialog.h \
    appiconwidget.h \
    upmdialog.h

FORMS    += MainWindow.ui \
    AddItemWidget.ui \
    CustomWidget.ui \
    custommadelistviewdialog.ui \
    appiconwidget.ui \
    upmdialog.ui

RESOURCES += \
    res.qrc
