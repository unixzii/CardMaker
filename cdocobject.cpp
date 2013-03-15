#include "cdocobject.h"

CDocObject::CDocObject(QObject *parent) :
    QObject(parent)
{
}

void CDocObject::setPos(QPoint pos)
{
    m_pos = pos;
}




void CDocObject::setColor(QColor color)
{
    m_bgColor = color;
}

void CDocObject::setId(int id)
{
    m_objId = id;
}

void CDocObject::setReplaceText(QString text)
{
    m_text = text;
}

QPoint CDocObject::getPos()
{
    return m_pos;
}

QSize CDocObject::getSize()
{
    return m_size;
}


QString CDocObject::getText()
{
    return m_text;
}



int CDocObject::getId()
{
    return m_objId;
}
