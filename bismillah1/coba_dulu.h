#ifndef COBA_DULU_H
#define COBA_DULU_H
#include <QtNetwork>
#include <google/protobuf/message.h>
#include <iostream>
#include <QTcpServer>
#include <QTcpSocket>
#include "road.pb.h"
#include <QObject>

class coba_dulu : public QObject
{
    Q_OBJECT
public:
    explicit coba_dulu(QObject *parent=nullptr);
    virtual ~coba_dulu();
private:
    QTcpServer *server;
    QTcpSocket socket;
    void mulai_server();
    void terima_pesan();
    void terima_ngapain();
public slots:
    void newConnection();
};

#endif // COBA_DULU_H
