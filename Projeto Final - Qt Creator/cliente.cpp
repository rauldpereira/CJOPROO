#include "cliente.h"
#include <QCryptographicHash>

Cliente::Cliente(const QString &nome, const QString &email, const QString &senha)
    : m_nome(nome), m_email(email)
{
    m_hashSenha = QString(QCryptographicHash::hash(senha.toUtf8(), QCryptographicHash::Sha256).toHex());
}

bool Cliente::verificarSenha(const QString &senha) const
{
    QString hashFornecido = QString(QCryptographicHash::hash(senha.toUtf8(), QCryptographicHash::Sha256).toHex());
    return m_hashSenha == hashFornecido;
}

QString Cliente::getNome() const
{
    return m_nome;
}

void Cliente::setNome(const QString &nome)
{
    m_nome = nome;
}

QString Cliente::getEmail() const
{
    return m_email;
}

void Cliente::setEmail(const QString &email)
{
    m_email = email;
}
