TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    beverage.h \
    beverage_espresso.h \
    beverage_tea.h \
    condiment_mocha.h \
    condiment_whip.h \
    decorator_condiment.h
