#ifndef RENDERINGHELPER_H
#define RENDERINGHELPER_H

#include "../CardMaster/render/render_global.h"

#include <QImage>
#include <QPainter>

class RENDERSHARED_EXPORT RenderingHelper
{
public:
    RenderingHelper();
    static QPixmap generateBackground(QSize size,QPixmap bg,int mode);
    static QPixmap generateBackground(QSize size,QColor color);
    static QPixmap generateBackground(QSize size);
};

#endif // RENDERINGHELPER_H
