#ifndef CSERIALIZER_H
#define CSERIALIZER_H

#include "cdocument.h"
#include <QObject>

class CSerializer : public QObject
{
    Q_OBJECT
public:
    CSerializer(QObject *parent = 0);

    static void Serialize(CDocument *doc, QString fileName);
    static bool Unserialize(QString fileName, CDocument *doc);
    
signals:

public slots:
    
private:

};

#endif // CSERIALIZER_H
