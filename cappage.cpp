#include "cappage.h"
#include "ui_cappage.h"

#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QApplication>
#include <QCoreApplication>
#include <QSqlQuery>
#include "Equipe.h"
#include <QDate>

using namespace std::chrono;

CapPage::CapPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CapPage)
{
    ui->setupUi(this);

    Capitao capitao;
    capitao.ListarMembrosCap(ui->listarMembrosCP);
}

CapPage::~CapPage()
{
    delete ui;
}




void CapPage::on_BuscarButtonCP_clicked()
{
    QString nome = ui->NomeBuscarCP->text().toLower();

    Capitao cap;

    cap.BuscarMembro(nome, ui->listarMembrosCP, "");

}


void CapPage::on_AtualizarButtonCP_clicked()
{
    Capitao capitao;
    capitao.ListarMembrosCap(ui->listarMembrosCP);
}


void CapPage::on_DeletarButtonCP_clicked()
{
    int linha = ui->listarMembrosCP->currentRow();
    QString nome = ui->listarMembrosCP->item(linha,1)->text();
    QString id = ui->listarMembrosCP->item(linha,0)->text();

    QDate dataAtual = QDate::currentDate();

    QString dataString = dataAtual.toString("dd/MM/yyyy");


    if(linha < 0){
        return;
    }

    Capitao capitao;

    QMessageBox::StandardButton resposta = QMessageBox::question(this,"","Deseja promover (yes )ou rebaixar (no)?",QMessageBox::Yes|QMessageBox::No);
    if(resposta == QMessageBox::Yes){

        if(capitao.PromoverLider(nome, dataString, id)){
            qDebug() << "retornou true";
        }else{
            qDebug() << "NÃO ENTROU EM NENHUM 1";
            return;
        }

    }else if(resposta == QMessageBox::No){
        if(capitao.RebaixarLider(nome,id)){
            qDebug() << "rebaixou";
        }else{
            qDebug() << "NÃO ENTROU EM NENHUM 2";
            return;
        }
    }
}

