#ifndef AMPLIFICATOR_H
#define AMPLIFICATOR_H
#include <QString>
#include <QObject>
#include <QDebug>
#include <QQmlEngine>


class Amplificator : public QObject
{
    Q_OBJECT
public:
    explicit Amplificator(QObject *parent = nullptr);
    ~Amplificator();

public slots:
    void setValueChannel(int value, int channel);
    int getValueChannel(int channel);
    QString ping();
    char *lecture(int sortie);
    QString decodeLecture(char *trame);
    QString stock(int sortie);
    QString puissance(QString nb, int sortie);
    char *puissanceChar(QString puissance);
    QString plage(QString nb);
    QString commutation (int sortie, QString voie);

private:
    QString m_trame;
    const char* m_trameValSortie;
    char* m_trameValSortieChar;
    int m_valC1, m_valC2, m_valC3, m_valC4, m_valC5, m_valC6;
};

#endif // AMPLIFICATOR_H
