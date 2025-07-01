#ifndef GERENCIADORDEDADOS_H
#define GERENCIADORDEDADOS_H

#include "cliente.h"
#include <QList>
#include <QObject>

class GerenciadorDeDados
{
public:
    static GerenciadorDeDados& instancia();

    void adicionarCliente(const Cliente &cliente);
    void removerCliente(const QString &email);
    QList<Cliente> obterTodosOsClientes() const;
    Cliente obterClientePorEmail(const QString &email) const;
    void atualizarCliente(const QString &emailOriginal, const Cliente &clienteAtualizado);

private:
    GerenciadorDeDados();
    GerenciadorDeDados(const GerenciadorDeDados&) = delete;
    void operator=(const GerenciadorDeDados&) = delete;

    QList<Cliente> m_listaDeClientes;
};

#endif // GERENCIADORDEDADOS_H
