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
    explicit loginPage(QWidget *parent = nullptr);
    ~loginPage();

private slots:
    void on_label_linkActivated(const QString &link);

    void on_MostrarPasswordButton_clicked();

    void on_LoginButton_clicked();

private:
    Ui::loginPage *ui;
    MainWindow *liderPage;
};

#endif // LOGINPAGE_H
