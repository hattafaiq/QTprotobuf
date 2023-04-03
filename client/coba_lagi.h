#ifndef COBA_LAGI_H
#define COBA_LAGI_H
#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <google/protobuf/message.h>
#include <iostream>
#include "road.pb.h"

class coba_lagi : public QObject
{
    Q_OBJECT
public:
    explicit coba_lagi(QObject *parent = nullptr);
    ~coba_lagi();
    void Test();

public slots:

    void connected();
    void disconnected();
    void readyRead();
    void bytesWritten(qint64 bytes);

private:
    QTcpSocket *socket;
};

struct dataPertama
{
    char judul[10];
//    int32_t integer;
//    float floater;
//    double dubler;
};

#endif // COBA_LAGI_H
