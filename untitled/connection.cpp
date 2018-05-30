#include "connection.h"

Connection::Connection(QObject *parent) : QObject(parent)
{
    // Initialize Winsock
    m_iResult=WSAStartup(MAKEWORD(2,2), &m_wsaData);
    if(m_iResult != 0)
    {
        printf("WSAStartup failed with error: %d\n", m_iResult);
        exit(1);
    }
}

QString Connection::getIpAddress()
{
    return m_ipAddress;
}

void Connection::setIpAddress(QString newIpAddress)
{
    m_ipAddress = newIpAddress;
    qDebug() << m_ipAddress;
}

QString Connection::getPort()
{
    return m_port;
}

void Connection::setPort(QString newPort)
{
    m_port = newPort;
    qDebug() << m_port;
}

int Connection::connection(unsigned short port, char *serverName)
{
    int test;
    m_sockClient = socket(AF_INET,SOCK_STREAM,0);
    m_serverHostEnt = gethostbyname(serverName);
    m_addrSockServer.sin_family = AF_INET;
    m_addrSockServer.sin_port = htons(port);
    memcpy(&m_addrSockServer.sin_addr,m_serverHostEnt->h_addr,m_serverHostEnt->h_length);
    test = ::connect(m_sockClient, (struct sockaddr*)&m_addrSockServer, sizeof(m_addrSockServer));
    if(test != 0)
    {
        qDebug() << test;
    }
    return test;
}

void Connection::readData(char *data, long maxlen)
{
    recv(m_sockClient,data,maxlen,0);
    /*QString nomFichier = "C:\\Users\\Matthieu\\Desktop\\Stage\\ProjetV1\\GestionGenCom\\test.txt";
    QFile file(nomFichier);
    if(file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&file);
        out << "buffer" << endl;
    }
    file.close();*/
}

void Connection::writeData(char *data, long maxlen)
{
    send(m_sockClient, data, maxlen, 0);
    /*QString nomFichier = "C:\\Users\\Matthieu\\Desktop\\Stage\\ProjetV1\\GestionGenCom\\test.txt";
    QFile file(nomFichier);
    if(file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&file);
        out << data << endl;
    }
    file.close();*/
}

void Connection::closeSock()
{
    closesocket(m_sockClient);
}
