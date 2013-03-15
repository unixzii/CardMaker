#ifndef CM_NEWDOCUMENTDLG_H
#define CM_NEWDOCUMENTDLG_H

#include <QDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

#include "renderinghelper.h"

namespace Ui {
class CM_NewDocumentDlg;
}

class CM_NewDocumentDlgPrivate;

class CM_NewDocumentDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit CM_NewDocumentDlg(QWidget *parent = 0);
    QPixmap getBackground();
    QSize getPaperSize();
    QString getStyleName();
    ~CM_NewDocumentDlg();
    
private slots:
    void on_btnColor_clicked();

    void on_comboBackgroundType_currentIndexChanged(int index);

    void on_checkLocks_clicked(bool checked);

    void on_spinWidth_editingFinished();

    void on_spinHeight_editingFinished();

    void on_toolButton_clicked();

    void on_comboPicMode_currentIndexChanged(int index);

    void on_btnCancel_clicked();

    void on_btnOk_clicked();

private:
    Ui::CM_NewDocumentDlg *ui;
    CM_NewDocumentDlgPrivate *d;

    int calcRatioValue(QString str,int num,bool direction);
    void updatePreview();
};

#endif // CM_NEWDOCUMENTDLG_H
