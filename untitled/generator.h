#ifndef GENERATOR_H
#define GENERATOR_H


class Generator
{
public:
    Generator();
    void SetOnOff(char *buffer, int *maxlen, int *flag);
    void GetFreq(char *buffer, int *maxlen);
    void SetFreq(char *buffer, int *maxlen, char *freq);
    ~Generator();
};

#endif // GENERATOR_H
