#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QVector>
#include <QFileDialog>
#include <QMessageBox>

#include "gerenciadordearquivos.h"
#include "consumidor.h"
#include "festa.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Festa tubarao;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void atualizarEstatisticas();

private slots:
    void on_btn_insert_clicked();

    void on_btn_NameSort_clicked();

    void on_btn_NumberSort_clicked();

    void salvar();
    void carregar();

    //void on_lbl_highest_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    void inserirConsumidorNaTabela(Consumidor consumidor, int row);


};

#endif // MAINWINDOW_H
