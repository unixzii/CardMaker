#ifndef CDOCOBJECT_H
#define CDOCOBJECT_H

#include <QObject>
#include <QPoint>
#include <QSize>
#include <QColor>
#include <QPainter>

class CDocObject : public QObject
{
    Q_OBJECT
public:
    explicit CDocObject(QObject *parent = 0);
    void setPos(QPoint pos);
    void setSize(QSize size);
    void setColor(QColor color);
    void setId(int id);
    void setReplaceText(QString text);

    QPoint getPos();
    QSize getSize();
    QString getText();
    int getId();
    virtual void drawObj(QPainter &p) = 0;
    virtual void drawObj(QString text,QPainter &p) = 0;
    virtual int type() = 0;
    virtual QByteArray toByteArray() = 0;
    virtual void fromByteArray(QByteArray ba) = 0;

    
signals:

public slots:
    
private:
    QPoint m_pos;
    QSize m_size;
    QColor m_bgColor;
    int m_objId;
    QString m_text;
};

#endif // CDOCOBJECT_H
