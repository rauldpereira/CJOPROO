// admindashboard.h
#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QMainWindow>

namespace Ui {
class AdminDashboard;
}

class AdminDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminDashboard(QWidget *parent = nullptr);
    ~AdminDashboard();

private slots:
    void on_btnAtualizar_clicked();
    void on_btnExcluir_clicked();
    void on_btnLogout_clicked();
    void on_btnAdicionarCliente_clicked();

private:
    Ui::AdminDashboard *ui;
    void popularTabela();
};

#endif // ADMINDASHBOARD_H
