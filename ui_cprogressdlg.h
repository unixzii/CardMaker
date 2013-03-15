/********************************************************************************
** Form generated from reading UI file 'cprogressdlg.ui'
**
** Created: Thu Nov 15 22:19:04 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPROGRESSDLG_H
#define UI_CPROGRESSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CProgressDlg
{
public:
    QGridLayout *gridLayout;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;
    QLabel *stateLbl;

    void setupUi(QDialog *CProgressDlg)
    {
        if (CProgressDlg->objectName().isEmpty())
            CProgressDlg->setObjectName(QString::fromUtf8("CProgressDlg"));
        CProgressDlg->resize(388, 85);
        gridLayout = new QGridLayout(CProgressDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cancelBtn = new QPushButton(CProgressDlg);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout->addWidget(cancelBtn, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        progressBar = new QProgressBar(CProgressDlg);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 2);

        stateLbl = new QLabel(CProgressDlg);
        stateLbl->setObjectName(QString::fromUtf8("stateLbl"));

        gridLayout->addWidget(stateLbl, 0, 0, 1, 2);


        retranslateUi(CProgressDlg);

        QMetaObject::connectSlotsByName(CProgressDlg);
    } // setupUi

    void retranslateUi(QDialog *CProgressDlg)
    {
        CProgressDlg->setWindowTitle(QApplication::translate("CProgressDlg", "\347\224\237\346\210\220\350\277\233\345\272\246", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("CProgressDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        stateLbl->setText(QApplication::translate("CProgressDlg", "####", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CProgressDlg: public Ui_CProgressDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPROGRESSDLG_H
