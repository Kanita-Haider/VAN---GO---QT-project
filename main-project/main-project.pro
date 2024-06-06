QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buslist.cpp \
    end.cpp \
    location.cpp \
    login.cpp \
    main.cpp \
    go.cpp \
    payment.cpp \
    seat.cpp

HEADERS += \
    buslist.h \
    end.h \
    go.h \
    location.h \
    login.h \
    payment.h \
    seat.h

FORMS += \
    buslist.ui \
    end.ui \
    go.ui \
    location.ui \
    login.ui \
    payment.ui \
    seat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc
