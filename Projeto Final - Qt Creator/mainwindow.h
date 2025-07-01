#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr, const QString &clientEmail = "");
    ~MainWindow();

private slots:
    void on_btnCadastrar_clicked();
    void on_btnVoltar_clicked();

private:
    Ui::MainWindow *ui;
    QString m_currentClientEmail;
    void carregarDadosDoCliente();
};

#endif // MAINWINDOW_H
