#include "generator.h"
#include <string.h>

Generator::Generator(QObject *parent) : QObject(parent)
{

}

void Generator::SetOnOff(char *buffer, int *maxlen, int *flag)
{
    if(*flag==0)
    {
        strcpy(buffer,"\r\nOUTPUT 1\r\n");
        *flag=1;
    }
    else
    {
        strcpy(buffer,"OUTPUT 0\r\n");
        *flag=0;
    }
    *maxlen=strlen(buffer);
}

void Generator::GetFreq(char *buffer, int *maxlen)
{
    strcpy(buffer,"FREQ?\r\n");
    *maxlen=strlen(buffer);
}
void Generator::SetFreq(char *buffer, int *maxlen, char *freq)
{
    char sautligne[2];
    strcpy(sautligne,"\r\n");
    strcpy(buffer,"FREQ ");
    buffer=strcat(buffer,freq);
    buffer=strcat(buffer,sautligne);
    *maxlen=strlen(buffer);
}
Generator::~Generator()
{

}
