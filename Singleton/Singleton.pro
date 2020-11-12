TEMPLATE = app
CONFIG += console c++11
CONFIG += thread
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Base/singleton_base.hpp \
    Hungry/singleton_hungry.hpp \
    Lazy/singleton_lazy1.hpp \
    Lazy/singleton_lazy2.hpp
