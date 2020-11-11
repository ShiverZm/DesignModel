TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    observer.h \
    observer_nba.h \
    observer_stock.h \
    subject.h \
    subject_sercretary.h
