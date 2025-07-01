/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditNome;
    QLabel *label_2;
    QLineEdit *lineEditEmail;
    QLabel *label_3;
    QLineEdit *lineEditSenha;
    QLabel *label_4;
    QLineEdit *lineEditConfirmaSenha;
    QPushButton *btnCadastrar;
    QPushButton *btnVoltar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setGeometry(QRect(230, 150, 351, 281));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 21, 161, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName("lineEditNome");

        verticalLayout->addWidget(lineEditNome);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout->addWidget(lineEditEmail);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEditSenha = new QLineEdit(layoutWidget);
        lineEditSenha->setObjectName("lineEditSenha");
        lineEditSenha->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditSenha);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        lineEditConfirmaSenha = new QLineEdit(layoutWidget);
        lineEditConfirmaSenha->setObjectName("lineEditConfirmaSenha");
        lineEditConfirmaSenha->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEditConfirmaSenha);

        btnCadastrar = new QPushButton(layoutWidget);
        btnCadastrar->setObjectName("btnCadastrar");

        verticalLayout->addWidget(btnCadastrar);

        btnVoltar = new QPushButton(centralwidget);
        btnVoltar->setObjectName("btnVoltar");
        btnVoltar->setGeometry(QRect(270, 250, 75, 24));
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 21));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        lineEditNome->setText(QString());
        lineEditNome->setPlaceholderText(QCoreApplication::translate("MainWindow", "digite seu nome", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        lineEditEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "email@email.com", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Senha", nullptr));
        lineEditSenha->setPlaceholderText(QCoreApplication::translate("MainWindow", "Digite sua senha", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Confirmar Senha", nullptr));
        lineEditConfirmaSenha->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirme sua Senha", nullptr));
        btnCadastrar->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        btnVoltar->setText(QCoreApplication::translate("MainWindow", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
