#include "coba_dulu.h"
#include <QtNetwork>
#include <google/protobuf/message.h>
#include <iostream>
#include "road.pb.h"

coba_dulu::coba_dulu(QObject *parent) : QObject(parent)
{
 mulai_server();
}

coba_dulu::~coba_dulu()
{
    server->deleteLater();
    socket.deleteLater();
}

void coba_dulu::mulai_server()
{
   server = new QTcpServer(this);
  //  QTcpSocket socket;

   connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));
   if(!server->listen(QHostAddress::Any, 2312))
   {
       qDebug()<<"server off";
   }
   else{
       qDebug()<<"server on";
   }


//    const std::string name1 = "faiq";
//    tutorial::Person message;
//    // Serialize the message to a byte array
//    QByteArray data;
//    message.SerializeToArray(data.data(), data.size());

//    // Send the serialized data over the network using Qt
//    socket.write(data);

//    // Receive serialized data over the network using Qt
//    QByteArray receivedData = socket.readAll();
}

void coba_dulu::terima_pesan()
{
    QTcpSocket *socketr = server->nextPendingConnection();

    socketr->write("hello client\r\n");
    socketr->flush();
    socketr->waitForBytesWritten(3000);
    socketr->close();
}

void coba_dulu::terima_ngapain()
{

}

void coba_dulu::newConnection()
{
    QTcpSocket *socketr = server->nextPendingConnection();

    socketr->write("hello client\r\n");
    socketr->flush();
    socketr->waitForBytesWritten(3000);
    socketr->close();
}

