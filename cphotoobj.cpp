#include "cphotoobj.h"

CPhotoObj::CPhotoObj(QObject *parent) :
    CDocObject(parent)
{
}

void CPhotoObj::setPixmap(QPixmap pixmap)
{
    m_photoPixmap = pixmap;
}

void CPhotoObj::drawObj(QPainter &p)
{
}

int CPhotoObj::type()
{
    return 2;
}
