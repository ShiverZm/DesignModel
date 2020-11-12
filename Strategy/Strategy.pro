TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    context.h \
    strategy.h \
    strategy_add.hpp \
    strategy_multiply.h \
    strategy_substract.hpp
