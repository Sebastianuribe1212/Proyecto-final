QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cuerpo.cpp \
    juego.cpp \
    juego2.cpp \
    juego3.cpp \
    launcher.cpp \
    main.cpp \
    moneda.cpp \
    pared.cpp

HEADERS += \
    cuerpo.h \
    juego.h \
    juego2.h \
    juego3.h \
    launcher.h \
    moneda.h \
    pared.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Images/imagenes.qrc

DISTFILES +=
