#include "cprogressdlg.h"
#include "ui_cprogressdlg.h"

CProgressDlg::CProgressDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CProgressDlg)
{
    ui->setupUi(this);
}

CProgressDlg::~CProgressDlg()
{
    delete ui;
}

void CProgressDlg::setState(QString state, int value)
{
    ui->stateLbl->setText(state);
    ui->progressBar->setValue(value);
}


void CProgressDlg::setProgressRange(int min, int max)
{
    ui->progressBar->setMinimum(min);
    ui->progressBar->setMaximum(max);
    ui->progressBar->setValue(min);
}

void CProgressDlg::on_cancelBtn_clicked()
{
    emit requestCancel();
}
