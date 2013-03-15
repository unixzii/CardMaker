/********************************************************************************
** Form generated from reading UI file 'cm_newdocumentdlg.ui'
**
** Created: Fri Mar 15 22:01:31 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CM_NEWDOCUMENTDLG_H
#define UI_CM_NEWDOCUMENTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CM_NewDocumentDlg
{
public:
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QLabel *label;
    QLineEdit *editTitle;
    QListWidget *listPreset;
    QGroupBox *groupBox;
    QLabel *label_3;
    QSpinBox *spinWidth;
    QLabel *label_4;
    QSpinBox *spinHeight;
    QCheckBox *checkLocks;
    QLabel *label_5;
    QComboBox *comboRatio;
    QFrame *line;
    QLabel *label_6;
    QComboBox *comboBackgroundType;
    QStackedWidget *stackedWidget;
    QWidget *bg_color;
    QLabel *label_7;
    QPushButton *btnColor;
    QWidget *bg_pic;
    QLabel *label_8;
    QToolButton *toolButton;
    QLabel *label_9;
    QComboBox *comboPicMode;
    QLabel *label_2;
    QLabel *preview;

    void setupUi(QDialog *CM_NewDocumentDlg)
    {
        if (CM_NewDocumentDlg->objectName().isEmpty())
            CM_NewDocumentDlg->setObjectName(QString::fromUtf8("CM_NewDocumentDlg"));
        CM_NewDocumentDlg->resize(538, 496);
        btnOk = new QPushButton(CM_NewDocumentDlg);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(440, 420, 75, 23));
        btnCancel = new QPushButton(CM_NewDocumentDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(440, 450, 75, 23));
        label = new QLabel(CM_NewDocumentDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 21));
        editTitle = new QLineEdit(CM_NewDocumentDlg);
        editTitle->setObjectName(QString::fromUtf8("editTitle"));
        editTitle->setGeometry(QRect(90, 10, 421, 20));
        listPreset = new QListWidget(CM_NewDocumentDlg);
        listPreset->setObjectName(QString::fromUtf8("listPreset"));
        listPreset->setGeometry(QRect(10, 60, 201, 241));
        groupBox = new QGroupBox(CM_NewDocumentDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(220, 40, 301, 261));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 54, 22));
        spinWidth = new QSpinBox(groupBox);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setGeometry(QRect(80, 30, 81, 22));
        spinWidth->setMinimum(1);
        spinWidth->setMaximum(2048);
        spinWidth->setValue(1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 60, 54, 22));
        spinHeight = new QSpinBox(groupBox);
        spinHeight->setObjectName(QString::fromUtf8("spinHeight"));
        spinHeight->setGeometry(QRect(80, 60, 81, 22));
        spinHeight->setMinimum(1);
        spinHeight->setMaximum(2048);
        spinHeight->setValue(1);
        checkLocks = new QCheckBox(groupBox);
        checkLocks->setObjectName(QString::fromUtf8("checkLocks"));
        checkLocks->setGeometry(QRect(180, 50, 71, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 90, 81, 22));
        comboRatio = new QComboBox(groupBox);
        comboRatio->setObjectName(QString::fromUtf8("comboRatio"));
        comboRatio->setEnabled(false);
        comboRatio->setGeometry(QRect(110, 90, 171, 22));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 120, 261, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 140, 81, 22));
        comboBackgroundType = new QComboBox(groupBox);
        comboBackgroundType->setObjectName(QString::fromUtf8("comboBackgroundType"));
        comboBackgroundType->setGeometry(QRect(110, 140, 171, 22));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 170, 261, 81));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        bg_color = new QWidget();
        bg_color->setObjectName(QString::fromUtf8("bg_color"));
        label_7 = new QLabel(bg_color);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 20, 54, 12));
        btnColor = new QPushButton(bg_color);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        btnColor->setGeometry(QRect(150, 10, 61, 31));
        stackedWidget->addWidget(bg_color);
        bg_pic = new QWidget();
        bg_pic->setObjectName(QString::fromUtf8("bg_pic"));
        label_8 = new QLabel(bg_pic);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 54, 12));
        toolButton = new QToolButton(bg_pic);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(70, 7, 37, 18));
        label_9 = new QLabel(bg_pic);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 40, 54, 21));
        comboPicMode = new QComboBox(bg_pic);
        comboPicMode->setObjectName(QString::fromUtf8("comboPicMode"));
        comboPicMode->setGeometry(QRect(70, 40, 171, 22));
        stackedWidget->addWidget(bg_pic);
        label_2 = new QLabel(CM_NewDocumentDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 54, 12));
        preview = new QLabel(CM_NewDocumentDlg);
        preview->setObjectName(QString::fromUtf8("preview"));
        preview->setGeometry(QRect(10, 320, 401, 161));
        preview->setFrameShape(QFrame::StyledPanel);
        preview->setFrameShadow(QFrame::Plain);
        preview->setAlignment(Qt::AlignCenter);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(editTitle);
        label_3->setBuddy(spinWidth);
        label_4->setBuddy(spinHeight);
        label_5->setBuddy(comboRatio);
        label_6->setBuddy(comboBackgroundType);
#endif // QT_NO_SHORTCUT

        retranslateUi(CM_NewDocumentDlg);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CM_NewDocumentDlg);
    } // setupUi

    void retranslateUi(QDialog *CM_NewDocumentDlg)
    {
        CM_NewDocumentDlg->setWindowTitle(QApplication::translate("CM_NewDocumentDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("CM_NewDocumentDlg", "\345\245\275", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CM_NewDocumentDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CM_NewDocumentDlg", "\346\240\207\351\242\230:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CM_NewDocumentDlg", "\350\257\246\347\273\206\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CM_NewDocumentDlg", "\351\225\277\345\272\246:", 0, QApplication::UnicodeUTF8));
        spinWidth->setSuffix(QApplication::translate("CM_NewDocumentDlg", " px", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CM_NewDocumentDlg", "\345\256\275\345\272\246:", 0, QApplication::UnicodeUTF8));
        spinHeight->setSuffix(QApplication::translate("CM_NewDocumentDlg", " px", 0, QApplication::UnicodeUTF8));
        checkLocks->setText(QApplication::translate("CM_NewDocumentDlg", "\351\224\201\345\256\232\346\257\224\344\276\213", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CM_NewDocumentDlg", "\345\203\217\347\264\240\351\225\277\345\256\275\346\257\224:", 0, QApplication::UnicodeUTF8));
        comboRatio->clear();
        comboRatio->insertItems(0, QStringList()
         << QApplication::translate("CM_NewDocumentDlg", "\346\226\271\345\275\242\345\203\217\347\264\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\347\276\216\345\274\217\346\240\207\345\207\206\345\220\215\347\211\207\345\260\272\345\257\270 (16:9)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\346\254\247\345\274\217\346\240\207\345\207\206\345\220\215\347\211\207\345\260\272\345\257\270 (16:10)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\347\252\204\345\274\217\346\240\207\345\207\206\345\220\215\347\211\207\345\260\272\345\257\270 (2:1)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\350\266\205\347\252\204\346\240\207\345\207\206\345\220\215\347\211\207\345\260\272\345\257\270 (9:4)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\346\212\230\345\215\241(\346\212\230\345\217\240\345\220\215\347\211\207)\346\240\207\345\207\206\345\260\272\345\257\270 (18:19)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\351\225\277\346\212\230\345\215\241(\345\212\240\351\225\277\345\236\213\346\212\230\345\217\240\345\220\215\347\211\207)\346\240\207\345\207\206\345\260\272\345\257\270 (13:5)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\351\273\204\351\207\221\347\237\251\345\275\242\346\240\207\345\207\206\345\260\272\345\257\270 (5:3)", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("CM_NewDocumentDlg", "\350\203\214\346\231\257:", 0, QApplication::UnicodeUTF8));
        comboBackgroundType->clear();
        comboBackgroundType->insertItems(0, QStringList()
         << QApplication::translate("CM_NewDocumentDlg", "\350\203\214\346\231\257\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\351\200\217\346\230\216", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("CM_NewDocumentDlg", "\347\274\226\350\276\221\351\242\234\350\211\262:", 0, QApplication::UnicodeUTF8));
        btnColor->setText(QString());
        label_8->setText(QApplication::translate("CM_NewDocumentDlg", "\346\226\207\344\273\266\344\275\215\347\275\256:", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("CM_NewDocumentDlg", "...", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CM_NewDocumentDlg", "\345\233\276\347\211\207\344\275\215\347\275\256:", 0, QApplication::UnicodeUTF8));
        comboPicMode->clear();
        comboPicMode->insertItems(0, QStringList()
         << QApplication::translate("CM_NewDocumentDlg", "\346\213\211\344\274\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\345\261\205\344\270\255", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\345\271\263\351\223\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CM_NewDocumentDlg", "\347\274\251\346\224\276", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("CM_NewDocumentDlg", "\351\242\204\350\256\276:", 0, QApplication::UnicodeUTF8));
        preview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CM_NewDocumentDlg: public Ui_CM_NewDocumentDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CM_NEWDOCUMENTDLG_H
