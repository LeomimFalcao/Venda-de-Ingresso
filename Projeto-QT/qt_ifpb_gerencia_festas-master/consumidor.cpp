#include "consumidor.h"

QString Consumidor::getNome() const
{
    return nome;
}

void Consumidor::setNome(const QString &value)
{
    nome = value;
}

int Consumidor::getNumero() const
{
    return numero_ingresso;
}

void Consumidor::setNumero(int value)
{
    numero_ingresso = value;
}

QString Consumidor::getTipo() const
{
    switch(tipo_ingresso){
        case 0:
            return "INTEIRA PISTA";
        break;

        case 1:
            return "MEIA PISTA";
        break;

        case 2:
            return "INTEIRA FRONT";;
        break;

        case 3:
            return "MEIA FRONT";
        break;
    }
}

int Consumidor::getTipoNum() const
{
    return tipo_ingresso;
}

void Consumidor::setTipo(int value)
{
    tipo_ingresso = value;
}

Consumidor::Consumidor()
{

}

Consumidor::Consumidor(QString n, int numero, int tipo)
{
    nome = n;
    numero_ingresso = numero;
    tipo_ingresso = tipo;
}
