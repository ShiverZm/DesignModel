TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    abstract_factory/factory.h \
    abstract_factory/product.h \
    factory_method/factory_shoes.h \
    regist_singleton_factory/register_factory.h \
    simple_factory/factory_shoes.h \
    template_factory/factory.h \
    template_factory/product.h
