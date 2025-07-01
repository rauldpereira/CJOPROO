// admindashboard.cpp
#include "admindashboard.h"
#include "ui_admindashboard.h"
#include "gerenciadordedados.h"
#include <QMessageBox>
#include <QHeaderView>
#include <QTableWidgetItem>
#include <QCoreApplication>
#include <QProcess>
#include "mainwindow.h"

AdminDashboard::AdminDashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminDashboard)
{
    ui->setupUi(this);

    ui->tableWidgetClientes->setColumnCount(2);
    ui->tableWidgetClientes->setHorizontalHeaderLabels({"Nome", "Email"});
    ui->tableWidgetClientes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    popularTabela();
}

void AdminDashboard::on_btnLogout_clicked()
{
    qApp->exit(0);
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

AdminDashboard::~AdminDashboard()
{
    delete ui;
}

void AdminDashboard::popularTabela()
{
    ui->tableWidgetClientes->setRowCount(0);

    QList<Cliente> clientes = GerenciadorDeDados::instancia().obterTodosOsClientes();

    for (const auto &cliente : clientes) {
        int linhaAtual = ui->tableWidgetClientes->rowCount();
        ui->tableWidgetClientes->insertRow(linhaAtual);

        ui->tableWidgetClientes->setItem(linhaAtual, 0, new QTableWidgetItem(cliente.getNome()));
        ui->tableWidgetClientes->setItem(linhaAtual, 1, new QTableWidgetItem(cliente.getEmail()));
    }
}

void AdminDashboard::on_btnAtualizar_clicked()
{
    popularTabela();
}

void AdminDashboard::on_btnExcluir_clicked()
{
    int linhaSelecionada = ui->tableWidgetClientes->currentRow();

    if (linhaSelecionada < 0) {
        QMessageBox::warning(this, "Atenção", "Por favor, selecione um cliente para excluir.");
        return;
    }

    QString email = ui->tableWidgetClientes->item(linhaSelecionada, 1)->text();

    QMessageBox::StandardButton resposta = QMessageBox::question(this, "Confirmar Exclusão",
                                                                 "Tem certeza que deseja excluir o cliente com o email: " + email + "?",
                                                                 QMessageBox::Yes | QMessageBox::No);

    if (resposta == QMessageBox::Yes) {
        GerenciadorDeDados::instancia().removerCliente(email);
        popularTabela();
        QMessageBox::information(this, "Sucesso", "Cliente excluído.");
    }


}
void AdminDashboard::on_btnAdicionarCliente_clicked()
{
    MainWindow janelaCadastro(this);
    janelaCadastro.exec();

    popularTabela();
}
