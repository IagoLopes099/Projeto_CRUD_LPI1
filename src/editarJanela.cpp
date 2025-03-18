#include "editarJanela.h"
#include "ui_editarJanela.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "mainwindow.h"

using String = QString;

static int id;

BuscarJanela::BuscarJanela(QWidget *parent, int id_Membro)
    : QDialog(parent)
    , ui(new Ui::BuscarJanela)
    , id(id_Membro)
{
    ui->setupUi(this);

    id = id_Membro;

    QSqlQuery query;
    query.prepare("select * from tb_usuarios where id_usuarios =" + QString::number(id_Membro));


    if(query.exec()){

        query.first();
        QString genero = query.value(4).toString();

        if(genero == "M"){
            ui->generoEditando->setCurrentIndex(0);
        }else if(genero == "F"){
            ui->generoEditando->setCurrentIndex(1);
        }else{
            ui->generoEditando->setCurrentIndex(2);
        }

        ui->NomeEditando->setText(query.value(1).toString());
        ui->cpfEditando->setText(query.value(10).toString());
        ui->EmailEdit->setText(query.value(9).toString());
        ui->telefoneEdit->setText(query.value(8).toString());
        ui->dataEditando->setText(query.value(5).toString());

        if(query.value(6).toString() == "admin"){
            ui->AdminCbEdit->setAutoExclusive(false);
            ui->AdminCbEdit->setChecked(true);
            ui->AdminCbEdit->setAutoExclusive(true);

        }else if(query.value(6).toString() == "powertrain"){
            ui->PowertrainCbEdit->setAutoExclusive(false);
            ui->PowertrainCbEdit->setChecked(true);
            ui->PowertrainCbEdit->setAutoExclusive(true);

        }else if(query.value(6).toString() == "dinamica veicular"){

            ui->DinamicaCbEdit->setAutoExclusive(false);
            ui->DinamicaCbEdit->setChecked(true);
            ui->DinamicaCbEdit->setAutoExclusive(true);

        }else if(query.value(6).toString() == "drivetrain"){

            ui->DrivetrainCbEdit->setAutoExclusive(false);
            ui->DrivetrainCbEdit->setChecked(true);
            ui->DrivetrainCbEdit->setAutoExclusive(true);

        }else if(query.value(6).toString() == "elétrica"){

            ui->EletricaCbEdit->setAutoExclusive(false);
            ui->EletricaCbEdit->setChecked(true);
            ui->EletricaCbEdit->setAutoExclusive(true);

        }



    }else{
        qDebug() << "erro3"<< query.lastError().text();
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

    Lider Lider(nome, CPF, subequipe, genero, aniversario, email, telefone,"lider",id,20);


    if(!Lider.EditarMembro(QString::number(id), Lider)){
        QMessageBox::warning(this,"Erro", "Algo inesperado ocorreu na edição!");

    }else{
        QMessageBox::information(this,"Atualizado","Usuário atualizado com sucesso!");
    }
}


void BuscarJanela::on_cancelarEditButton_clicked()
{
    this->close();
}

