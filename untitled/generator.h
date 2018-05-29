#ifndef GENERATOR_H
#define GENERATOR_H
#include <QObject>
#include <QDebug>
#include <QQmlEngine>


class Generator : public QObject
{
    Q_OBJECT
public:
    explicit Generator(QObject *parent = nullptr);
    ~Generator();

public slots:
    void SetOnOff(char *buffer, int *maxlen, int *flag);
    void GetFreq(char *buffer, int *maxlen);
    void SetFreq(char *buffer, int *maxlen, char *freq);
};

#endif // GENERATOR_H
