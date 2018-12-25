#ifndef CONSUMIDOR_H
#define CONSUMIDOR_H

#include <QObject>

#define INGRESSOS_TOTAIS 100

class Consumidor
{

private:
    QString nome;
    int numero_ingresso;
    int tipo_ingresso;

public:
    explicit Consumidor();
    Consumidor(QString n, int numero, int tipo);

    QString getNome() const;
    void setNome(const QString &value);

    int getNumero() const;
    void setNumero(int value);

    int getTipoNum() const;
    QString getTipo() const;
    void setTipo(int value);

signals:

public slots:
};

#endif // CONSUMIDOR_H
