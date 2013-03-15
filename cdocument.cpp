#include "cdocument.h"

CDocument::CDocument(QObject *parent) :
    QObject(parent)
{
    m_count = 0;
}

void CDocument::setStyleBackground(QPixmap bg)
{
    m_background = bg;
}

void CDocument::setPaperSize(QSize size)
{
    m_size = size;
}


void CDocument::setStyleName(QString name)
{
    m_name = name;
}

QSize CDocument::getPaperSize()
{
    return m_size;
}

QPixmap CDocument::getStyleBackground()
{
    return m_background;
}

QString CDocument::getStyleName()
{
    return m_name;
}

QPixmap CDocument::getPreview()
{
    QPixmap preview(m_size);
    QPainter p(&preview);
    p.drawPixmap(0,0,this->getStyleBackground());
    foreach(CDocObject *obj,m_objs)
    {
        obj->drawObj(p);
    }

    return preview;
}

void CDocument::addObject(CDocObject *obj)
{
    obj->setId(++m_count);
    m_objs.append(obj);
}

void CDocument::delObject(int id)
{
    for(int i = 0;i < m_objs.count();i++)
    {
        if(m_objs[i]->getId() == id)
        {
            m_objs.removeAt(i);
        }
    }
}


QList<CDocObject *> *CDocument::getObjects()
{
    return &m_objs;
}
