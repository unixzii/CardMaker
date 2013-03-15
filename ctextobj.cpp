#include "ctextobj.h"

CTextObj::CTextObj(QObject *parent) :
    CDocObject(parent)
{
}

void CTextObj::setTextFont(QFont font)
{
    m_textFont = font;
}

QFont CTextObj::getTextFont()
{
    return m_textFont;
}

void CTextObj::setTextColor(QColor color)
{
    m_textColor = color;
}

void CTextObj::drawObj(QPainter &p)
{
    p.save();
    QPainterPath path;
    path.addText(this->getPos(),this->m_textFont,this->getText());
    p.setBrush(QBrush(this->m_textColor));
    p.setPen(Qt::NoPen);
    p.drawPath(path);
    p.restore();
}

void CTextObj::drawObj(QString text, QPainter &p)
{
    p.save();
    QPainterPath path;
    path.addText(this->getPos(),this->m_textFont,text);
    p.setBrush(QBrush(this->m_textColor));
    p.setPen(Qt::NoPen);
    p.drawPath(path);
    p.restore();
}

int CTextObj::type()
{
    return 1;
}

QByteArray CTextObj::toByteArray()
{
    QByteArray ba;
    QDataStream stm(&ba,QIODevice::WriteOnly);
    stm << (uint)0xA0FFFFFF << getId() << getPos() << getText() << m_textColor << m_textFont;
    return ba;
}

void CTextObj::fromByteArray(QByteArray ba)
{
    uint head;
    int id;
    QPoint pos;
    QString text;
    QColor color;
    QFont font;

    QDataStream stm(&ba,QIODevice::ReadOnly);
    stm >> head >> id >> pos >> text >> color >> font;

    if(head == 0xA0FFFFFF)
    {
        setId(id);
        setPos(pos);
        setReplaceText(text);
        m_textColor = color;
        m_textFont = font;
    }
}

