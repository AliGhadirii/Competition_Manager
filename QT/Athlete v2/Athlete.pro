#-------------------------------------------------
#
# Project created by QtCreator 2019-06-09T11:38:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Athlete
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
        main.cpp \
        athlete.cpp \
    supervizor_page.cpp \
    making_team_page.cpp \
    edit_personal_info.cpp \
    edit_team_info.cpp \
    add_athete_to_team.cpp \
    delete_thlete_from_team_page.cpp \
    show_infos_page.cpp \
    add_remove_tour_page.cpp \
    Qathlete.cpp

HEADERS += \
        athlete.h \
    supervizor_page.h \
    making_team_page.h \
    edit_personal_info.h \
    edit_team_info.h \
    add_athete_to_team.h \
    delete_thlete_from_team_page.h \
    show_infos_page.h \
    add_remove_tour_page.h \
    Qathlete.h

FORMS += \
        athlete.ui \
    supervizor_page.ui \
    making_team_page.ui \
    edit_personal_info.ui \
    edit_team_info.ui \
    add_athete_to_team.ui \
    delete_thlete_from_team_page.ui \
    show_infos_page.ui \
    add_remove_tour_page.ui \
    Qathlete.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
