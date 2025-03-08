#include "Equipe.h"
//#include <iostream>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QTableWidget>
#include <QHeaderView>


Membro::Membro(){}

Membro::Membro(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone)
{
    this->nome = nome;
    this->cpf = cpf;
    this->dataNascimento = dataNascimento;
    this->subequipe = subequipe;
    this->email = email;
    this->telefone = telefone;
    this->genero = genero;
}


bool Lider::CadastrarMembro(Membro Membro){

    QSqlDatabase db = QSqlDatabase::database();

    QSqlQuery query;
    query.prepare("insert into tb_usuarios (nome,subequipe,cpf,genero,data_nascimento,email, telefone) values ('"+Membro.getNome().toLower()+"',\""+Membro.getSubequipe()+"\",\""+Membro.getCpf()+"\",\""+Membro.getGenero()+"\",\""+Membro.getDataNascimento()+"\",\""+Membro.getEmail()+"\",\""+Membro.getTelefone()+"\")");

    if(!db.isOpen()){
        qDebug() << "Banco de dados não esta aberto para cadastrar!";
        return false;
    }else{
        if(query.exec()){

            return true;
        }else{

            return false;
        }
    }
}

bool Lider::EditarMembro(String id, Membro Membro){

    QSqlDatabase db = QSqlDatabase::database();

    if(!db.isOpen()){
        qDebug() << "Banco de dados não esta aberto na edição!";
        return false;
    } else {
        QSqlQuery query;

        query.prepare("UPDATE tb_usuarios "
                      "SET nome = :nome, "
                      "email = :email, "
                      "telefone = :telefone, "
                      "cpf = :cpf, "
                      "data_nascimento = :data_nascimento, "
                      "subequipe = :subequipe, "
                      "genero = :genero "
                      "WHERE id_usuarios = :id");

        query.bindValue(":nome", Membro.getNome());
        query.bindValue(":email", Membro.getEmail());
        query.bindValue(":telefone", Membro.getTelefone());
        query.bindValue(":cpf", Membro.getCpf());
        query.bindValue(":data_nascimento", Membro.getDataNascimento());
        query.bindValue(":subequipe", Membro.getSubequipe());
        query.bindValue(":genero", Membro.getGenero());
        query.bindValue(":id", id);


        if(query.exec()){
            return true;
        } else {
            qDebug() << "Erro ao executar query: " << query.lastError().text();
            return false;
        }
    }
}

bool Lider::DeletarMembro(String id){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query;

    query.prepare("delete from tb_usuarios where id_usuarios="+id);

    if (!db.isOpen()) {
        qDebug() << "Banco de dados não está aberto na exclusão!";
        return false;
    }else{
        if(query.exec()){
            return true;
        }else{
            qDebug() << "Erro ao executar query: " << query.lastError().text();
            return false;
        }
    }
}

/*--------------------------------------------------------INICIO DOS LISTAR--------------------------------------------------------*/

