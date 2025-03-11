#include "loginpage.h"
#include "ui_loginpage.h"
#include "Equipe.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QSqlDatabase>
#include "cappage.h"


loginPage::loginPage(QWidget *parent, BancoDeDados banco)
    : QDialog(parent)
    , ui(new Ui::loginPage)
    , banco(banco)
{
    ui->setupUi(this);

    banco.AbrirBanco();

}

loginPage::~loginPage()
{
    delete ui;
}

void loginPage::on_MostrarPasswordButton_clicked()
{
    if(ui->PasswordEditLine->echoMode() == QLineEdit::Password){
        ui->PasswordEditLine->setEchoMode(QLineEdit::Normal);
        ui->MostrarPasswordButton->setText("Ocultar");
    }else{
        ui->PasswordEditLine->setEchoMode(QLineEdit::Password);
        ui->MostrarPasswordButton->setText("Mostrar");
    }
}


void loginPage::on_LoginButton_clicked()
{   
    QString username = ui->UsernameEditLine->text().toLower();
    QString password = ui->PasswordEditLine->text();

    if(username.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this, "Erro ao logar","Usuário ou senha inválidos!");
        return;
    }

    QStringList resposta = banco.VerificarLogin(username, password);

    if(resposta[0] == "lider"){
        this->close();
        MainWindow *main = new MainWindow(nullptr,resposta[1]);
        main->show();


    }else if(resposta[0] == "capitão"){
        this->close();
        CapPage paginaCapitao;
        paginaCapitao.setModal(true);
        paginaCapitao.exec();

    }else if(resposta[0] == "membro"){
        QMessageBox::information(this,"Deu certo","Entrou no Membro");

    }else if(resposta[0] == "Error 1"){
        QMessageBox::critical(this,"Erro","Banco de dados não foi aberto!");

    }else if(resposta[0] == "Error 2"){
        QMessageBox::warning(this, "Erro ao logar","Usuário ou senha não encontrados!");

    }else if(resposta[0] == "Error 3"){
        QMessageBox::critical(this,"Erro","Ops, algo de inesperado ocorreu!");

    }
}
