#include "bisa.h"
struct dataPertama simp_data;

bisa::bisa(QObject *parent) : QObject(parent)
{
    server = new QTcpServer(this);
    if (!server->listen(QHostAddress::Any, 2312)) {
      qDebug() << "Failed to start server:" << server->errorString();
      return;
    }
    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    qDebug() << "Server listening on" << server->serverAddress().toString() << ":" << server->serverPort();
}

bisa::~bisa()
{

}

void bisa::mulai()
{

}

void bisa::socketReadyRead()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    if (!socket) {
      return;
    }
    //tutorial::Person message;
     databuf::pesanSatu message;
    char recvBuffer[26];
    socket->read(recvBuffer, sizeof(recvBuffer));
    message.ParseFromArray(recvBuffer, sizeof(recvBuffer));
   // dataPertama myStruct = *reinterpret_cast<dataPertama*>(recvBuffer);
    QString str;
    str.sprintf("%s",recvBuffer);
    qDebug() << "Full ByteArray: " << str;
    QString ay = QString::fromStdString(message.judul().c_str());
    qDebug()<<"judul:"<<ay;
   // message.integer();
    qDebug()<<"integer:"<<message.integer();
   qDebug() << "float: " << message.floater();
    qDebug() << "double: " << message.dubler();
    //github.com/hardxuyp/PbConvertor

}

void bisa::socketDisconnected()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    if (!socket) {
      return;
    }
    sockets.removeOne(socket);
    socket->deleteLater();
    qDebug() << "Client disconnected";
}

void bisa::bytesWritten(qint64 bytes)
{
    qDebug() << "We wrote: " << bytes;
}

void bisa::newConnection()
{
    // databuf::pesanSatu message;
//    tutorial::Person message;
//    message.set_name("Hello, world!");
//    const int size = message.ByteSizeLong();
//    qDebug()<<"size writen: "<<size;
//    std::unique_ptr<char[]> buffer(new char[size]);
//    message.SerializeToArray(buffer.get(), size);
//    // Send the serialized data over the network using Qt
    QTcpSocket *socket = server->nextPendingConnection();
  //  socket->write(buffer.get(), size);
    connect(socket, &QTcpSocket::readyRead, this, &bisa::socketReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &bisa::socketDisconnected);
    connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));
}

//bikin protobuf jadi duapesan
//// Create a message and fill it with data
//MyMessage message;
//message.set_id(123);
//message.set_name("John");

//// Serialize the message to a byte array
//uint8_t buffer[1024];
//int size = message.SerializeToArray(buffer, sizeof(buffer));

//// Deserialize the message from the byte array
//MyMessage deserialized_message;
//deserialized_message.ParseFromArray(buffer, size);

//// Access the deserialized message's data
//std::cout << deserialized_message.id() << std::endl;   // prints "123"
//std::cout << deserialized_message.name() << std::endl; // prints "John"

//std::string myStdString = "Hello, world!";
//QString myQString = QString::fromStdString(myStdString);

//char myChar = 'A';

//// Create a temporary char array and fill it with data
//char tempCharArr[sizeof(MyStruct)];
//memset(tempCharArr, 0, sizeof(MyStruct));
//tempCharArr[0] = myChar;

//// Use a pointer to initialize the struct
//MyStruct myStruct = *reinterpret_cast<MyStruct*>(tempCharArr);

//QString qtString = QString::fromUtf8(message.my_string_field().c_str());
