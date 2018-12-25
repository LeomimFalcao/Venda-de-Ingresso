#ifndef GERENCIADORDEARQUIVOS_H
#define GERENCIADORDEARQUIVOS_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QDebug>

#include "festa.h"
#include "consumidor.h"


class GerenciadorDeArquivos
{
public:
    GerenciadorDeArquivos();
    static bool salvarFesta(QString &arquivo, Festa &festa);
    static bool carregarFesta(QString &arquivo, Festa &festa);
};

#endif // GERENCIADORDEARQUIVOS_H
