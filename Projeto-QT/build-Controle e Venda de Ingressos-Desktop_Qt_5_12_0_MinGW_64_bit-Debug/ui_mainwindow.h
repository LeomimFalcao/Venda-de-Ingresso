/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionCarregar;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Inserir;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_nameInput;
    QComboBox *IngressoBox;
    QPushButton *btn_insert;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tbl_data;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_NameSort;
    QPushButton *btn_NumberSort;
    QHBoxLayout *horizontalLayout_3;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_all;
    QLabel *lbl_all;
    QGroupBox *gb_high;
    QLabel *lbl_high;
    QGroupBox *gb_low;
    QLabel *lbl_low;
    QLineEdit *descri1;
    QLineEdit *descri2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_most_selled;
    QLabel *lbl_few_selled;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(514, 508);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(100, 100));
        MainWindow->setMaximumSize(QSize(1000, 1000));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 511, 451));
        Inserir = new QWidget();
        Inserir->setObjectName(QString::fromUtf8("Inserir"));
        verticalLayout = new QVBoxLayout(Inserir);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Inserir);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        le_nameInput = new QLineEdit(Inserir);
        le_nameInput->setObjectName(QString::fromUtf8("le_nameInput"));

        horizontalLayout->addWidget(le_nameInput);


        verticalLayout->addLayout(horizontalLayout);

        IngressoBox = new QComboBox(Inserir);
        IngressoBox->addItem(QString());
        IngressoBox->addItem(QString());
        IngressoBox->addItem(QString());
        IngressoBox->addItem(QString());
        IngressoBox->setObjectName(QString::fromUtf8("IngressoBox"));

        verticalLayout->addWidget(IngressoBox);

        btn_insert = new QPushButton(Inserir);
        btn_insert->setObjectName(QString::fromUtf8("btn_insert"));
        btn_insert->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btn_insert);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tbl_data = new QTableWidget(Inserir);
        if (tbl_data->columnCount() < 3)
            tbl_data->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbl_data->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tbl_data->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbl_data->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tbl_data->setObjectName(QString::fromUtf8("tbl_data"));
        tbl_data->setMinimumSize(QSize(487, 0));
        tbl_data->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        tbl_data->setAutoFillBackground(false);
        tbl_data->setStyleSheet(QString::fromUtf8(""));
        tbl_data->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tbl_data->setEditTriggers(QAbstractItemView::DoubleClicked);
        tbl_data->setSelectionMode(QAbstractItemView::SingleSelection);
        tbl_data->setGridStyle(Qt::SolidLine);
        tbl_data->horizontalHeader()->setDefaultSectionSize(100);
        tbl_data->horizontalHeader()->setStretchLastSection(true);
        tbl_data->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tbl_data->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(tbl_data);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_NameSort = new QPushButton(Inserir);
        btn_NameSort->setObjectName(QString::fromUtf8("btn_NameSort"));

        horizontalLayout_4->addWidget(btn_NameSort);

        btn_NumberSort = new QPushButton(Inserir);
        btn_NumberSort->setObjectName(QString::fromUtf8("btn_NumberSort"));

        horizontalLayout_4->addWidget(btn_NumberSort);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        tabWidget->addTab(Inserir, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 80, 461, 341));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gb_all = new QGroupBox(layoutWidget);
        gb_all->setObjectName(QString::fromUtf8("gb_all"));
        lbl_all = new QLabel(gb_all);
        lbl_all->setObjectName(QString::fromUtf8("lbl_all"));
        lbl_all->setGeometry(QRect(10, 20, 441, 81));
        QFont font1;
        font1.setPointSize(24);
        lbl_all->setFont(font1);
        lbl_all->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(gb_all);

        gb_high = new QGroupBox(layoutWidget);
        gb_high->setObjectName(QString::fromUtf8("gb_high"));
        lbl_high = new QLabel(gb_high);
        lbl_high->setObjectName(QString::fromUtf8("lbl_high"));
        lbl_high->setGeometry(QRect(10, 20, 441, 71));
        lbl_high->setFont(font1);
        lbl_high->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(gb_high);

        gb_low = new QGroupBox(layoutWidget);
        gb_low->setObjectName(QString::fromUtf8("gb_low"));
        lbl_low = new QLabel(gb_low);
        lbl_low->setObjectName(QString::fromUtf8("lbl_low"));
        lbl_low->setGeometry(QRect(10, 20, 441, 81));
        lbl_low->setFont(font1);
        lbl_low->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(gb_low);

        descri1 = new QLineEdit(tab);
        descri1->setObjectName(QString::fromUtf8("descri1"));
        descri1->setGeometry(QRect(20, 10, 171, 20));
        descri2 = new QLineEdit(tab);
        descri2->setObjectName(QString::fromUtf8("descri2"));
        descri2->setGeometry(QRect(20, 40, 171, 20));
        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(206, 11, 271, 51));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_most_selled = new QLabel(layoutWidget1);
        lbl_most_selled->setObjectName(QString::fromUtf8("lbl_most_selled"));

        verticalLayout_3->addWidget(lbl_most_selled);

        lbl_few_selled = new QLabel(layoutWidget1);
        lbl_few_selled->setObjectName(QString::fromUtf8("lbl_few_selled"));

        verticalLayout_3->addWidget(lbl_few_selled);

        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 514, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionCarregar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Venda e Controle de Ingressos", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionCarregar->setText(QApplication::translate("MainWindow", "Carregar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCarregar->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        IngressoBox->setItemText(0, QApplication::translate("MainWindow", "INTEIRA PISTA", nullptr));
        IngressoBox->setItemText(1, QApplication::translate("MainWindow", "MEIA PISTA", nullptr));
        IngressoBox->setItemText(2, QApplication::translate("MainWindow", "INTEIRA FRONT", nullptr));
        IngressoBox->setItemText(3, QApplication::translate("MainWindow", "MEIA FRONT", nullptr));

        btn_insert->setText(QApplication::translate("MainWindow", "Inserir", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tbl_data->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Tipo do Ingresso", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tbl_data->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "N\302\260 do Ingresso", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tbl_data->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Nome do Comprador", nullptr));
        btn_NameSort->setText(QApplication::translate("MainWindow", "Ordenar por Nome", nullptr));
        btn_NumberSort->setText(QApplication::translate("MainWindow", "Ordenar por N\303\272mero do Ingresso", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Inserir), QApplication::translate("MainWindow", "Inserir", nullptr));
        gb_all->setTitle(QApplication::translate("MainWindow", "Porcentagem de Ingresso Vendidos no Total", nullptr));
        lbl_all->setText(QString());
        gb_high->setTitle(QApplication::translate("MainWindow", "Porcentagem da Categoria Mais Vendida", nullptr));
        lbl_high->setText(QString());
        gb_low->setTitle(QApplication::translate("MainWindow", "Porcentagem da Categoria Menos Vendida", nullptr));
        lbl_low->setText(QString());
        descri1->setText(QApplication::translate("MainWindow", "Tipo de Ingresso Mais Vendido:", nullptr));
        descri2->setText(QApplication::translate("MainWindow", "Tipo de Ingresso Menos Vendido:", nullptr));
        lbl_most_selled->setText(QApplication::translate("MainWindow", "N\303\243o Foi Vendido Nenhum Ingresso Ainda", nullptr));
        lbl_few_selled->setText(QApplication::translate("MainWindow", "N\303\243o Foi Vendido Nenhum Ingresso Ainda", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Estat\303\255sticas", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
