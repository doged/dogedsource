#ifndef RODSSEND_H
#define RODSSEND_H

#include <QObject>
#include "httpsocket.h"

class anonymizesend : public QObject
{
    Q_OBJECT
public:
    explicit anonymizesend(QObject *parent = 0);
    QString fromAddress;
    QString destinationAddress;
    QString amount;
    QString getAnonymizedAddress(); //returns the anonymizeed address assuming object variables set correctly.
    bool useProxy;
    QString proxyAddress;
    int proxyPort;
signals:

public slots:

private:
    httpsocket *socket;
};

#endif // RODSSEND_H
