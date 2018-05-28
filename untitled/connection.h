#ifndef CONNECTION_H
#define CONNECTION_H
#include <QObject>
#include <QString>
#include <QDebug>
#include <QQmlEngine>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>


class Connection : public QObject
{
    Q_OBJECT

public:
    explicit Connection(QObject *parent = nullptr);

public slots:
    QString getIpAddress();
    void setIpAddress(QString newIpAddress);
    QString getPort();
    void setPort(QString newPort);
    int connection(unsigned short port, char *serverName);
    void readData(char *data, long maxlen);
    void writeData(char *data, long maxlen);
    void closeSock();

signals:
    void ipAddressChanged();

private :
    QString m_port;
    QString m_ipAddress;
    WSADATA m_wsaData;
    int m_iResult;
    SOCKET m_sockClient;
    char *m_serverName, *m_data;
    long m_maxlen;
    struct hostent *m_serverHostEnt;
    struct sockaddr_in m_addrSockServer;

};

#endif // CONNECTION_H
