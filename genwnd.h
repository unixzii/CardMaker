#ifndef GENWND_H
#define GENWND_H

#include <QMainWindow>
#include "cprogressdlg.h"
#include "cdocument.h"

namespace Ui {
class GenWnd;
}

class GenWnd : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit GenWnd(CDocument *doc,QWidget *parent = 0);
    ~GenWnd();

signals:
    void closed();

private slots:
    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_pushButton_clicked();

    void on_action_CSV_triggered();

    void cancel();

    void setState(QString state,int value);

protected:
    void closeEvent(QCloseEvent *);

private:
    Ui::GenWnd *ui;

    CProgressDlg *m_prDlg;

    CDocument *m_doc;
    QStringList header;
    bool isCancel;
};

#endif // GENWND_H
