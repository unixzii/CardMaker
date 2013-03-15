#ifndef CWELCOMEDLG_H
#define CWELCOMEDLG_H

#include "newstyledlg.h"
#include "creatorwnd.h"
#include "genwnd.h"
#include "cm_newdocumentdlg.h"

#include <QDialog>
#include <QTimeLine>


namespace Ui {
class CWelcomeDlg;
}

class CWelcomeDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit CWelcomeDlg(QWidget *parent = 0);
    ~CWelcomeDlg();
    
private slots:
    void on_newStyleButton_clicked();
    void creatorClosed();
    void generClosed();

    void on_importStyleButton_clicked();

    void on_systemStyleList_itemDoubleClicked(QListWidgetItem *item);

    void on_systemStyleList_currentRowChanged(int currentRow);

    void on_aboutLabel_linkActivated(const QString &link);

    void frameChanged(int frame);

    void animationFinished();

protected:
    void paintEvent(QPaintEvent *);
    void closeEvent(QCloseEvent *);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
    bool winEvent(MSG *message, long *result);

private:
    Ui::CWelcomeDlg *ui;

    CreatorWnd *creatorWnd;
    GenWnd *genWnd;

    QPoint dragPos;
    bool isDraging;

    QTimeLine *m_animation;
    QPixmap wnd_cache;

private:
    void scanDir();
};

#endif // CWELCOMEDLG_H
