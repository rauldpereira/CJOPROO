/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDashboard
{
public:
    QWidget *centralwidget;
    QPushButton *btnExcluir;
    QPushButton *btnEditarCliente;
    QTableWidget *tableWidgetClientes;
    QPushButton *btnLogout;
    QPushButton *btnAdicionarCliente;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminDashboard)
    {
        if (AdminDashboard->objectName().isEmpty())
            AdminDashboard->setObjectName("AdminDashboard");
        AdminDashboard->resize(800, 600);
        centralwidget = new QWidget(AdminDashboard);
        centralwidget->setObjectName("centralwidget");
        btnExcluir = new QPushButton(centralwidget);
        btnExcluir->setObjectName("btnExcluir");
        btnExcluir->setGeometry(QRect(350, 340, 101, 31));
        btnEditarCliente = new QPushButton(centralwidget);
        btnEditarCliente->setObjectName("btnEditarCliente");
        btnEditarCliente->setGeometry(QRect(450, 340, 81, 31));
        tableWidgetClientes = new QTableWidget(centralwidget);
        tableWidgetClientes->setObjectName("tableWidgetClientes");
        tableWidgetClientes->setGeometry(QRect(250, 100, 361, 241));
        btnLogout = new QPushButton(centralwidget);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(589, 397, 101, 31));
        btnAdicionarCliente = new QPushButton(centralwidget);
        btnAdicionarCliente->setObjectName("btnAdicionarCliente");
        btnAdicionarCliente->setGeometry(QRect(250, 340, 101, 31));
        AdminDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        AdminDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminDashboard);
        statusbar->setObjectName("statusbar");
        AdminDashboard->setStatusBar(statusbar);

        retranslateUi(AdminDashboard);

        QMetaObject::connectSlotsByName(AdminDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *AdminDashboard)
    {
        AdminDashboard->setWindowTitle(QCoreApplication::translate("AdminDashboard", "MainWindow", nullptr));
        btnExcluir->setText(QCoreApplication::translate("AdminDashboard", "Excluir Cliente", nullptr));
        btnEditarCliente->setText(QCoreApplication::translate("AdminDashboard", "EditarCliente", nullptr));
        btnLogout->setText(QCoreApplication::translate("AdminDashboard", "Logout", nullptr));
        btnAdicionarCliente->setText(QCoreApplication::translate("AdminDashboard", "Adicionar Cliente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDashboard: public Ui_AdminDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
