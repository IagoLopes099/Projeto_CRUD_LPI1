#include "Equipe.h"
#include <iostream>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QTableWidget>
#include <QHeaderView>
#include <QApplication>
#include <fstream>


using namespace std;


void Listar2(BancoDeDados* banco, QTableWidget* tabela,int *largVetor, QStringList cabecalho){

    int linha = 0;
    tabela->setRowCount(0);
    tabela->setColumnCount(cabecalho.size());
    int lastId = -1000;

    for(Membro &membro : banco->getReferenciaMembro()){
        tabela->insertRow(linha);

        tabela->setItem(linha, 0, new QTableWidgetItem(QString::number(membro.getId())));
        tabela->setItem(linha, 1, new QTableWidgetItem(membro.getNome()));
        tabela->setItem(linha, 2, new QTableWidgetItem(membro.getGenero()));
        tabela->setItem(linha, 3, new QTableWidgetItem(membro.getSubequipe()));
        tabela->setItem(linha, 4, new QTableWidgetItem(membro.getDataNascimento()));
        tabela->setItem(linha, 5, new QTableWidgetItem(membro.getCpf()));
        tabela->setItem(linha, 6, new QTableWidgetItem(membro.getEmail()));
        tabela->setItem(linha, 7, new QTableWidgetItem(membro.getTelefone()));



        linha++;
    }

    for(int i = 0; i< cabecalho.size() ; i++){
        tabela->setColumnWidth(i, largVetor[i]);
    }

    tabela->setHorizontalHeaderLabels(cabecalho);
    tabela->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tabela->setSelectionBehavior(QAbstractItemView::SelectRows);
    tabela->verticalHeader()->setVisible(false);

}


void Listar(int tamVetor, int *posVetor,int *largVetor, QTableWidget* tabela, String prepare, QStringList cabecalho){

    BancoDeDados banco;
    banco.VerificarAbertura();

    QSqlQuery query;
    query.prepare(prepare);

    if (query.exec()) {
        int linha = 0;
        tabela->setRowCount(0);
        tabela->setColumnCount(tamVetor);

        while (query.next()) {
            tabela->insertRow(linha);

            for(int i = 0; i < tamVetor ; i++){
                tabela->setItem(linha, i, new QTableWidgetItem(query.value(posVetor[i]).toString()));
            }
            linha++;
        }

        for(int i = 0; i< tamVetor ; i++){
            tabela->setColumnWidth(i, largVetor[i]);
        }

        tabela->setHorizontalHeaderLabels(cabecalho);
        tabela->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabela->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabela->verticalHeader()->setVisible(false);
    } else {
        qDebug() << "Erro ao executar consulta: " << query.lastError().text();
    }

}//FIM DA FUNÇÃO LISTAR


/*----------------------------------------------INICIO DOS METODOS DA CLASSE MEMBRO--------------------------------------------------------*/
Membro::Membro(){}

Membro::Membro(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone, String cargo, int id)
{
    this->id = id;
    this->nome = nome;
    this->cpf = cpf;
    this->dataNascimento = dataNascimento;
    this->subequipe = subequipe;
    this->email = email;
    this->telefone = telefone;
    this->cargo = cargo;
    this->genero = genero;
    setCargo("membro");
}


/*----------------------------------------------INICIO DOS METODOS DA CLASSE LIDER--------------------------------------------------------*/

Lider::Lider(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone, String cargo, int id, int dataPromocao) :
    Membro(nome,cpf,subequipe,genero,dataNascimento,email,telefone, cargo, id)
{
    this->dataPromocao = dataPromocao;
    setCargo("lider");
}


void Lider::SetDataPromocao(int n){
    this->dataPromocao = n;
}


int Lider::getLastId(BancoDeDados* banco){

    int lastId = -10000;
    for(Membro &membro : banco->getReferenciaMembro()){
        if(membro.getId() > lastId){
            lastId = membro.getId();
        }
    }
    return lastId;

}


