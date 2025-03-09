#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QApplication>
#include <QCoreApplication>
#include <QSqlQuery>
#include "editarJanela.h"
#include "Equipe.h"



MainWindow::MainWindow(QWidget *parent, String subequipe_lider)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , subequipeLider(subequipe_lider)
{
    ui->setupUi(this);
    //QString subequipe;
    Lider Membro;
    Membro.ListarMembros(ui->listarMembros, subequipeLider);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CadastrarButton_clicked()
{
    ui->Janelas->setCurrentIndex(1);
}

void MainWindow::on_homeButton_clicked()
{
    ui->Janelas->setCurrentIndex(0);
}



void MainWindow::on_CadastrarInputButton_clicked()
{

    String nome = ui->NomeEditLine->text();
    String CPF = ui->CPFEditLine->text();

    if(nome.isEmpty() || CPF.isEmpty()){
        QMessageBox::critical(this, "Erro", "Preencha todos os campos obrigatórios!");
        return;
    }

    String aniversario = ui->aniversarioCadastro->text();
    String email = ui->EmailEditLine->text();
    String telefone = ui->telefoneEditLine->text();


    String resultadoCb = "";
    String genero = ui->GeneroComboBox->currentText();
    if(genero == "Masculino"){
        genero = "M";
    }else if(genero == "Feminino"){
        genero = "F";
    }else{
        genero = "O";
    }


    if(ui->AdminCb->isChecked()){
        resultadoCb+="Admin";
        ui->AdminCb->setAutoExclusive(false);
        ui->AdminCb->setChecked(false);
        ui->AdminCb->setAutoExclusive(true);

    }else if(ui->PowertrainCb->isChecked()){
        resultadoCb+="powertrain";
        ui->PowertrainCb->setAutoExclusive(false);
        ui->PowertrainCb->setChecked(false);
        ui->PowertrainCb->setAutoExclusive(true);

    }else if(ui->DinamicaCb->isChecked()){
        resultadoCb+="dinamica veicular";
        ui->DinamicaCb->setAutoExclusive(false);
        ui->DinamicaCb->setChecked(false);
        ui->DinamicaCb->setAutoExclusive(true);

    }else if(ui->DrivetrainCb->isChecked()){
        resultadoCb+="drivetrain";
        ui->DrivetrainCb->setAutoExclusive(false);
        ui->DrivetrainCb->setChecked(false);
        ui->DrivetrainCb->setAutoExclusive(true);

    }else if(ui->EletricaCb->isChecked()){
        resultadoCb+="elétrica";
        ui->EletricaCb->setAutoExclusive(false);
        ui->EletricaCb->setChecked(false);
        ui->EletricaCb->setAutoExclusive(true);

    }



    Lider Membro(nome, CPF,resultadoCb, genero, aniversario, email, telefone,20);
    if(Membro.CadastrarMembro(Membro)){
        QMessageBox::information(this,"Dados Digitados:","Usuário cadastrado com sucesso!");
        ui->NomeEditLine->clear();
        ui->CPFEditLine->clear();
    }else{
        QMessageBox::critical(this, "Erro no cadastro","Membro não cadastrado!");
    }
}


void MainWindow::on_DeletarButtonHP_clicked()
{
    Lider lider;
    int linha = ui->listarMembros->currentRow();
    if(linha < 0){
        return;
    }
    String id = ui->listarMembros->item(linha,0)->text();

    if(lider.DeletarMembro(id)){
        QMessageBox::StandardButton resposta = QMessageBox::question(this, "","Tem certeza que deseja excluir?", QMessageBox::Yes|QMessageBox::Cancel);
        if(resposta == QMessageBox::Yes){
            QMessageBox::information(this, "","Usuário deletado");
            ui->listarMembros->removeRow(linha);
        }
    }else{
        QMessageBox::warning(this,"Erro","Não foi possivel deletar o usuário");
    }

}


void MainWindow::on_AtualizarButtonHP_clicked()
{
    Lider Membro;
    Membro.ListarMembros(ui->listarMembros, subequipeLider);
}


void MainWindow::on_BuscarButtonHP_clicked()
{
    String nome = ui->NomeBuscarHP->text();

    nome = nome.toLower();

    Lider Membro;

    Membro.BuscarMembro(nome,ui->listarMembros, subequipeLider);
    /*
    if(!Membro.BuscarMembro(nome,ui->listarMembros)){
        QMessageBox::warning(this,"Erro", "Algo inesperado ocorreu!");
    }*/
}


void MainWindow::on_EditarButtonHP_clicked()
{

    int linha = ui->listarMembros->currentRow();
    if(linha < 0){
        return;
    }

    String id = ui->listarMembros->item(linha,0)->text();

    BuscarJanela editarJanela(this, id.toInt());
    editarJanela.exec();
}

