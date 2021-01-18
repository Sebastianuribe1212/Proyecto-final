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
    launcher.cpp \
    main.cpp \
    moneda.cpp \
    pared.cpp

HEADERS += \
    cuerpo.h \
    juego.h \
    juego2.h \
    launcher.h \
    moneda.h \
    pared.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../1x/Mesa de trabajo 1.png

RESOURCES += \
    Imagenes/Personaje.qrc
