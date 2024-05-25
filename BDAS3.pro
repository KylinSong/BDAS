QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += /Users/kylinsong/BDAS3/others/json-develop/single_include

SOURCES += \
    bdas.cpp \
    bm1.cpp \
    bm2.cpp \
    bm3.cpp \
    bm4.cpp \
    bm5.cpp \
    bm6.cpp \
    bm7.cpp \
    bm8.cpp \
    bm9.cpp \
    bm_base.cpp \
    dialog_checking.cpp \
    main.cpp \
    p1_login.cpp \
    p2_projects.cpp \
    p3_newproj.cpp \
    p4_dot.cpp \
    p5_bodymap.cpp \
    p6_chatbdas.cpp \
    page1_apikey.cpp \
    page1_login.cpp

HEADERS += \
    bdas.h \
    bm1.h \
    bm2.h \
    bm3.h \
    bm4.h \
    bm5.h \
    bm6.h \
    bm7.h \
    bm8.h \
    bm9.h \
    bm_base.h \
    dialog_checking.h \
    p1_login.h \
    p2_projects.h \
    p3_newproj.h \
    p4_dot.h \
    p5_bodymap.h \
    p6_chatbdas.h \
    page1_apikey.h \
    page1_login.h \
    pagejumper.h

FORMS += \
    bdas.ui \
    bm1.ui \
    bm2.ui \
    bm3.ui \
    bm4.ui \
    bm5.ui \
    bm6.ui \
    bm7.ui \
    bm8.ui \
    bm9.ui \
    bm_base.ui \
    dialog_checking.ui \
    p1_login.ui \
    p2_projects.ui \
    p3_newproj.ui \
    p4_dot.ui \
    p5_bodymap.ui \
    p6_chatbdas.ui

TRANSLATIONS += BDAS_1_0_zh_CN.ts

DISTFILES += \
    search_his.json

RESOURCES += \
    pics.qrc
