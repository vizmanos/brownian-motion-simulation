QMAKE_CXXFLAGS += -std=c++17

CONFIG += console

TARGET = main_text

LIBS += -L../general -lgeneral
PRE_TARGETDEPS += ../general/libgeneral.a

INCLUDEPATH = ../general/include

SOURCES += \
    main_text.cc \
    TextViewer.cc

HEADERS += \
    ../general/include/Systeme.h \
    ../general/include/particule.h \
    ../general/include/Vecteur3D.h \
    ../general/include/Enceinte.h \
    ../general/include/SousParticules.h \
    ../general/include/GenerateurAleatoire.h \
    TextViewer.h \
    ../general/include/dessinable.h \
    ../general/include/support_a_dessin.h
