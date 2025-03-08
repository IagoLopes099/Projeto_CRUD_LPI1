#ifndef EQUIPE_H
#define EQUIPE_H

#include <QString>
#include <QTableWidget>

using String = QString;

class Membro{
protected:
    String nome;
    String cpf;
    String dataNascimento;
    String subequipe;
    String cargo;
    String email;
    String telefone;
    String genero;
public:
    Membro();
    Membro(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone);
    String getNome(){return nome;}
    String getCpf(){return cpf;}
    String getDataNascimento(){return dataNascimento;}
    String getSubequipe(){return subequipe;}
    String getCargo(){return cargo;}
    String getEmail(){return email;}
    String getTelefone(){return telefone;}
    String getGenero(){return genero;}
};

class Lider : public Membro{
private:
    int dataPromocao;
public:
    Lider(){};
    Lider(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone, int dataPromocao);

    void SetDataPromocao(int d);

    int getDataPromocao() {return dataPromocao;}

    bool CadastrarMembro(Membro Membro);

    bool EditarMembro(String id, Membro Membro);

    bool DeletarMembro(String id);

    void ListarMembros(QTableWidget *tabela, String subequipe);

    void ListarMembrosCap(QTableWidget *tabela);

    bool BuscarMembro(String nome, QTableWidget *tabela);
};

class Capitao : public Lider{
public:
    bool PromoverLider(String nome, String data, String id);
    bool RebaixarLider(String nome, String id);

};

class BancoDeDados{
private:
    String genero;
    String data_nascimento;
    String cpf;
    String nome;
    String subequipe;
    String email;
    String telefone;
    String username;
    String password;
public:
    BancoDeDados(){};
    BancoDeDados(String username, String password){
        this->username = username;
        this->password = password;
    };
    BancoDeDados(String g, String nasc, String cpf, String n, String sub, String email, String tel, String username, String password){
        this->genero = g;
        this->data_nascimento = nasc;
        this->cpf = cpf;
        this->nome = n;
        this->subequipe = sub;
        this->email = email;
        this->telefone = tel;
        this->username = username;
        this->password = password;
    };

    void ListarId(int id);
    void ListarNome(String nome);
    bool VerificarAbertura();
    String getUsername(){return username;};
    String getPassword(){return password;};
    QStringList VerificarLogin();
    String RetornarIdTabela(String tabela);

    bool Mover(String nome, String tabelaOrigem, String tabelaDestino, String data, String id);
    bool deletar(String id, String tabela);
    void ListarUsuarios();

};


#endif // EQUIPE_H
