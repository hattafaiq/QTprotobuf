#include "coba_lagi.h"
#include <QtNetwork>
#include <google/protobuf/message.h>
#include <iostream>
#include "road.pb.h"
struct dataPertama simp_data;

coba_lagi::coba_lagi(QObject *parent) : QObject(parent)
{
    Test();
}

coba_lagi::~coba_lagi()
{

}

void coba_lagi::Test()
{
    socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 2312);
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));
}

void coba_lagi::connected()
{
    qDebug() << "Connected";
   // tutorial::Person message;
    databuf::pesanSatu message;
   // message.set_id(1);
    char bisayuk[11] = "File DBE";
    message.set_judul(bisayuk); //10byte
    message.set_integer(20); //2byte
    message.set_floater(3.14); //5byte
    message.set_dubler(-100); //9byte
    //penggunaan metode pengiriman ini dan yang dibawah sama saja
    //------------------------------------------------------
//    const int size = message.ByteSizeLong();
//    qDebug()<<"size writen: "<<size;
//    std::unique_ptr<char[]> buffer(new char[size]);
//    message.SerializeToArray(buffer.get(), size);
//    socket->write(buffer.get(), size);
//    socket->waitForBytesWritten();
    //------------------------------------------------------
    //penggunaan metode pengiriman ini dan yang diatas sama saja
    QByteArray serializedMessage;
    serializedMessage.resize(message.ByteSizeLong());
    message.SerializeToArray(serializedMessage.data(), serializedMessage.size());
    socket->write(serializedMessage);
    socket->waitForBytesWritten();

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void coba_lagi::disconnected()
{
    qDebug() << "Disconnected!";
}

void coba_lagi::bytesWritten(qint64 bytes)
{
    qDebug() << "We wrote: " << bytes;
}

void coba_lagi::readyRead()
{
    QTcpSocket *socken = qobject_cast<QTcpSocket *>(sender());
    if (!socket) {
      return;
    }
     databuf::pesanSatu message;
    //tutorial::Person message;
//    char recvBuffer[256];
//    socken->read(recvBuffer, sizeof(recvBuffer));
//    message.ParseFromArray(recvBuffer, socket->bytesAvailable());
//    char recvBuffer[sizeof (dataPertama)];
//    socket->read(recvBuffer, sizeof(recvBuffer));
//    message.ParseFromArray(recvBuffer, socket->bytesAvailable());
//    dataPertama myStruct = *reinterpret_cast<dataPertama*>(recvBuffer);
//    qDebug() << "judul: " << myStruct.judul;
}


