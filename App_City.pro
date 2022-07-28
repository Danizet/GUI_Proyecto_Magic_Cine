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
    duscene.cpp \
    duscene_2.cpp \
    duscene_3.cpp \
    duscene_4.cpp \
    duscene_5.cpp \
    facturacion.cpp \
    facturera.cpp \
    gifanimation.cpp \
    main.cpp \
    magicine.cpp \
    pelicula_1.cpp \
    sala_1.cpp \
    trailer1.cpp

HEADERS += \
    duscene.h \
    duscene_2.h \
    duscene_3.h \
    duscene_4.h \
    duscene_5.h \
    facturacion.h \
    facturera.h \
    gifanimation.h \
    magicine.h \
    pelicula_1.h \
    productoa.h \
    productob.h \
    productoc.h \
    sala_1.h \
    trailer1.h

FORMS += \
    facturera.ui \
    magicine.ui \
    pelicula_1.ui \
    sala_1.ui \
    trailer1.ui

TRANSLATIONS += \
    App_City_es_EC.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Recursos/Fondos/gestion-reserva-asientos-cine.jpg \
    Recursos/Iconos/Logo.png

RESOURCES += \
    Recursos.qrc
