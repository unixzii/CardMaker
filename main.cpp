#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QLocale>
#include <QDebug>
#include "cwelcomedlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Library....
    QStringList libPaths;
    libPaths << "./qt_support";

    a.setLibraryPaths(libPaths);
    a.setQuitOnLastWindowClosed(false);
    a.setApplicationName("Card Maker");

    QTranslator *translator = new QTranslator(&a);
    if (translator->load("zh_CN.qm",a.applicationDirPath() + "\\Language\\"))
    {
        a.installTranslator(translator);
    }else{
        QMessageBox::warning(0,"Warning","Language support file is missing!!!");
    }

    CWelcomeDlg w;
    w.show();
    
    return a.exec();
}
