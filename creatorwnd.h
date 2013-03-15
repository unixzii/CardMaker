#ifndef CREATORWND_H
#define CREATORWND_H

#include "cdocument.h"
#include "cview.h"
#include <QMainWindow>

namespace Ui {
class CreatorWnd;
}

class CreatorWnd : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CreatorWnd(CDocument *doc,QWidget *parent = 0);
    ~CreatorWnd();

signals:
    void closed();

protected:
    void closeEvent(QCloseEvent *e);

private slots:
    void on_action_toggled(bool arg1);

    void on_pointerAction_triggered();

    void on_textAction_triggered();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_boldAction_triggered();

    void on_italicAction_triggered();

    void on_underlineAction_triggered();

    void on_fontAction_triggered();

    void on_colorAction_triggered();

    void on_delButton_clicked();

    void on_listWidget_itemChanged(QListWidgetItem *item);

    void on_saveAction_triggered();

    void getPosMessage(QPoint pos, bool show);

private:
    void updateList();
    void prepareToolbar();

private:
    Ui::CreatorWnd *ui;

    CDocument *m_doc;
    CView *m_view;

};

#endif // CREATORWND_H
