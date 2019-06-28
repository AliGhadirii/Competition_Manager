#-------------------------------------------------
#
# Project created by QtCreator 2019-06-15T14:52:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = APProject
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        athlete.cpp \
        datetime.cpp \
        guest.cpp \
        guest2.cpp \
        in_athlete.cpp \
        in_organizer.cpp \
        login.cpp \
        main.cpp \
        mainwindow.cpp \
        match.cpp \
        organizer.cpp \
        ranking.cpp \
        signup.cpp \
        supervisor.cpp \
        t_match.cpp \
        t_ranking.cpp \
        team.cpp \
        tour_list.cpp \
        tournament.cpp

HEADERS += \
        athlete.h \
        datetime.h \
        guest.h \
        guest2.h \
        in_athlete.h \
        in_organizer.h \
        login.h \
        mainwindow.h \
        match.h \
        organizer.h \
        ranking.h \
        signup.h \
        supervisor.h \
        t_match.h \
        t_ranking.h \
        team.h \
        tour_list.h \
        tournament.h

FORMS += \
        guest.ui \
        guest2.ui \
        in_athlete.ui \
        in_organizer.ui \
        mainwindow.ui \
        ranking.ui \
        signup.ui \
        t_match.ui \
        t_ranking.ui \
        tour_list.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
