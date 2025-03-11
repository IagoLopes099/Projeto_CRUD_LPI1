#ifndef EQUIPE_H
#define EQUIPE_H

#include <QString>
#include <QTableWidget>
#include <vector>

class BancoDeDados;

using String = QString;

class DataNascimento{
private:
    int dia;
    int mes;
    int ano;
public:
    DataNascimento(int d, int m, int a){
        this->dia = d;
        this->mes = m;
        this->ano = a;
    };

    void setDia(int d){dia = d;}
    void setMes(int m){mes = m;}
    void setAno(int a){ano = a;}

    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAno(){return ano;}
};

class User{
private:
    String username;
    String senha;
public:
    User(){};
    User(String username, String senha) : username(username), senha(senha) {};

    /*METODOS GET*/
    String getUsername(){return username;}
    String getSenha(){return senha;}
};


class Membro{
protected:
    User user;
    String nome;
    String cpf;
    String dataNascimento;
    String subequipe;
    String cargo;
    String email;
    String telefone;
    String genero;
public:
    /*METODOS CONSTRUTORES*/
    Membro();
    Membro(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone);
    Membro(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone, User user) :
        Membro(nome, cpf, subequipe, genero, dataNascimento, email, telefone){
        this->user = user;
        setCargo("membro");
    };

    /*METODOS GET*/
    String getNome(){return nome;}
    String getCpf(){return cpf;}
    String getDataNascimento(){return dataNascimento;}
    String getSubequipe(){return subequipe;}
    String getCargo(){return cargo;}
    String getEmail(){return email;}
    String getTelefone(){return telefone;}
    String getGenero(){return genero;}
    User getUser(){return user;};

    /*METODOS SET*/
    void setNome(String nome){this->nome = nome;};
    void setCpf(String cpf){this->cpf = cpf;};
    void setDataNasc(String dataNascimento){this->dataNascimento = dataNascimento;};
    void setSubequipe(String subequipe){this->subequipe = subequipe;};
    void setCargo(String cargo){this->cargo = cargo;};
    void setEmail(String email){this->email = email;};
    void setTelefone(String telefone){this->telefone = telefone;};
    void setGenero(String genero){this->genero = genero;};
    void setUser(User user){this->user = user;};

};//FIM CLASSE MEMBRO


class Lider : public Membro{
private:
    Membro membro;
    int dataPromocao;
public:
    /*METODOS CONSTRUTORES*/
    Lider(){};
    Lider(Membro membro): membro(membro) {};
    Lider(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone, int dataPromocao);

    /*METODOS GET*/
    int getDataPromocao() {return dataPromocao;}

    /*METODOS SET*/
    void SetDataPromocao(int d);

    /*OUTROS METODOS*/
    bool CadastrarMembro(BancoDeDados* banco);
    bool EditarMembro(String id, Membro Membro);
    bool DeletarMembro(String id, BancoDeDados* banco);
    void ListarMembros(QTableWidget *tabela, String subequipe);
    void BuscarMembro(String nome, QTableWidget *tabela, String subequipe);


};//FIM CLASSE LIDER


class Capitao : public Lider{
public:

    /*OUTROS METODOS*/
    bool PromoverLider(String nome, String data, String id);
    bool RebaixarLider(String nome, String id);
    void ListarMembrosCap(QTableWidget *tabela);
    void BuscarMembro(String nome, QTableWidget *tabela, String subequipe);

};//FIM CLASSE CAPITÃO


class BancoDeDados{
private:
    Membro membro;
    std::vector<Membro> membros;
    std::vector<Lider> lider;
    std::vector<Capitao> capitao;
    String username;
    String password;

public:

    //CONSTRUTORES
    BancoDeDados(){};
    BancoDeDados(String username, String password){
        this->username = username;
        this->password = password;
    };

    void setMembro(Membro m){membro = m;}

    //METODOS GET
    String getUsername(){return username;};
    String getPassword(){return password;};
    Membro getMembro(){return membro;};

    //METODOS CRUD
    void ListarId(int id);
    void ListarNome(String nome);
    bool deletar(String id, String tabela);
    bool CadastrarMembro(Membro Membro);

    //OUTROS METODOS
    bool VerificarAbertura();
    bool Mover(String nome, String tabelaOrigem, String tabelaDestino, String data, String id);
    QStringList VerificarLogin(String username, String password);
    String RetornarIdTabela(String tabela);
    void AbrirBanco();
    void VerificarAbertura2();
    bool GerarRelatorio();

};//FIM CLASSE BANCO DE DADOS


#endif // EQUIPE_H
