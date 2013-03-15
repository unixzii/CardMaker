#ifndef CTEXTOBJ_H
#define CTEXTOBJ_H

#include "cdocobject.h"

#include <QFont>
#include <QColor>

class CTextObj : public CDocObject
{
    Q_OBJECT
public:
    explicit CTextObj(QObject *parent = 0);
    void setTextFont(QFont font);
    QFont getTextFont();
    void setTextColor(QColor color);

    void drawObj(QPainter &p);
    void drawObj(QString text,QPainter &p);
    int type();
    QByteArray toByteArray();
    void fromByteArray(QByteArray ba);

private:
    QFont m_textFont;
    QColor m_textColor;

};

#endif // CTEXTOBJ_H
