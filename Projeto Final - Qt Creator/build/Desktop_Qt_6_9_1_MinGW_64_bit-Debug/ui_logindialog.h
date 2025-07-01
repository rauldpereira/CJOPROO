/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditUsuario;
    QLabel *label_2;
    QLineEdit *lineEditSenha;
    QPushButton *btnLogin;
    QPushButton *btnCancelar;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(400, 300);
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 60, 168, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEditUsuario = new QLineEdit(layoutWidget);
        lineEditUsuario->setObjectName("lineEditUsuario");

        verticalLayout->addWidget(lineEditUsuario);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEditSenha = new QLineEdit(layoutWidget);
        lineEditSenha->setObjectName("lineEditSenha");

        verticalLayout->addWidget(lineEditSenha);

        btnLogin = new QPushButton(layoutWidget);
        btnLogin->setObjectName("btnLogin");

        verticalLayout->addWidget(btnLogin);

        btnCancelar = new QPushButton(layoutWidget);
        btnCancelar->setObjectName("btnCancelar");

        verticalLayout->addWidget(btnCancelar);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        lineEditUsuario->setText(QString());
        label_2->setText(QCoreApplication::translate("LoginDialog", "Senha", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        btnCancelar->setText(QCoreApplication::translate("LoginDialog", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
