/********************************************************************************
** Form generated from reading UI file 'genwnd.ui'
**
** Created: Thu Nov 15 22:19:04 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENWND_H
#define UI_GENWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenWnd
{
public:
    QAction *action_CSV;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QToolButton *minusButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *plusButton;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GenWnd)
    {
        if (GenWnd->objectName().isEmpty())
            GenWnd->setObjectName(QString::fromUtf8("GenWnd"));
        GenWnd->resize(472, 385);
        action_CSV = new QAction(GenWnd);
        action_CSV->setObjectName(QString::fromUtf8("action_CSV"));
        centralwidget = new QWidget(GenWnd);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        minusButton = new QToolButton(centralwidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setEnabled(false);

        gridLayout->addWidget(minusButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        plusButton = new QToolButton(centralwidget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));

        gridLayout->addWidget(plusButton, 1, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSortingEnabled(true);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 4);

        GenWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GenWnd);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 472, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        GenWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(GenWnd);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GenWnd->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_CSV);

        retranslateUi(GenWnd);

        QMetaObject::connectSlotsByName(GenWnd);
    } // setupUi

    void retranslateUi(QMainWindow *GenWnd)
    {
        GenWnd->setWindowTitle(QApplication::translate("GenWnd", "\345\215\241\347\211\207\347\224\237\346\210\220\345\231\250", 0, QApplication::UnicodeUTF8));
        action_CSV->setText(QApplication::translate("GenWnd", "\344\273\216CSV\346\226\207\344\273\266\345\257\274\345\205\245", 0, QApplication::UnicodeUTF8));
        minusButton->setText(QApplication::translate("GenWnd", "-", 0, QApplication::UnicodeUTF8));
        plusButton->setText(QApplication::translate("GenWnd", "+", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("GenWnd", "\345\274\200\345\247\213\347\224\237\346\210\220", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("GenWnd", "\345\257\274\345\205\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GenWnd: public Ui_GenWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENWND_H
