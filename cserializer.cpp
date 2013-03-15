#include "cserializer.h"

#include <QFile>
#include <QDataStream>
#include <QDebug>
CSerializer::CSerializer(QObject *parent) :
    QObject(parent)
{
}

void CSerializer::Serialize(CDocument *doc, QString fileName)
{
    QList<QByteArray> bas;
    foreach(CDocObject *obj,*doc->getObjects())
    {
        bas.append(obj->toByteArray());
    }

    QFile file(fileName);
    if(file.open(QFile::WriteOnly))
    {
        QDataStream stm(&file);
        stm << (quint32)0xA064FF00 << bas << doc->getStyleBackground() << doc->getPaperSize() << doc->getStyleName();
        //qDebug() << bas.count() << doc->getStyleBackground().size() << doc->getPaperSize() << doc->getStyleName();
        file.close();
    }
}

bool CSerializer::Unserialize(QString fileName,CDocument *doc)
{
    QFile file(fileName);
    if(file.open(QFile::ReadWrite))
    {
        QDataStream stm(&file);

        quint32 head;
        QList<QByteArray> oBas;
        QPixmap bg;
        QSize size;
        QString name;

        stm >> head >> oBas >> bg >> size >> name;
        //qDebug() << head << oBas.count() << bg.size() << size << name;
        if(head == 0xA064FF00)
        {
            doc->setStyleName(name);
            doc->setPaperSize(size);
            doc->setStyleBackground(bg);
            foreach(QByteArray ba,oBas)
            {
                CTextObj *obj = new CTextObj;
                obj->fromByteArray(ba);
                doc->addObject(obj);
            }
        }else{
            return false;
        }
        file.flush();
        file.close();
    }else{
        return false;
    }
    return true;
}
