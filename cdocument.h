#ifndef CDOUCUMENT_H
#define CDOUCUMENT_H

#include "appglobal.h"
#include "cdocobject.h"
#include "ctextobj.h"
#include "cphotoobj.h"
#include <QObject>
#include <QPixmap>
#include <QList>

class CDocument : public QObject
{
    Q_OBJECT
public:
    explicit CDocument(QObject *parent = 0);
    void setStyleBackground(QPixmap bg);
    void setPaperSize(QSize size);
    void setStyleName(QString name);
    QSize getPaperSize();
    QPixmap getStyleBackground();
    QString getStyleName();

    QPixmap getPreview();

    void addObject(CDocObject *obj);
    void delObject(int id);
    QList<CDocObject*> * getObjects();
    
signals:
    
public slots:

private:
    QPixmap m_background;
    QSize m_size;
    QString m_name;
    int m_count;

    QList<CDocObject*> m_objs;
};

#endif // CDOUCUMENT_H
