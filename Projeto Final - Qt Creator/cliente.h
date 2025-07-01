// cliente.h
#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>

class Cliente
{
public:
    Cliente(const QString &nome, const QString &email, const QString &senha);

    QString getNome() const;
    void setNome(const QString &nome);

    QString getEmail() const;
    void setEmail(const QString &email);
    bool verificarSenha(const QString &senha) const;


private:
    QString m_nome;
    QString m_email;
    QString m_hashSenha;
};

#endif // CLIENTE_H
