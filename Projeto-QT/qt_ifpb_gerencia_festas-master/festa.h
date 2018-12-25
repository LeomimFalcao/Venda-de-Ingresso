#ifndef FESTA_H
#define FESTA_H

#include <QObject>
#include <QVector>
#include <numeric>
#include <algorithm>

#include "consumidor.h"

class Festa : public QObject
{
    Q_OBJECT
private:
    QVector<Consumidor> festa;

public:
    explicit Festa(QObject *parent = nullptr);
    void inserirConsumidor(const Consumidor c);
    float mediaFesta();
    float maiorPorcentagem();
    float menorPorcentagem();
    void ordenarPorNome();
    void ordenarPorIngresso();

    int size();
    void clear();

    Consumidor operator[](int i);


signals:

public slots:
};

#endif
