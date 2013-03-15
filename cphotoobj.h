#ifndef CPHOTOOBJ_H
#define CPHOTOOBJ_H

#include "cdocobject.h"

#include <QPixmap>

class CPhotoObj : public CDocObject
{
    Q_OBJECT
public:
    explicit CPhotoObj(QObject *parent = 0);
    void setPixmap(QPixmap pixmap);

    void drawObj(QPainter &p);
    int type();

private:
    QPixmap m_photoPixmap;
};

#endif // CPHOTOOBJ_H
