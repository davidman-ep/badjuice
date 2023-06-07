QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    animales.cpp \
    aranha.cpp \
    banano.cpp \
    cigarro.cpp \
    cucaracha.cpp \
    cuchillo.cpp \
    fresa.cpp \
    frutas.cpp \
    grillo.cpp \
    gusano.cpp \
    lata.cpp \
    main.cpp \
    mainwindow.cpp \
    mango.cpp \
    manzana.cpp \
    mora.cpp \
    naranja.cpp \
    pera.cpp \
    rata.cpp \
    sandia.cpp \
    zapato.cpp

HEADERS += \
    animales.h \
    aranha.h \
    banano.h \
    cigarro.h \
    cucaracha.h \
    cuchillo.h \
    fresa.h \
    frutas.h \
    grillo.h \
    gusano.h \
    lata.h \
    mainwindow.h \
    mango.h \
    manzana.h \
    mora.h \
    naranja.h \
    pera.h \
    rata.h \
    sandia.h \
    zapato.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    multimedia.qrc
