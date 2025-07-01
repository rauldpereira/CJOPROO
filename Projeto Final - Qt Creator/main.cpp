#include "mainwindow.h"
#include "logindialog.h"
#include "admindashboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginDialog loginDialog;
    int loginResult = loginDialog.exec();

    if (loginResult == QDialog::Accepted) {
        AdminDashboard dashboard;
        dashboard.show();

        return a.exec();
    }
    return 0;
}