bool Lider::CadastrarMembro(BancoDeDados* banco){

    if (!banco->VerificarAbertura()) {
        qDebug() << "Banco de dados não está aberto na exclusão!";
        return false;
    }else{
        return banco->CadastrarMembro(membro);
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


bool Lider::DeletarMembro(String id, BancoDeDados* banco){

    if (!banco->VerificarAbertura()) {
        qDebug() << "Banco de dados não está aberto na exclusão!";
        return false;
    }else{
        return banco->deletar(id, "tb_usuarios");
    }
}

bool Lider::DeletarMembroVector(String id, BancoDeDados* banco){

    if (!banco->VerificarAbertura()) {
        qDebug() << "Banco de dados não está aberto na exclusão!";
        return false;
    }else{
        return banco->DeletarNoVector(id, "tb_usuarios") ;
    }
}


void Lider::ListarMembros(QTableWidget *tabela, BancoDeDados* banco){

    int tamVetor = 8;
    int posVetor[] = {0, 1, 4, 6, 5, 10, 9, 8};
    int largVetor[] = {30, 250, 30, 75, 125, 100, 150, 140};

    QStringList cabecalho = {"ID", "Nome", "Sexo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};

    Listar2(banco,tabela,largVetor,cabecalho);
}


void Lider::BuscarMembro(String nome, QTableWidget *tabela, std::vector<Membro> vetorMembros){

    int largVetor[] = {30, 250, 30, 75, 125, 100, 150, 140};

    QStringList cabecalho = {"ID", "Nome", "Sexo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};

    int linha = 0;
    tabela->setRowCount(0);
    tabela->setColumnCount(cabecalho.size());

    for(Membro membro : vetorMembros){
        if(membro.getNome().contains(nome)){
            tabela->insertRow(linha);

            tabela->setItem(linha, 0, new QTableWidgetItem(QString::number(membro.getId())));
            tabela->setItem(linha, 1, new QTableWidgetItem(membro.getNome()));
            tabela->setItem(linha, 2, new QTableWidgetItem(membro.getGenero()));
            tabela->setItem(linha, 3, new QTableWidgetItem(membro.getSubequipe()));
            tabela->setItem(linha, 4, new QTableWidgetItem(membro.getDataNascimento()));
            tabela->setItem(linha, 5, new QTableWidgetItem(membro.getCpf()));
            tabela->setItem(linha, 6, new QTableWidgetItem(membro.getEmail()));
            tabela->setItem(linha, 7, new QTableWidgetItem(membro.getTelefone()));

            linha++;
        }

    }

    for(int i = 0; i< cabecalho.size() ; i++){
        tabela->setColumnWidth(i, largVetor[i]);
    }

    tabela->setHorizontalHeaderLabels(cabecalho);
    tabela->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tabela->setSelectionBehavior(QAbstractItemView::SelectRows);
    tabela->verticalHeader()->setVisible(false);


}


/*-------------------------------------------------------METODOS DA CLASSE CAPITAO-------------------------------------------------------*/

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


void Capitao::ListarMembrosCap(QTableWidget *tabela){

    int tamVetor= 9;
    int posVetor[] = {0,1,3,2,4,5,6,7,8};
    int largVetor[] = {30,250,30,50,125, 100, 150, 140,140};

    QStringList cabecalho = {"ID", "Nome", "Sexo","Cargo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};

    String prepare = "SELECT id_usuarios as id,nome, cargo, genero,subequipe,data_nascimento,cpf, email,telefone "
                     "FROM  tb_usuarios UNION ALL SELECT id_lideres as id,nome, cargo, genero,subequipe,data_nascimento,cpf, email,telefone"
                     " from tb_lideres";

    Listar(tamVetor,posVetor, largVetor, tabela, prepare, cabecalho);

}

void Capitao::BuscarMembro(String nome, QTableWidget *tabela, String subequipe){

    String prepare;

    if(subequipe == ""){ // AQUI É CAPITÃO GERAL

        prepare = "SELECT id_usuarios as id, nome, cargo, genero, subequipe, data_nascimento, cpf, email, telefone "
                  "FROM tb_usuarios WHERE nome LIKE '%" + nome + "%' "
                           "UNION ALL "
                           "SELECT id_lideres as id, nome, cargo, genero, subequipe, data_nascimento, cpf, email, telefone "
                           "FROM tb_lideres "
                           "WHERE nome LIKE '%" + nome + "%'";

        int tamVetor = 9;
        int posVetor[] = {0,1,3,2,4,5,6,7,8};
        int largVetor[] = {30,250,30,50,125, 100, 150, 140,140};

        QStringList cabecalho = {"ID", "Nome", "Sexo","Cargo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};

        Listar(tamVetor, posVetor, largVetor, tabela, prepare, cabecalho);

    }else{ // AQUI É LIDER

        prepare = "SELECT id_usuarios as id, nome, cargo, genero, subequipe, data_nascimento, cpf, email, telefone "
                  "FROM tb_usuarios "
                  "WHERE nome LIKE '%" + nome + "%' AND subequipe LIKE '%" + subequipe + "%' UNION ALL "
                    "SELECT id_lideres as id, nome, cargo, genero, subequipe, data_nascimento, cpf, email, telefone "
                    "FROM tb_lideres "
                    "WHERE nome LIKE '%" + nome + "%' AND subequipe LIKE '%" + subequipe + "%'";

        int tamVetor = 9;
        int posVetor[] = {0,1,3,2,4,5,6,7,8};
        int largVetor[] = {30,250,30,50,125, 100, 150, 140,140};

        QStringList cabecalho = {"ID", "Nome", "Sexo","Cargo", "Sub-equipe", "Data de Nascimento", "CPF", "Email", "Telefone"};

        Listar(tamVetor, posVetor, largVetor, tabela, prepare, cabecalho);
    }
}


/*-------------------------------------------------------METODOS DA CLASSE BANCO-------------------------------------------------------*/

bool BancoDeDados::VerificarAbertura(){

    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        qDebug() << "Banco de dados não está aberto!";
        return false;
    }else{
        return true;
    }
}

void BancoDeDados::AbrirBanco(){

    QString dir=qApp->applicationDirPath();
    QString banco = dir + "/BdProg1/BdProg1";

    if (!QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "qt_sql_default_connection");
        db.setDatabaseName(banco);

        if (!db.open()) {
            qDebug() << "Erro ao abrir o banco de dados:" << db.lastError().text();
        } else {
            //qDebug() << "Banco de dados aberto com sucesso!";
        }
    } else {
        // Usa a conexão existente
        QSqlDatabase db = QSqlDatabase::database("qt_sql_default_connection");
        qDebug() << "Usando conexão existente com o banco de dados.";
    }

}


QStringList BancoDeDados::VerificarLogin(String username, String password){

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

        if(resposta.isEmpty()){
            resposta << "Error 2";
            resposta << "Error 2";
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
        AbrirBanco();
        //return false;
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

bool BancoDeDados::DeletarNoVector(String id, String tabela){

    for (auto it = todosOsMembros.begin(); it != todosOsMembros.end(); ++it) {
        if (QString::number(it->getId()) == id) {

            todosOsMembros.erase(it);
            return true;
            break;
        }
    }
    return false;
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

bool BancoDeDados::CadastrarMembro(Membro Membro){

    QSqlQuery query;
    query.prepare("insert into tb_usuarios (nome,subequipe,cpf,genero,data_nascimento,email, telefone, username, password, cargo) values "
                    "('"+Membro.getNome().toLower()+"',\""+Membro.getSubequipe()+"\","
                    "\""+Membro.getCpf()+"\",\""+Membro.getGenero()+"\",\""+Membro.getDataNascimento()+"\","
                    "\""+Membro.getEmail()+"\",\""+Membro.getTelefone()+""
                    "\",\""+Membro.getUser().getUsername()+"\",\""+Membro.getUser().getSenha()+"\",\""+Membro.getCargo()+"\")");

    if(!VerificarAbertura()){
        AbrirBanco();
        return false;
    }else{
        if(query.exec()){
            return true;
        }else{
            return false;
        }
    }
}

void BancoDeDados::ListarMembros(String subequipe){
    std::vector<Membro> todosOsMembros;

    QSqlQuery query;
    query.prepare("SELECT * FROM tb_usuarios WHERE subequipe='"+subequipe+"' ORDER BY nome");
    if(query.exec()){
        while(query.next()){
            Membro membro;
            User user(query.value(2).toString(), query.value(3).toString());
            membro.setId(query.value(0).toInt());
            membro.setNome(query.value(1).toString());
            membro.setUser(user);
            membro.setGenero(query.value(4).toString());
            membro.setDataNasc(query.value(5).toString());
            membro.setSubequipe(query.value(6).toString());
            membro.setCargo(query.value(7).toString());
            membro.setTelefone(query.value(8).toString());
            membro.setEmail(query.value(9).toString());
            membro.setCpf(query.value(10).toString());
            membro.setDataAdmissao(query.value(11).toString());
            todosOsMembros.push_back(membro);
        }
    }
    this->todosOsMembros = todosOsMembros;
}

