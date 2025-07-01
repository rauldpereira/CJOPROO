#include "gerenciadordedados.h"
GerenciadorDeDados& GerenciadorDeDados::instancia()
{
    static GerenciadorDeDados instance;
    return instance;
}

GerenciadorDeDados::GerenciadorDeDados()
{

}

Cliente GerenciadorDeDados::obterClientePorEmail(const QString &email) const
{
    for (const auto &cliente : m_listaDeClientes) {
        if (cliente.getEmail() == email) {
            return cliente;
        }
    }
    return Cliente("", "", "");
}

void GerenciadorDeDados::atualizarCliente(const QString &emailOriginal, const Cliente &clienteAtualizado)
{
    for (auto &cliente : m_listaDeClientes) {
        if (cliente.getEmail() == emailOriginal) {
            cliente = clienteAtualizado;
            return;
        }
    }
}

void GerenciadorDeDados::adicionarCliente(const Cliente &cliente)
{
    m_listaDeClientes.append(cliente);
}

void GerenciadorDeDados::removerCliente(const QString &email)
{
    m_listaDeClientes.removeIf([&](const Cliente& cliente) {
        return cliente.getEmail() == email;
    });
}

QList<Cliente> GerenciadorDeDados::obterTodosOsClientes() const
{
    return m_listaDeClientes;
}