void Lider::ListarMembros(QTableWidget *tabela, String subequipe_lider){

    BancoDeDados bd;
    bd.VerificarAbertura();

    QSqlQuery query;
    query.prepare("SELECT * FROM tb_usuarios WHERE subequipe='"+subequipe_lider+"' ORDER BY nome");

    if (query.exec()) {
        int linha = 0;
        tabela->setRowCount(0);
        tabela->setColumnCount(8);

        while (query.next()) {
            tabela->insertRow(linha);
            tabela->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
            tabela->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
            tabela->setItem(linha, 2, new QTableWidgetItem(query.value(4).toString()));
            tabela->setItem(linha, 3, new QTableWidgetItem(query.value(6).toString()));
            tabela->setItem(linha, 4, new QTableWidgetItem(query.value(5).toString()));
            tabela->setItem(linha, 5, new QTableWidgetItem(query.value(10).toString()));
            tabela->setItem(linha, 6, new QTableWidgetItem(query.value(9).toString()));
            tabela->setItem(linha, 7, new QTableWidgetItem(query.value(8).toString()));
            linha++;
        }

        tabela->setColumnWidth(0, 30);
        tabela->setColumnWidth(1, 250);
        tabela->setColumnWidth(2, 30);
        tabela->setColumnWidth(3, 75);
        tabela->setColumnWidth(4, 125);
        tabela->setColumnWidth(5, 100);
        tabela->setColumnWidth(6, 150);
        tabela->setColumnWidth(7, 140);

        QStringList cabecalho = {"ID", "Nome", "Sexo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};
        tabela->setHorizontalHeaderLabels(cabecalho);

        tabela->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabela->setSelectionBehavior(QAbstractItemView::SelectRows);

        tabela->verticalHeader()->setVisible(false);
    } else {
        qDebug() << "Erro ao executar consulta: " << query.lastError().text();
    }
}

void Lider::ListarMembrosCap(QTableWidget *tabela){

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Banco de dados não está aberto para listar!";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT id_usuarios as id,nome, cargo, genero,subequipe,data_nascimento,cpf, email,telefone FROM  tb_usuarios UNION ALL SELECT id_lideres as id,nome, cargo, genero,subequipe,data_nascimento,cpf, email,telefone from tb_lideres");

    if (query.exec()) {
        int linha = 0;
        tabela->setRowCount(0);
        tabela->setColumnCount(9);

        while (query.next()) {
            tabela->insertRow(linha);
            tabela->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
            tabela->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
            tabela->setItem(linha, 2, new QTableWidgetItem(query.value(3).toString()));
            tabela->setItem(linha, 3, new QTableWidgetItem(query.value(2).toString()));
            tabela->setItem(linha, 4, new QTableWidgetItem(query.value(4).toString()));
            tabela->setItem(linha, 5, new QTableWidgetItem(query.value(5).toString()));
            tabela->setItem(linha, 6, new QTableWidgetItem(query.value(6).toString()));
            tabela->setItem(linha, 7, new QTableWidgetItem(query.value(7).toString()));
            tabela->setItem(linha, 8, new QTableWidgetItem(query.value(8).toString()));
            linha++;
        }

        tabela->setColumnWidth(0, 30);
        tabela->setColumnWidth(1, 250);
        tabela->setColumnWidth(2, 30);
        tabela->setColumnWidth(3, 50);
        tabela->setColumnWidth(4, 125);
        tabela->setColumnWidth(5, 100);
        tabela->setColumnWidth(6, 150);
        tabela->setColumnWidth(7, 140);
        tabela->setColumnWidth(8, 140);

        QStringList cabecalho = {"ID", "Nome", "Sexo","Cargo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};
        tabela->setHorizontalHeaderLabels(cabecalho);

        tabela->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabela->setSelectionBehavior(QAbstractItemView::SelectRows);

        tabela->verticalHeader()->setVisible(false);
    } else {
        qDebug() << "Erro ao executar consulta: " << query.lastError().text();
    }
}



bool Lider::BuscarMembro(String nome, QTableWidget *tabela){

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Banco de dados não está aberto para buscar!";
        return false;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM tb_usuarios where nome LIKE \"%"+nome+ "%\"");

    if (query.exec()) {
        int linha = 0;
        tabela->setRowCount(0);
        tabela->setColumnCount(9);

        while (query.next()) {
            tabela->insertRow(linha);
            tabela->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
            tabela->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
            tabela->setItem(linha, 2, new QTableWidgetItem(query.value(4).toString()));
            tabela->setItem(linha, 3, new QTableWidgetItem(query.value(6).toString()));
            tabela->setItem(linha, 4, new QTableWidgetItem(query.value(5).toString()));
            tabela->setItem(linha, 5, new QTableWidgetItem(query.value(10).toString()));
            tabela->setItem(linha, 6, new QTableWidgetItem(query.value(9).toString()));
            tabela->setItem(linha, 7, new QTableWidgetItem(query.value(8).toString()));
            tabela->setItem(linha, 8, new QTableWidgetItem(query.value(7).toString()));
            linha++;
        }

        tabela->setColumnWidth(0, 30);
        tabela->setColumnWidth(1, 250);
        tabela->setColumnWidth(2, 30);
        tabela->setColumnWidth(3, 75);
        tabela->setColumnWidth(4, 125);
        tabela->setColumnWidth(5, 100);
        tabela->setColumnWidth(6, 150);
        tabela->setColumnWidth(7, 140);
        tabela->setColumnWidth(8, 140);

        QStringList cabecalho = {"ID", "Nome", "Sexo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};
        tabela->setHorizontalHeaderLabels(cabecalho);
        tabela->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabela->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabela->verticalHeader()->setVisible(false);
        return true;
    } else {
        qDebug() << "Erro ao executar consulta: " << query.lastError().text();
        return false;
    }
}

/*--------------------------------------------------------FIM DOS LISTAR--------------------------------------------------------*/


Lider::Lider(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone, int dataPromocao) :
    Membro(nome,cpf,subequipe,genero,dataNascimento,email,telefone)
{
    this->dataPromocao = dataPromocao;
}


void Lider::SetDataPromocao(int n){
    this->dataPromocao = n;
}

bool Capitao::PromoverLider(String nome, String data, String id){
    String tabelaDestino = "tb_lideres";
    String tabelaOrigem = "tb_usuarios";

    BancoDeDados banco;

    if(banco.Mover(nome, tabelaOrigem, tabelaDestino, data, id)){
        return true;
    }else{
        return false;
    }
}


bool Capitao::RebaixarLider(String nome, String id){
    String tabelaDestino = "tb_usuarios";
    String tabelaOrigem = "tb_lideres";

    BancoDeDados banco;

    if(banco.Mover(nome, tabelaOrigem, tabelaDestino, "", id)){
        return true;
    }else{
        return false;
    }



}

bool BancoDeDados::VerificarAbertura(){

    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        qDebug() << "Banco de dados não está aberto!";
        return false;
    }else{
        return true;
    }
}


