#include "mainwindow.h"
#include "ui_mainwindow.h"
QString Amostragem, Amostragem2;
int xi[5] = {0,0,0,0, 0};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionSalvar,SIGNAL(triggered()), this, SLOT(salvar()));
    connect(ui->actionCarregar,SIGNAL(triggered()), this, SLOT(carregar()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::atualizarEstatisticas()
{
    //TODO
    int maior = -1, menor = 8;
    for(int i= 0;i<4;i++){
        if(xi[i]>maior){
            maior = xi[i];
        }
        if(maior == xi[0]){
            Amostragem = "Inteira Pista(T1), Sr(a) Usuário(a).";
        }
        if(maior == xi[1]){
            Amostragem = "Meia Pista(T2), Sr(a) Usuário(a).";
        }
        if(maior == xi[2]){
            Amostragem = "Inteira Front(T3), Sr(a) Usuário(a).";
        }
        if(maior == xi[3]){
            Amostragem = "Meia Front(T4), Sr(a) Usuário(a).";
        }
        if(maior == xi[1] && maior == xi[2] && maior == xi[3]){
            Amostragem = "T2, T3 e T4, Sr(a) Usuário(a).";
        }
        if(maior == xi[0] && maior == xi[2] && maior == xi[3]){
            Amostragem = "T1, T3 e T4, Sr(a) Usuário(a).";
        }
        if(maior == xi[0] && maior == xi[1] && maior == xi[2]){
            Amostragem = "T1, T2 e T3, Sr(a) Usuário(a).";
        }
        if(maior == xi[0] && maior == xi[1]){
            Amostragem = "T1 e T2, Sr(a) Usuário(a).";
        }
        if(maior == xi[0] && maior == xi[2]){
            Amostragem = "T1 e T3, Sr(a) Usuário(a).";
        }
        if(maior == xi[0] && maior == xi[3]){
            Amostragem = "T1 e T4, Sr(a) Usuário(a).";
        }
        if(maior == xi[1] && maior == xi[2]){
            Amostragem = "T2 e T3, Sr(a) Usuário(a).";
        }
        if(maior == xi[1] && maior == xi[3]){
            Amostragem = "T2 e T4, Sr(a) Usuário(a).";
        }
        if(maior == xi[2] && maior == xi[3]){
            Amostragem = "T3 e T4, Sr(a) Usuário(a).";
        }
        if(xi[i] < menor){
            menor = xi[i];
        }
        if(menor == xi[0]){
            Amostragem2 = "Inteira Pista(T1), Sr(a) Usuário(a).";
        }
        if(menor == xi[1]){
            Amostragem2 = "Meia Pista(T2), Sr(a) Usuário(a).";
        }
        if(menor == xi[2]){
            Amostragem2 = "Inteira Front(T3), Sr(a) Usuário(a).";
        }
        if(menor == xi[3]){
            Amostragem2 = "Meia Front(T4), Sr(a) Usuário(a).";
        }
        if(menor == xi[0] && menor == xi[1]){
            Amostragem2 = "T1 e T2, Sr(a) Usuário(a).";
        }
        if(menor == xi[0] && menor == xi[2]){
            Amostragem2 = "T1 e T3, Sr(a) Usuário(a).";
        }
        if(menor == xi[0] && menor == xi[3]){
            Amostragem2 = "T1 e T4, Sr(a) Usuário(a).";
        }
        if(menor == xi[1] && menor == xi[2]){
            Amostragem2 = "T2 e T3, Sr(a) Usuário(a).";
        }
        if(menor == xi[1] && menor == xi[3]){
            Amostragem2 = "T2 e T4, Sr(a) Usuário(a).";
        }
        if(menor == xi[2] && menor == xi[3]){
            Amostragem2 = "T3 e T4, Sr(a) Usuário(a).";
        }

        if(menor == xi[1] && menor == xi[2] && menor == xi[3]){
            Amostragem2 = "T2, T3 e T4, Sr(a) Usuário(a).";
        }
        if(menor == xi[0] && menor == xi[2] && menor == xi[3]){
            Amostragem2 = "T1, T3 e T4, Sr(a) Usuário(a).";
        }
        if(menor == xi[0] && menor == xi[1] && menor == xi[2]){
            Amostragem2 = "T1, T2 e T3, Sr(a) Usuário(a).";
        }
        if(maior == xi[0]  &&  maior ==  xi[1] && maior == xi[2] && maior == xi[3]){
            Amostragem = "Ingressos Uniformemente Vendidos, Sr(a) Usuário(a). ";
            Amostragem2 = "Ingressos Uniformemente Vendidos, Sr(a) Usuário(a). ";
        }

    }

    ui->lbl_all->setText(QString::number(xi[4]/1.00,'f',2));
    ui->lbl_high->setText(QString::number(maior*100.00/xi[4],'f',2));
    ui->lbl_low->setText(QString::number(menor*100.00/xi[4],'f',2));
    ui->lbl_most_selled->setText(Amostragem);
    ui->lbl_few_selled->setText(Amostragem2);

}

void MainWindow::inserirConsumidorNaTabela(Consumidor consumidor, int row)
{
    ui->tbl_data->setItem(row,0,new QTableWidgetItem(consumidor.getTipo()));
    ui->tbl_data->setItem(row,1,new QTableWidgetItem(QString::number(consumidor.getNumero())));
    ui->tbl_data->setItem(row,2,new QTableWidgetItem(consumidor.getNome()));
}

void MainWindow::salvar()
{

    QString nomeArquivo = QFileDialog::getSaveFileName(this,"Lista de Compradores","","Texto Puro(*.txt);;Arquivos Separado por Vírgulas(*.csv)");
    if( GerenciadorDeArquivos::salvarFesta(nomeArquivo,tubarao) ){
        QMessageBox::information(this, "Salvar festa","Dados Salvos com Sucesso");
    }else{
        QMessageBox::information(this, "Salvar festa","Não foi possível salvar os dados");
    }

}

void MainWindow::carregar()
{
    QString nomeArquivo = QFileDialog::getOpenFileName(this,"Lista de Compradores","","Texto Puro(*.txt);;Arquivos Separado por Vírgulas(*.csv)");
    tubarao.clear();

    if(GerenciadorDeArquivos::carregarFesta(nomeArquivo,tubarao)){

        ui->tbl_data->clearContents();
        for(int i=0;i<tubarao.size();i++){

            if(i >= ui->tbl_data->rowCount())
                ui->tbl_data->insertRow(i);

            inserirConsumidorNaTabela(tubarao[i],i);
        }

    }else{
        QMessageBox::information(this, "Carregar festa","Não foi possível carregar os dados");
    }

}

void MainWindow::on_btn_insert_clicked()
{
    if(tubarao.size() < INGRESSOS_TOTAIS){
    if(ui->le_nameInput->text().size() != 0){
        Consumidor consumidor;
        consumidor.setNome(ui->le_nameInput->text().toUpper());


        int qnt_row = ui->tbl_data->rowCount();

        ui->tbl_data->insertRow(qnt_row);
        consumidor.setNumero(qnt_row + 1);
        consumidor.setTipo(ui->IngressoBox->currentIndex());
        xi[ui->IngressoBox->currentIndex()]++;
        xi[4]++;
        inserirConsumidorNaTabela(consumidor, qnt_row);

        ui->le_nameInput->clear();


        tubarao.inserirConsumidor(consumidor);
        atualizarEstatisticas();

    }
}
}

void MainWindow::on_btn_NameSort_clicked()
{
    ui->tbl_data->clearContents();

    tubarao.ordenarPorNome();
    for(int i = 0; i<tubarao.size(); i++){
        inserirConsumidorNaTabela(tubarao[i], i);
    }
}

void MainWindow::on_btn_NumberSort_clicked()
{
    ui->tbl_data->clearContents();

    tubarao.ordenarPorIngresso();

    for(int i = 0; i<tubarao.size();i++){
        inserirConsumidorNaTabela(tubarao[i],i);
    }
}
