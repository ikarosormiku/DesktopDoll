#-------------------------------------------------
#
# Project created by QtCreator 2020-01-25T15:31:57
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
QT       += core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesktopDoll
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    role.cpp \
    roleselection.cpp \
    windowsetup.cpp

HEADERS += \
        widget.h \
    globaldef.h \
    role.h \
    roleselection.h \
    windowsetup.h

FORMS += \
        widget.ui \
    roleselection.ui \
    windowsetup.ui

RESOURCES += \
    resourcefile.qrc

DISTFILES += \
    logo.rc

RC_FILE += logo.rc