QStringList BancoDeDados::VerificarLogin(){

    QStringList resposta;

    if(!VerificarAbertura()){
        resposta << "Error 1";
        return resposta;
    }else{

        QSqlQuery query;


        String membro = "SELECT * FROM tb_usuarios where username = '"+username+ "' and password='" +password+ "'";
        String lider = "SELECT * FROM tb_lideres where username = '"+username+ "' and password='" +password+ "'";
        String capitao = "SELECT * FROM tb_capitaes where username = '"+username+ "' and password='" +password+ "'";


        if(query.exec(membro)){
            if(query.next()){
                resposta << query.value(7).toString();
                resposta << query.value(6).toString();
            }
        }else{
            qDebug() << "Erro ao realizar consulta: " <<query.lastError().text();
        }

        if(query.exec(lider)){
            if(query.next()){
                resposta << query.value(7).toString();
                resposta << query.value(6).toString();
            }
        }else{
            qDebug() << "Erro ao realizar consulta: " <<query.lastError().text();
        }

        if(query.exec(capitao)){
            if(query.next()){
                resposta << query.value(7).toString();
                resposta << query.value(6).toString();
            }
        }else{
            qDebug() << "Erro ao realizar consulta: " <<query.lastError().text();
        }

        return resposta;
    }
}


bool BancoDeDados::Mover(String nome, String tabelaOrigem, String tabelaDestino, String data, String id){

    if(!VerificarAbertura()){
        return false;
    }else{

        BancoDeDados bd;
        String id_destino = RetornarIdTabela(tabelaDestino), id_Origem = RetornarIdTabela(tabelaOrigem);

        String mover = "INSERT INTO "+tabelaDestino+"("+id_destino+", nome,password,username, genero, data_nascimento, subequipe, telefone, email, cpf,data_admissao) SELECT "+id_Origem+", nome, password, username, genero, data_nascimento, subequipe, telefone, email, cpf, data_admissao FROM "+tabelaOrigem+" where nome = '"+nome+"'";

        QSqlQuery query;

        Lider lider;

        if(!VerificarAbertura()){
            qDebug() << "Erro na abertura do banco" ;
            return false;

        }else{
            if(tabelaOrigem == "tb_usuarios"){

                String adicionarCargo = "update tb_lideres set cargo=\"lider\" WHERE id_lideres="+id+"";
                query.bindValue(":lider", "lider");
                query.bindValue(":id", id);

                String adicionarDataPromocao = "update tb_lideres set data_promocao_lider="+data+" WHERE id_lideres="+id+"";
                query.bindValue(":data_promocao", data);

                if(query.exec(mover)){
                    if(query.exec(adicionarCargo)){
                        if(query.exec(adicionarDataPromocao)){
                            if(bd.deletar(id,tabelaOrigem)){
                                qDebug() << "Membro movido e deletado com sucesso!" ;
                                return true;
                            }else{
                                qDebug() << "erro1";
                                return false;}
                        }else{
                            qDebug() << "erro2";
                            return false;}
                    }else{
                        qDebug() << "erro3"<< query.lastError().text();
                        return false;}

                }else{
                    qDebug() << "Bugou na execução!";
                    qDebug() << "Erro ao executar a query de mover: " << query.lastError().text();
                    return false;

                }

            }else if(tabelaOrigem == "tb_lideres"){

                String rebaixarCargo = "update tb_usuarios set cargo='membro' WHERE id_usuarios="+id+"";
                query.bindValue(":id", id);

                if(query.exec(mover)){
                    if(query.exec(rebaixarCargo)){

                        if(bd.deletar(id,tabelaOrigem)){
                            qDebug() << "MOVIDO E DELETADO COM SUCESSO";
                            return true;
                        }else{
                            qDebug() << "tabela origem: " << tabelaOrigem;
                            qDebug() << "BUGOU NO DELETE" << query.lastError().text();
                            return false;
                        }
                    }else{
                        qDebug() << "Bugou no rebaixar" << query.lastError().text();
                        return false;
                    }


                }else{
                    qDebug() <<"BUGOU NO MOVER";
                    return false;
                }
            }else{
                qDebug() << "Bugou na execução 2!";
                return false;
            }
        }
    }
}


bool BancoDeDados::deletar(String id, String tabela){
    if(!VerificarAbertura()){
        return false;
    }else{

        QSqlQuery query;

        String id_tabela = RetornarIdTabela(tabela);

        query.prepare("DELETE FROM "+tabela+" WHERE "+id_tabela+"="+id+"");

        if(query.exec()){
            return true;
        }else{
            qDebug() << "Erro ao executar query: " << query.lastError().text();
            return false;
        }
    }
}

void BancoDeDados::ListarUsuarios(){


}

String BancoDeDados::RetornarIdTabela(String tabela){
    if(tabela == "tb_usuarios"){
        return "id_usuarios";
    }else if (tabela == "tb_lideres"){
        return "id_lideres";
    }else{
        return "id_capitaes";
    }
}
