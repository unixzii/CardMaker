/********************************************************************************
** Form generated from reading UI file 'cwelcomedlg.ui'
**
** Created: Thu Nov 15 22:38:43 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWELCOMEDLG_H
#define UI_CWELCOMEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CWelcomeDlg
{
public:
    QFrame *frame;
    QPushButton *newStyleButton;
    QPushButton *importStyleButton;
    QListWidget *systemStyleList;
    QLabel *previewLabel;
    QLabel *aboutLabel;
    QPushButton *exitButton;
    QFrame *frameDrag;

    void setupUi(QDialog *CWelcomeDlg)
    {
        if (CWelcomeDlg->objectName().isEmpty())
            CWelcomeDlg->setObjectName(QString::fromUtf8("CWelcomeDlg"));
        CWelcomeDlg->resize(560, 400);
        CWelcomeDlg->setMinimumSize(QSize(560, 400));
        CWelcomeDlg->setMaximumSize(QSize(560, 400));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        CWelcomeDlg->setFont(font);
        CWelcomeDlg->setStyleSheet(QString::fromUtf8("/*QDialog\n"
"{\n"
"	background-image: url(:/Resources/bg_new.png);\n"
"}*/\n"
"\n"
"/*Used own-paint*/"));
        frame = new QFrame(CWelcomeDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 46, 481, 301));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        newStyleButton = new QPushButton(frame);
        newStyleButton->setObjectName(QString::fromUtf8("newStyleButton"));
        newStyleButton->setGeometry(QRect(40, 80, 111, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        newStyleButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        newStyleButton->setIcon(icon);
        newStyleButton->setIconSize(QSize(32, 32));
        newStyleButton->setFlat(true);
        importStyleButton = new QPushButton(frame);
        importStyleButton->setObjectName(QString::fromUtf8("importStyleButton"));
        importStyleButton->setGeometry(QRect(40, 150, 140, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        importStyleButton->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        importStyleButton->setIcon(icon1);
        importStyleButton->setIconSize(QSize(32, 32));
        importStyleButton->setFlat(true);
        systemStyleList = new QListWidget(frame);
        systemStyleList->setObjectName(QString::fromUtf8("systemStyleList"));
        systemStyleList->setGeometry(QRect(250, 75, 201, 81));
        systemStyleList->setStyleSheet(QString::fromUtf8(""));
        previewLabel = new QLabel(frame);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setGeometry(QRect(250, 158, 201, 121));
        previewLabel->setAutoFillBackground(true);
        previewLabel->setFrameShape(QFrame::StyledPanel);
        previewLabel->setFrameShadow(QFrame::Sunken);
        previewLabel->setAlignment(Qt::AlignCenter);
        aboutLabel = new QLabel(frame);
        aboutLabel->setObjectName(QString::fromUtf8("aboutLabel"));
        aboutLabel->setGeometry(QRect(9, 279, 31, 16));
        aboutLabel->setFont(font);
        aboutLabel->setOpenExternalLinks(false);
        exitButton = new QPushButton(frame);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(420, 0, 60, 30));
        exitButton->setFont(font);
        exitButton->setFocusPolicy(Qt::NoFocus);
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-image: url(:/Resources/close.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/Resources/close_grow.png);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"border-image: url(:/Resources/close_pressed.png);\n"
"}"));
        frameDrag = new QFrame(CWelcomeDlg);
        frameDrag->setObjectName(QString::fromUtf8("frameDrag"));
        frameDrag->setGeometry(QRect(40, 50, 421, 71));
        frameDrag->setFrameShape(QFrame::StyledPanel);
        frameDrag->setFrameShadow(QFrame::Raised);

        retranslateUi(CWelcomeDlg);
        QObject::connect(exitButton, SIGNAL(clicked()), CWelcomeDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(CWelcomeDlg);
    } // setupUi

    void retranslateUi(QDialog *CWelcomeDlg)
    {
        CWelcomeDlg->setWindowTitle(QApplication::translate("CWelcomeDlg", "Card Maker", 0, QApplication::UnicodeUTF8));
        newStyleButton->setText(QApplication::translate("CWelcomeDlg", "\346\226\260\345\273\272\346\240\267\345\274\217", 0, QApplication::UnicodeUTF8));
        importStyleButton->setText(QApplication::translate("CWelcomeDlg", "\344\277\256\346\224\271\345\267\262\346\234\211\346\240\267\345\274\217", 0, QApplication::UnicodeUTF8));
        previewLabel->setText(QString());
        aboutLabel->setText(QApplication::translate("CWelcomeDlg", "<html><head/><body><p><a href=\"about:showAboutDlg\"><span style=\" text-decoration: underline; color:#0000ff;\">\345\205\263\344\272\216</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exitButton->setToolTip(QApplication::translate("CWelcomeDlg", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CWelcomeDlg: public Ui_CWelcomeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWELCOMEDLG_H
