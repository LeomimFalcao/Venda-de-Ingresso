#include "festa.h"

Festa::Festa(QObject *parent) : QObject(parent)
{

}

void Festa::inserirConsumidor(const Consumidor a)
{
    festa.push_back(a);
}

float Festa::mediaFesta()
{
    return festa.size()/10;
}

float Festa::maiorPorcentagem()
{
    Consumidor *maior = std::max_element(festa.begin(),festa.end(),[](Consumidor c, Consumidor b){ return c.getNumero() < b.getNumero();});
    return maior->getNumero();
}

float Festa::menorPorcentagem()
{
    Consumidor *menor = std::min_element(festa.begin(),festa.end(),[](Consumidor c, Consumidor b){return c.getNumero() < b.getNumero();});
    return menor->getNumero();
}

void Festa::ordenarPorNome()
{
    std::sort(festa.begin(), festa.end(), [](Consumidor c, Consumidor b){return c.getNome()<b.getNome();});
}

void Festa::ordenarPorIngresso()
{
    ordenarPorNome();
    std::stable_sort(festa.begin(),festa.end(),[](Consumidor c, Consumidor b){return c.getNumero()<b.getNumero();});
}

int Festa::size()
{
    return festa.size();
}

void Festa::clear()
{
    festa.clear();
}

Consumidor Festa::operator[](int i)
{
    return festa[i];
}
