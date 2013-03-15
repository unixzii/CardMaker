/********************************************************************************
** Form generated from reading UI file 'newstyledlg.ui'
**
** Created: Thu Nov 15 22:19:04 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSTYLEDLG_H
#define UI_NEWSTYLEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newStyleDlg
{
public:
    QLabel *label;
    QLineEdit *styleNameEdit;
    QGroupBox *groupBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QLineEdit *fileNameEdit;
    QToolButton *openButton;
    QWidget *page_2;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *widthSpinBox;
    QSpinBox *heightSpinBox;
    QLabel *label_6;
    QToolButton *selectColorButton;
    QComboBox *comboBox;
    QLabel *previewLabel;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *newStyleDlg)
    {
        if (newStyleDlg->objectName().isEmpty())
            newStyleDlg->setObjectName(QString::fromUtf8("newStyleDlg"));
        newStyleDlg->resize(400, 396);
        newStyleDlg->setMinimumSize(QSize(400, 396));
        newStyleDlg->setMaximumSize(QSize(400, 396));
        newStyleDlg->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(newStyleDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 54, 21));
        styleNameEdit = new QLineEdit(newStyleDlg);
        styleNameEdit->setObjectName(QString::fromUtf8("styleNameEdit"));
        styleNameEdit->setGeometry(QRect(70, 10, 311, 20));
        groupBox = new QGroupBox(newStyleDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 381, 161));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 20, 361, 131));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 41, 21));
        fileNameEdit = new QLineEdit(page);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));
        fileNameEdit->setGeometry(QRect(50, 20, 251, 20));
        fileNameEdit->setReadOnly(true);
        openButton = new QToolButton(page);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(310, 20, 37, 18));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 20, 54, 21));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 60, 54, 21));
        widthSpinBox = new QSpinBox(page_2);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setGeometry(QRect(90, 20, 201, 22));
        widthSpinBox->setMinimum(10);
        widthSpinBox->setMaximum(1000);
        heightSpinBox = new QSpinBox(page_2);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setGeometry(QRect(90, 60, 201, 22));
        heightSpinBox->setMinimum(10);
        heightSpinBox->setMaximum(1000);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 100, 54, 16));
        selectColorButton = new QToolButton(page_2);
        selectColorButton->setObjectName(QString::fromUtf8("selectColorButton"));
        selectColorButton->setGeometry(QRect(90, 100, 37, 18));
        stackedWidget->addWidget(page_2);
        comboBox = new QComboBox(newStyleDlg);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 47, 211, 20));
        previewLabel = new QLabel(newStyleDlg);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setGeometry(QRect(10, 220, 291, 161));
        previewLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        previewLabel->setFrameShape(QFrame::Box);
        previewLabel->setAlignment(Qt::AlignCenter);
        okButton = new QPushButton(newStyleDlg);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(310, 220, 75, 23));
        cancelButton = new QPushButton(newStyleDlg);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(310, 250, 75, 23));

        retranslateUi(newStyleDlg);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(newStyleDlg);
    } // setupUi

    void retranslateUi(QDialog *newStyleDlg)
    {
        newStyleDlg->setWindowTitle(QApplication::translate("newStyleDlg", "\346\226\260\345\273\272\346\250\241\346\235\277", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newStyleDlg", "\346\240\267\345\274\217\345\220\215\347\247\260:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("newStyleDlg", "        \350\203\214\346\231\257:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("newStyleDlg", "\346\226\207\344\273\266:", 0, QApplication::UnicodeUTF8));
        openButton->setText(QApplication::translate("newStyleDlg", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("newStyleDlg", "\345\256\275\345\272\246:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newStyleDlg", "\351\253\230\345\272\246:", 0, QApplication::UnicodeUTF8));
        widthSpinBox->setSuffix(QApplication::translate("newStyleDlg", " \345\203\217\347\264\240", 0, QApplication::UnicodeUTF8));
        heightSpinBox->setSuffix(QApplication::translate("newStyleDlg", " \345\203\217\347\264\240", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("newStyleDlg", "\351\242\234\350\211\262:", 0, QApplication::UnicodeUTF8));
        selectColorButton->setText(QApplication::translate("newStyleDlg", "...", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("newStyleDlg", "\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newStyleDlg", "\347\272\257\350\211\262", 0, QApplication::UnicodeUTF8)
        );
        previewLabel->setText(QString());
        okButton->setText(QApplication::translate("newStyleDlg", "\345\245\275", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("newStyleDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newStyleDlg: public Ui_newStyleDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSTYLEDLG_H
