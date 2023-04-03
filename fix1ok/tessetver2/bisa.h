#ifndef BISA_H
#define BISA_H
#include <QtNetwork>
#include <iostream>
#include <QTcpServer>
#include <QTcpSocket>
#include <QObject>
#include <google/protobuf/message.h>
#include <iostream>
#include "road.pb.h"

class bisa: public QObject
{
    Q_OBJECT
public:
   explicit bisa(QObject *parent=nullptr);
   virtual ~bisa();
   void mulai();
   QTcpServer *server;
  // QTcpSocket socket;

private:
    QList<QTcpSocket *> sockets;

public slots:
    void socketReadyRead();
    void socketDisconnected();
    void newConnection();
    void bytesWritten(qint64 bytes);

};

struct dataPertama
{
    char judul[10];
//    int32_t integer;
//    float floater;
//    double dubler;
};

#endif // BISA_H
