/********************************************************************************
** Form generated from reading UI file 'creatorwnd.ui'
**
** Created: Thu Nov 15 22:46:49 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATORWND_H
#define UI_CREATORWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreatorWnd
{
public:
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *closeAction;
    QAction *pointerAction;
    QAction *textAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *delAction;
    QAction *selectAllAction;
    QAction *boldAction;
    QAction *italicAction;
    QAction *underlineAction;
    QAction *leftAction;
    QAction *centerAction;
    QAction *rightAction;
    QAction *fontAction;
    QAction *colorAction;
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QToolButton *delButton;

    void setupUi(QMainWindow *CreatorWnd)
    {
        if (CreatorWnd->objectName().isEmpty())
            CreatorWnd->setObjectName(QString::fromUtf8("CreatorWnd"));
        CreatorWnd->resize(619, 471);
        saveAction = new QAction(CreatorWnd);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon);
        saveAsAction = new QAction(CreatorWnd);
        saveAsAction->setObjectName(QString::fromUtf8("saveAsAction"));
        closeAction = new QAction(CreatorWnd);
        closeAction->setObjectName(QString::fromUtf8("closeAction"));
        closeAction->setMenuRole(QAction::QuitRole);
        pointerAction = new QAction(CreatorWnd);
        pointerAction->setObjectName(QString::fromUtf8("pointerAction"));
        pointerAction->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/pointer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointerAction->setIcon(icon1);
        textAction = new QAction(CreatorWnd);
        textAction->setObjectName(QString::fromUtf8("textAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/textpointer.png"), QSize(), QIcon::Normal, QIcon::Off);
        textAction->setIcon(icon2);
        cutAction = new QAction(CreatorWnd);
        cutAction->setObjectName(QString::fromUtf8("cutAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutAction->setIcon(icon3);
        copyAction = new QAction(CreatorWnd);
        copyAction->setObjectName(QString::fromUtf8("copyAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyAction->setIcon(icon4);
        pasteAction = new QAction(CreatorWnd);
        pasteAction->setObjectName(QString::fromUtf8("pasteAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteAction->setIcon(icon5);
        delAction = new QAction(CreatorWnd);
        delAction->setObjectName(QString::fromUtf8("delAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        delAction->setIcon(icon6);
        selectAllAction = new QAction(CreatorWnd);
        selectAllAction->setObjectName(QString::fromUtf8("selectAllAction"));
        boldAction = new QAction(CreatorWnd);
        boldAction->setObjectName(QString::fromUtf8("boldAction"));
        boldAction->setCheckable(true);
        boldAction->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldAction->setIcon(icon7);
        italicAction = new QAction(CreatorWnd);
        italicAction->setObjectName(QString::fromUtf8("italicAction"));
        italicAction->setCheckable(true);
        italicAction->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicAction->setIcon(icon8);
        underlineAction = new QAction(CreatorWnd);
        underlineAction->setObjectName(QString::fromUtf8("underlineAction"));
        underlineAction->setCheckable(true);
        underlineAction->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineAction->setIcon(icon9);
        leftAction = new QAction(CreatorWnd);
        leftAction->setObjectName(QString::fromUtf8("leftAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftAction->setIcon(icon10);
        centerAction = new QAction(CreatorWnd);
        centerAction->setObjectName(QString::fromUtf8("centerAction"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        centerAction->setIcon(icon11);
        rightAction = new QAction(CreatorWnd);
        rightAction->setObjectName(QString::fromUtf8("rightAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightAction->setIcon(icon12);
        fontAction = new QAction(CreatorWnd);
        fontAction->setObjectName(QString::fromUtf8("fontAction"));
        fontAction->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/textsubscript.png"), QSize(), QIcon::Normal, QIcon::Off);
        fontAction->setIcon(icon13);
        colorAction = new QAction(CreatorWnd);
        colorAction->setObjectName(QString::fromUtf8("colorAction"));
        colorAction->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorAction->setIcon(icon14);
        action = new QAction(CreatorWnd);
        action->setObjectName(QString::fromUtf8("action"));
        action->setCheckable(true);
        action->setChecked(true);
        centralwidget = new QWidget(CreatorWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 466, 390));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        CreatorWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreatorWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 619, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        CreatorWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(CreatorWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CreatorWnd->setStatusBar(statusbar);
        toolBar = new QToolBar(CreatorWnd);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(24, 24));
        CreatorWnd->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(CreatorWnd);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(150, 119));
        dockWidget->setMaximumSize(QSize(150, 524287));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(dockWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        delButton = new QToolButton(dockWidgetContents);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setEnabled(false);

        gridLayout_2->addWidget(delButton, 1, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        CreatorWnd->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(saveAction);
        menu->addSeparator();
        menu->addAction(closeAction);
        menu_3->addAction(action);
        toolBar->addAction(saveAction);
        toolBar->addSeparator();
        toolBar->addAction(pointerAction);
        toolBar->addAction(textAction);
        toolBar->addSeparator();
        toolBar->addAction(boldAction);
        toolBar->addAction(italicAction);
        toolBar->addAction(underlineAction);
        toolBar->addAction(fontAction);
        toolBar->addAction(colorAction);

        retranslateUi(CreatorWnd);
        QObject::connect(closeAction, SIGNAL(triggered()), CreatorWnd, SLOT(close()));

        QMetaObject::connectSlotsByName(CreatorWnd);
    } // setupUi

    void retranslateUi(QMainWindow *CreatorWnd)
    {
        CreatorWnd->setWindowTitle(QString());
        saveAction->setText(QApplication::translate("CreatorWnd", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        saveAction->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        saveAsAction->setText(QApplication::translate("CreatorWnd", "\345\217\246\345\255\230\344\270\272", 0, QApplication::UnicodeUTF8));
        closeAction->setText(QApplication::translate("CreatorWnd", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        pointerAction->setText(QApplication::translate("CreatorWnd", "\347\247\273\345\212\250\345\267\245\345\205\267", 0, QApplication::UnicodeUTF8));
        textAction->setText(QApplication::translate("CreatorWnd", "\346\226\207\346\234\254\345\267\245\345\205\267", 0, QApplication::UnicodeUTF8));
        cutAction->setText(QApplication::translate("CreatorWnd", "\345\211\252\345\210\207", 0, QApplication::UnicodeUTF8));
        copyAction->setText(QApplication::translate("CreatorWnd", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pasteAction->setText(QApplication::translate("CreatorWnd", "\347\262\230\350\264\264", 0, QApplication::UnicodeUTF8));
        delAction->setText(QApplication::translate("CreatorWnd", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        selectAllAction->setText(QApplication::translate("CreatorWnd", "\345\205\250\351\200\211", 0, QApplication::UnicodeUTF8));
        boldAction->setText(QApplication::translate("CreatorWnd", "\347\262\227\344\275\223", 0, QApplication::UnicodeUTF8));
        italicAction->setText(QApplication::translate("CreatorWnd", "\346\226\234\344\275\223", 0, QApplication::UnicodeUTF8));
        underlineAction->setText(QApplication::translate("CreatorWnd", "\344\270\213\345\210\222\347\272\277", 0, QApplication::UnicodeUTF8));
        leftAction->setText(QApplication::translate("CreatorWnd", "\345\267\246\345\257\271\351\275\220", 0, QApplication::UnicodeUTF8));
        centerAction->setText(QApplication::translate("CreatorWnd", "\345\261\205\344\270\255", 0, QApplication::UnicodeUTF8));
        rightAction->setText(QApplication::translate("CreatorWnd", "\345\217\263\345\257\271\351\275\220", 0, QApplication::UnicodeUTF8));
        fontAction->setText(QApplication::translate("CreatorWnd", "\345\255\227\344\275\223", 0, QApplication::UnicodeUTF8));
        colorAction->setText(QApplication::translate("CreatorWnd", "\345\255\227\344\275\223\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("CreatorWnd", "\346\230\276\347\244\272\350\276\205\345\212\251\347\272\277", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("CreatorWnd", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("CreatorWnd", "\346\237\245\347\234\213", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("CreatorWnd", "toolBar", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("CreatorWnd", "\345\257\271\350\261\241", 0, QApplication::UnicodeUTF8));
        delButton->setText(QApplication::translate("CreatorWnd", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreatorWnd: public Ui_CreatorWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATORWND_H
