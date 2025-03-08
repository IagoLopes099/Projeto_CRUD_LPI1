#include "editarJanela.h"
#include "ui_editarJanela.h"
#include <QSqlQuery>
#include <QMessageBox>
#include "mainwindow.h"

using String = QString;

static int id;

BuscarJanela::BuscarJanela(QWidget *parent, int id_Membro)
    : QDialog(parent)
    , ui(new Ui::BuscarJanela)
{
    ui->setupUi(this);
    id = id_Membro;

    QSqlQuery query;
    query.prepare("select * from tb_usuarios where id_usuarios = " + QString::number(id_Membro));
    if(query.exec()){
        query.first();
        QString nome = query.value(1).toString();

        if(nome == "M"){
            ui->generoEditando->setCurrentIndex(0);
        }else if(nome == "F"){
            ui->generoEditando->setCurrentIndex(1);
        }else{
            ui->generoEditando->setCurrentIndex(2);
        }

        ui->NomeEditando->setText(query.value(4).toString());
        ui->cpfEditando->setText(query.value(3).toString());
        ui->EmailEdit->setText(query.value(6).toString());
        ui->telefoneEdit->setText(query.value(7).toString());
        ui->dataEditando->setText(query.value(2).toString());

        if(query.value(5).toString() == "admin"){
            ui->AdminCbEdit->setAutoExclusive(false);
            ui->AdminCbEdit->setChecked(true);
            ui->AdminCbEdit->setAutoExclusive(true);

        }else if(query.value(5).toString() == "powertrain"){
            ui->PowertrainCbEdit->setAutoExclusive(false);
            ui->PowertrainCbEdit->setChecked(true);
            ui->PowertrainCbEdit->setAutoExclusive(true);

        }else if(query.value(5).toString() == "dinamica veicular"){

            ui->DinamicaCbEdit->setAutoExclusive(false);
            ui->DinamicaCbEdit->setChecked(true);
            ui->DinamicaCbEdit->setAutoExclusive(true);

        }else if(query.value(5).toString() == "drivetrain"){

            ui->DrivetrainCbEdit->setAutoExclusive(false);
            ui->DrivetrainCbEdit->setChecked(true);
            ui->DrivetrainCbEdit->setAutoExclusive(true);

        }else if(query.value(5).toString() == "elétrica"){

            ui->EletricaCbEdit->setAutoExclusive(false);
            ui->EletricaCbEdit->setChecked(true);
            ui->EletricaCbEdit->setAutoExclusive(true);

        }



    }else{
        QMessageBox::warning(this, "Erro","Algo inesperado aconteceu!");
    }


}

BuscarJanela::~BuscarJanela()
{
    delete ui;
}

void BuscarJanela::on_EditarButton_clicked()
{
    qDebug() << id;

    String nome = ui->NomeEditando->text().toLower();
    String CPF = ui->cpfEditando->text();

    if(nome.isEmpty() || CPF.isEmpty()){
        QMessageBox::critical(this, "Erro", "Preencha todos os campos obrigatórios!");
        return;
    }

    String aniversario = ui->dataEditando->text();
    String email = ui->EmailEdit->text();
    String telefone = ui->telefoneEdit->text();




    String genero = ui->generoEditando->currentText();
    if(genero == "Masculino"){
        genero = "M";
    }else if(genero == "Feminino"){
        genero = "F";
    }else{
        genero = "O";
    }


    String subequipe;

    if (ui->AdminCbEdit->isChecked()) subequipe = "admin";
    else if (ui->PowertrainCbEdit->isChecked()) subequipe = "powertrain";
    else if (ui->DinamicaCbEdit->isChecked()) subequipe = "dinamica veicular";
    else if (ui->DrivetrainCbEdit->isChecked()) subequipe = "drivetrain";
    else if (ui->EletricaCbEdit->isChecked()) subequipe = "elétrica";




    Lider Membro(nome, CPF, subequipe, genero, aniversario, email, telefone,20);



    if(!Membro.EditarMembro(QString::number(id), Membro)){
        QMessageBox::warning(this,"Erro", "Algo inesperado ocorreu na edição!");

    }else{
        QMessageBox::information(this,"Atualizado","Usuário atualizado com sucesso!");
    }
}


void BuscarJanela::on_cancelarEditButton_clicked()
{
    this->close();
}

