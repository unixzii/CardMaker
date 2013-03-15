#-------------------------------------------------
#
# Project created by QtCreator 2012-09-09T12:30:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CardMaker
TEMPLATE = app

win32 {
   RC_FILE      = cardmaker.rc
}

SOURCES += main.cpp\
        cwelcomedlg.cpp \
    creatorwnd.cpp \
    cdocobject.cpp \
    ctextobj.cpp \
    cphotoobj.cpp \
    newstyledlg.cpp \
    cdocument.cpp \
    cview.cpp \
    cserializer.cpp \
    genwnd.cpp \
    cprogressdlg.cpp \
    cm_newdocumentdlg.cpp

HEADERS  += cwelcomedlg.h \
    creatorwnd.h \
    cdocobject.h \
    ctextobj.h \
    cphotoobj.h \
    newstyledlg.h \
    appglobal.h \
    cdocument.h \
    cview.h \
    cserializer.h \
    genwnd.h \
    cprogressdlg.h \
    cm_newdocumentdlg.h \
    renderinghelper.h \
    ../CardMaster/render/render_global.h

FORMS    += cwelcomedlg.ui \
    creatorwnd.ui \
    newstyledlg.ui \
    genwnd.ui \
    cprogressdlg.ui \
    cm_newdocumentdlg.ui

RESOURCES += \
    Resources.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../CardMaster/render/release/ -lrender
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../CardMaster/render/debug/ -lrender

INCLUDEPATH += $$PWD/../CardMaster/render
DEPENDPATH += $$PWD/../CardMaster/render
