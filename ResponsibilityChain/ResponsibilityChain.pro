TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    AbstractProcessor.h \
    Leader1Processor.h \
    Leader2Processor.h \
    Leader3Processor.h \
    LeaveRequest.h
