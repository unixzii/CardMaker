#include "cview.h"
#include "appglobal.h"
#include "math.h"

CView::CView(CDocument *doc, QWidget *parent) :
    QWidget(parent)
{
    m_doc = doc;

    m_showOptLine = false;
    m_isDrawing = false;
    m_isMouseHover = false;
    m_move = false;

    m_selectedId = -1;

    this->setFocusPolicy(Qt::StrongFocus);
    this->setMouseTracking(true);
}

void CView::setShowOptLine(bool show)
{
    m_showOptLine = show;
}

void CView::setCurrentTool(CView::ToolMode tm)
{
    m_currentTool = tm;
    if(m_currentTool != Pointer)
    {
        this->setCursor(Qt::CrossCursor);
    }else{
        this->setCursor(Qt::ArrowCursor);
    }
}

void CView::setCurrentObj(int id)
{
    m_selectedId = id;
}

int CView::getCurrentObj()
{
    return m_selectedId;
}

void CView::setMove(bool move)
{
    m_move = move;
}

void CView::paintEvent(QPaintEvent *)
{
    QImage cache(m_doc->getPaperSize(),QImage::Format_ARGB32);
    QPainter p(&cache);
    p.setRenderHint(QPainter::Antialiasing);
    p.fillRect(this->rect(),Qt::white);
    p.drawPixmap(0,0,m_doc->getStyleBackground());

    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        obj->drawObj(p);
    }

    if(m_showOptLine && m_isMouseHover)
    {
        p.save();
        p.setPen(QPen(QBrush(Qt::white),1.0f,Qt::DotLine));
        p.setCompositionMode(QPainter::CompositionMode_Xor);
        p.drawLine(0,m_mousePos.y(),this->width(),m_mousePos.y());
        p.drawLine(m_mousePos.x(),0,m_mousePos.x(),this->height());
        p.restore();
    }


    QPainter p2(this);
    p2.drawImage(0,0,cache);
}

void CView::leaveEvent(QEvent *)
{
    m_isMouseHover = false;
    emit sendPosMessage(QPoint(),false);
    update();
}

void CView::enterEvent(QEvent *)
{
    m_isMouseHover = true;
    update();
}

void CView::mouseMoveEvent(QMouseEvent *e)
{

    m_mousePos = e->pos();
    emit sendPosMessage(m_mousePos,true);

    if(m_isDrawing)
    {


    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        if(obj->getId() == m_selectedId)
        {
            QPoint pos = obj->getPos();
            int dx = pos.x() + (m_mousePos.x() - m_startPos.x());
            int dy = pos.y() + (m_mousePos.y() - m_startPos.y());
            obj->setPos(QPoint(dx,dy));
        }
    }
    m_startPos = e->pos();

    }
    update();
}

void CView::mousePressEvent(QMouseEvent *e)
{
    if(m_selectedId != -1 && m_move)
        m_isDrawing = true;

    m_startPos = e->pos();
    m_mousePos = e->pos();
}

void CView::mouseReleaseEvent(QMouseEvent *e)
{
    m_isDrawing = false;

    update();
}

void CView::keyPressEvent(QKeyEvent *e)
{
    if(!m_move)
        e->ignore();
    e->accept();
    //qDebug() << "Enter: 00000";
    CDocObject *pObj;
    QPoint oldPos;
    foreach(CDocObject *obj,*m_doc->getObjects())
    {
        if(obj->getId() == m_selectedId)
        {
            pObj = obj;
            oldPos = obj->getPos();
        }
    }

    if(!pObj)
        return;

    int nAddFactor;
    if(e->modifiers() == Qt::ShiftModifier)
    {
        nAddFactor = 5;
    }else{
        nAddFactor = 1;
    }

    switch(e->key())
    {
    case Qt::Key_Up:
        oldPos.setY(oldPos.y() - nAddFactor);
        pObj->setPos(oldPos);
        break;
    case Qt::Key_Down:
        oldPos.setY(oldPos.y() + nAddFactor);
        pObj->setPos(oldPos);
        break;
    case Qt::Key_Left:
        oldPos.setX(oldPos.x() - nAddFactor);
        pObj->setPos(oldPos);
        break;
    case Qt::Key_Right:
        oldPos.setX(oldPos.x() + nAddFactor);
        pObj->setPos(oldPos);
        break;
    }
    update();
    //qDebug() << "00000";
}
