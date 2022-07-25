QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    asientos.cpp \
    boletos.cpp \
    button.cpp \
    cine.cpp \
    costos__fac.cpp \
    duscene.cpp \
    duscene_2.cpp \
    duscene_3.cpp \
    duscene_4.cpp \
    duscene_5.cpp \
    facturacion.cpp \
    gifanimation.cpp \
    main.cpp \
    magicine.cpp \
    menu.cpp \
    pelicula.cpp \
    productoa.cpp \
    productob.cpp \
    productoc.cpp \
    sala.cpp \
    tienda.cpp

HEADERS += \
    asientos.h \
    boletos.h \
    button.h \
    cine.h \
    costos__fac.h \
    duscene.h \
    duscene_2.h \
    duscene_3.h \
    duscene_4.h \
    duscene_5.h \
    facturacion.h \
    gifanimation.h \
    magicine.h \
    menu.h \
    pelicula.h \
    productoa.h \
    productob.h \
    productoc.h \
    sala.h \
    tienda.h

FORMS += \
    magicine.ui

TRANSLATIONS += \
    App_City_es_EC.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Recursos/Iconos/Logo.png

RESOURCES += \
    Iconos.qrc
