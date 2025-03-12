//#include "mainwindow.h"
#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QApplication>
//#include "editarJanela.h"
#include "loginpage.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    loginPage login;

    login.show();

    return a.exec();
}
