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
    //MainWindow w;
    //BuscarJanela e;
    loginPage login;

    login.show();
    //e.show();
    //w.show();

    return a.exec();
}
