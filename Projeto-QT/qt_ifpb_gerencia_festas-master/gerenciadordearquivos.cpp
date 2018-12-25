#include "gerenciadordearquivos.h"

GerenciadorDeArquivos::GerenciadorDeArquivos()
{

}

bool GerenciadorDeArquivos::salvarFesta(QString &arquivo, Festa &festa)
{
    QFile file(arquivo);

    if(!file.open(QIODevice::WriteOnly)){
        return false;
    }

    QTextStream out(&file);

    for(int i=0;i<festa.size();i++){
        out << festa[i].getNome()<<","<<festa[i].getNumero()<<","<<festa[i].getTipoNum()<<"\n";
    }

    file.close();
    return true;
}

bool GerenciadorDeArquivos::carregarFesta(QString &arquivo, Festa &festa)
{
    QFile file(arquivo);

    if(!file.open(QIODevice::ReadOnly)){
        return false;
    }

    QTextStream in(&file);

    QString linha;

    while(!in.atEnd()){
        linha = in.readLine();

        QStringList dados = linha.split(",");

        Consumidor c(dados[0],dados[1].toInt(),dados[2].toInt());
        festa.inserirConsumidor(c);

    }
    return true;
}
