QT -= gui
QT += core network

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += \
        ../../road.pb.cc \
        coba_dulu.cpp \
        main.cpp

HEADERS += \
    ../../road.pb.h \
    coba_dulu.h

unix:!macx: LIBS += -L$$PWD/../../ -lprotobuf
INCLUDEPATH += $$PWD/../../src
DEPENDPATH += $$PWD/../../src
unix:!macx: PRE_TARGETDEPS += $$PWD/../../libprotobuf.a


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
