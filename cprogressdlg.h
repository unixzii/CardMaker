#ifndef CPROGRESSDLG_H
#define CPROGRESSDLG_H

#include <QDialog>

namespace Ui {
class CProgressDlg;
}

class CProgressDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit CProgressDlg(QWidget *parent = 0);
    ~CProgressDlg();

    void setState(QString state,int value);
    void setProgressRange(int min,int max);
    
signals:
    void requestCancel();

private slots:
    void on_cancelBtn_clicked();

private:
    Ui::CProgressDlg *ui;
};

#endif // CPROGRESSDLG_H
