#include "backend.h"

BackEnd::BackEnd(QObject *parent) :
    QObject(parent)
{
}

QString BackEnd::userName()
{
    return m_ipAddress;
}

void BackEnd::setUserName(const QString &userName)
{
    if (ipAddress == m_ipAddress)
        return;

    m_userName = userName;
    emit userNameChanged();
}
