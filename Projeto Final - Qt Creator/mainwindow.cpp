#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include "cliente.h"
#include "gerenciadordedados.h"
#include <QCryptographicHash>

MainWindow::MainWindow(QWidget *parent, const QString &clientEmail) :
    QDialog(parent),
    ui(new Ui::MainWindow),
    m_currentClientEmail(clientEmail)
{
    ui->setupUi(this);

    if (!m_currentClientEmail.isEmpty()) {
        this->setWindowTitle("Editar Cliente");
        ui->btnCadastrar->setText("Salvar Alterações");
        carregarDadosDoCliente();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCadastrar_clicked()
{
    QString nome = ui->lineEditNome->text();
    QString email = ui->lineEditEmail->text();
    QString senha = ui->lineEditSenha->text();
    QString confirmaSenha = ui->lineEditConfirmaSenha->text();

    if (nome.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Atenção", "Os campos Nome e Email são obrigatórios.");
        return;
    }

    if (m_currentClientEmail.isEmpty() && (senha.isEmpty() || confirmaSenha.isEmpty())) {
        QMessageBox::warning(this, "Atenção", "Para um novo cadastro, a senha é obrigatória.");
        return;
    }

    if (!senha.isEmpty()) {
        if (senha != confirmaSenha) {
            QMessageBox::critical(this, "Erro", "As senhas não coincidem!");
            return;
        }
        if (senha.length() < 6) {
            QMessageBox::warning(this, "Senha Fraca", "A senha deve ter pelo menos 6 caracteres.");
            return;
        }
    }

    Cliente cliente(nome, email, senha);

    if (!m_currentClientEmail.isEmpty()) {
        GerenciadorDeDados::instancia().atualizarCliente(m_currentClientEmail, cliente);
        QMessageBox::information(this, "Sucesso", "Dados do cliente atualizados!");
        this->close();
    } else {
        GerenciadorDeDados::instancia().adicionarCliente(cliente);
        QMessageBox::information(this, "Sucesso", "Cliente cadastrado com sucesso!");
        this->close();
    }
}

void MainWindow::on_btnVoltar_clicked()
{
    this->close();
}

void MainWindow::carregarDadosDoCliente()
{

    Cliente c = GerenciadorDeDados::instancia().obterClientePorEmail(m_currentClientEmail);

    ui->lineEditNome->setText(c.getNome());
    ui->lineEditEmail->setText(c.getEmail());
    ui->lineEditEmail->setEnabled(false);
}
