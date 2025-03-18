#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include "mainwindow.h"
#include <QSqlDatabase>

namespace Ui {
class loginPage;
}

class loginPage : public QDialog
{
    Q_OBJECT

public:
    explicit loginPage(QWidget *parent = nullptr, BancoDeDados banco = BancoDeDados());
    ~loginPage();

private slots:

    void on_MostrarPasswordButton_clicked();

    void on_LoginButton_clicked();

private:
    Ui::loginPage *ui;
    MainWindow *liderPage;
    BancoDeDados banco;
};

#endif // LOGINPAGE_H
