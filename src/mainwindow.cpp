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


MainWindow::MainWindow(QWidget *parent, String subequipelider)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , subequipeLider(subequipelider)
    , banco()
    , lider(subequipelider)
{
    ui->setupUi(this);

    banco.AbrirBanco();
    banco.ListarMembros(subequipeLider);

    lider.ListarMembros(ui->listarMembros, &banco);


}

void SelecionarButton(QRadioButton* button,QRadioButton* button2,QRadioButton* button3,QRadioButton* button4,QRadioButton* button5){
    button->setChecked(true);
    button->setEnabled(false);
    button2->setEnabled(false);
    button3->setEnabled(false);
    button4->setEnabled(false);
    button5->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CadastrarButton_clicked()
{
    ui->Janelas->setCurrentIndex(1);

    if (subequipeLider == "powertrain") {
        SelecionarButton(ui->PowertrainCb, ui->AdminCb, ui->DrivetrainCb, ui->EletricaCb ,ui->DinamicaCb);

    }else if(subequipeLider == "admin"){
        SelecionarButton(ui->AdminCb,ui->PowertrainCb,ui->DrivetrainCb,ui->EletricaCb,ui->DinamicaCb);

    }else if(subequipeLider == "dinamica veicular"){
        SelecionarButton(ui->DinamicaCb,ui->AdminCb,ui->DrivetrainCb,ui->EletricaCb,ui->PowertrainCb);

    }else if(subequipeLider == "drivetrain"){
        SelecionarButton(ui->DrivetrainCb,ui->AdminCb,ui->PowertrainCb,ui->EletricaCb,ui->DinamicaCb);

    }else if(subequipeLider == "elétrica"){
         SelecionarButton(ui->EletricaCb,ui->AdminCb,ui->PowertrainCb,ui->DrivetrainCb,ui->DinamicaCb);

    }
}

void MainWindow::on_homeButton_clicked()
{
    ui->Janelas->setCurrentIndex(0);
}



void MainWindow::on_CadastrarInputButton_clicked()
{

    String nome = ui->NomeEditLineCadastro->text();
    String CPF = ui->CPFEditLine->text();
    String aniversario = ui->aniversarioCadastro->text();
    String email = ui->EmailEditLine->text();
    String telefone = ui->telefoneEditLine->text();
    String username = ui->UsuarioEditLineCadastro->text();
    String senha =  ui->SenhaEditLineCadastro->text();
    std::vector<String> campos = {nome, CPF, aniversario, email, telefone, username, senha};


    /*VERIFICAÇÃO DE CAMPOS VAZIOS*/
    for(const auto& campo : campos){
        if(campo.isEmpty() || CPF == "..-"){
            QMessageBox::critical(this, "Erro", "Preencha todos os campos obrigatórios!");
            return;
        }
    }

    /*VERIFICAÇÃO DE DUPLICATAS DE CPF*/
    for(int i = 0; i <banco.getMembros().size() ; i++){
        if(banco.getMembros()[i].getCpf() == CPF){
            QMessageBox::critical(this, "Erro", "CPF já existente no momento!");
            return;
        }
    }

    /*VERIFICAÇÃO DO DOMINIO DO E-MAIL*/
    QStringList dominios = {"@gmail.com", "@outlook.com", "@yahoo.com"};
    bool resposta;

    for(int i = 0; i < dominios.size(); i ++){

        if(email.contains(dominios[i])) {
            resposta = true;
            break;
        }
        resposta = false;
    }

    if(!resposta){
        QMessageBox::warning(this,"Alerta","Dominio inválido.");
        return;
    }


    String genero = ui->GeneroComboBox->currentText();
    if(genero == "Masculino"){
        genero = "M";
    }else if(genero == "Feminino"){
        genero = "F";
    }else{
        genero = "O";
    }


    User user(username,senha);

    Membro membro(nome, CPF,subequipeLider, genero, aniversario, email, telefone,"membro",lider.getLastId(&banco) + 1, user);

    Lider lider(membro);

    if(lider.CadastrarMembro(&banco)){
        QMessageBox::information(this,"","Usuário cadastrado com sucesso!");
        banco.getReferenciaMembro().push_back(membro);       /*ADICIONADO AO VETOR*/

        ui->NomeEditLineCadastro->clear();
        ui->CPFEditLine->clear();
        ui->telefoneEditLine->clear();
        ui->EmailEditLine->clear();
        ui->UsuarioEditLineCadastro->clear();
        ui->SenhaEditLineCadastro->clear();
    }else{
        QMessageBox::critical(this, "Erro no cadastro","Membro não cadastrado!");
    }


}

void MainWindow::on_DeletarButtonHP_clicked()
{
    int linha = ui->listarMembros->currentRow();
    if(linha < 0){
        return;
    }

    String id = ui->listarMembros->item(linha,0)->text();

    if(lider.DeletarMembroVector(id, &banco)){
        QMessageBox::StandardButton resposta = QMessageBox::question(this, "","Tem certeza que deseja excluir?", QMessageBox::Yes|QMessageBox::Cancel);
        if(resposta == QMessageBox::Yes){

            qDebug() << "deletado do vector!";

            /*DELETANDO DO BANCO DE DADOS*/
            if(lider.DeletarMembro(id, &banco)){
                QMessageBox::information(this, "","Usuário deletado");
                ui->listarMembros->removeRow(linha);
            }else{
                QMessageBox::warning(this,"Erro","Não foi possivel deletar o usuário do banco de dados");
            }
        }
    }else{
        QMessageBox::warning(this,"Erro","Não foi possivel deletar o usuário no VECTOR");
    }
}


void MainWindow::on_AtualizarButtonHP_clicked()
{
    //banco.ListarMembros(subequipeLider);
    lider.ListarMembros(ui->listarMembros, &banco);

}


void MainWindow::on_BuscarButtonHP_clicked()
{
    String nome = ui->NomeBuscarHP->text();

    nome = nome.toLower();

    lider.BuscarMembro(nome,ui->listarMembros, banco.getMembros());

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

