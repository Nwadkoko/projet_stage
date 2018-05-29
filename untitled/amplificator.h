#ifndef AMPLIFICATOR_H
#define AMPLIFICATOR_H
#include <QString>


class Amplificator
{
public:
    Amplificator();
    QString ping();
    char *lecture(int sortie);
    QString decodeLecture(char *trame);
    QString stock(int sortie);
    QString puissance(QString nb, int sortie);
    QString plage(QString nb);
    QString commutation (int sortie, QString voie);
    ~Amplificator();

private:
    QString m_trame;
    const char* m_trameValSortie;
    char* m_trameValSortieChar;
};

#endif // AMPLIFICATOR_H
