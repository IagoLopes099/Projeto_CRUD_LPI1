#include "loginpage.h"
#include "ui_loginpage.h"
#include "Equipe.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QSqlDatabase>
#include "cappage.h"

loginPage::loginPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginPage)
{
    ui->setupUi(this);

    QString dir=qApp->applicationDirPath();
    QString banco = dir + "/BdProg1/BdProg1";

    /*INICIO DA INICIALIZAÇÃO DO BANCO DE DADOS*/
    qDebug() << "Drivers disponíveis:" << QSqlDatabase::drivers();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(banco);


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

    BancoDeDados bd(username, password);
    QStringList resposta = bd.VerificarLogin();
    qDebug() << resposta[0];
    qDebug() << resposta[1];

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

