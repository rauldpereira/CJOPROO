// logindialog.cpp
#include "logindialog.h"
#include "ui_logindialog.h"
#include "admindashboard.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->lineEditSenha->setEchoMode(QLineEdit::Password);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_btnLogin_clicked()
{
    QString usuario = ui->lineEditUsuario->text();
    QString senha = ui->lineEditSenha->text();

    if (usuario == "admin" && senha == "admin") {
        QMessageBox::information(this, "Login", "Login bem-sucedido!");
        accept();
    } else {
        QMessageBox::warning(this, "Login", "Usuário ou senha inválidos.");
    }
}

void LoginDialog::on_btnCancelar_clicked()
{
    reject();
}
