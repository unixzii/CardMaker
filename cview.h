#ifndef CVIEW_H
#define CVIEW_H

#include "cdocument.h"
#include <QtGui>

class CView : public QWidget
{
    Q_OBJECT
public:
    enum ToolMode
    {
        Pointer,
        TextTool,
        PhotoTool
    };

    explicit CView(CDocument *doc, QWidget *parent = 0);
    void setShowOptLine(bool show);
    void setCurrentTool(ToolMode tm);
    void setCurrentObj(int id);
    int getCurrentObj();
    void setMove(bool move);

    
signals:
    void sendPosMessage(QPoint pos,bool show);
    
public slots:
    
protected:
     void paintEvent(QPaintEvent *);
     void leaveEvent(QEvent *);
     void enterEvent(QEvent *);
     void mouseMoveEvent(QMouseEvent *e);
     void mousePressEvent(QMouseEvent *e);
     void mouseReleaseEvent(QMouseEvent *e);
     void keyPressEvent(QKeyEvent *e);


private:
     CDocument *m_doc;

     //数据存储
     QPoint m_mousePos;
     QPoint m_startPos;
     bool m_isMouseHover;
     bool m_isDrawing;
     int m_selectedId;


     //选项存储
     bool m_showOptLine;
     bool m_move;
     ToolMode m_currentTool;
};

#endif // CVIEW_H
