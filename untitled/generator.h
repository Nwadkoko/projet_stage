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
    void setOnOff(char *buffer, int *maxlen, int *flag);
    void getFreq(char *buffer, int *maxlen);
    void setFreq(char *buffer, int *maxlen, char *freq);
};

#endif // GENERATOR_H
