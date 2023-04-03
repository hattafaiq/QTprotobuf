QT -= gui
QT += core network

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
HEADERS +=  coba_lagi.h \
    road.pb.h

SOURCES +=  coba_lagi.cpp \
        main.cpp \
    road.pb.cc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



unix:!macx: LIBS += -L$$PWD/../../ -lprotobuf
INCLUDEPATH += $$PWD/../../src
DEPENDPATH += $$PWD/../../src
unix:!macx: PRE_TARGETDEPS += $$PWD/../../libprotobuf.a
