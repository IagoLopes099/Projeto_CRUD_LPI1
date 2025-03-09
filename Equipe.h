#ifndef EQUIPE_H
#define EQUIPE_H

#include <QString>
#include <QTableWidget>
#include <vector>

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
    /*METODOS CONSTRUTORES*/
    Membro();
    Membro(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone);

    /*METODOS GET*/
    String getNome(){return nome;}
    String getCpf(){return cpf;}
    String getDataNascimento(){return dataNascimento;}
    String getSubequipe(){return subequipe;}
    String getCargo(){return cargo;}
    String getEmail(){return email;}
    String getTelefone(){return telefone;}
    String getGenero(){return genero;}

    /*METODOS SET*/
    void setNome(String nome){this->nome = nome;};
    void setCpf(String cpf){this->cpf = cpf;};
    void setDataNasc(String dataNascimento){this->dataNascimento = dataNascimento;};
    void setSubequipe(String subequipe){this->subequipe = subequipe;};
    void setCargo(String cargo){this->cargo = cargo;};
    void setEmail(String email){this->email = email;};
    void setTelefone(String telefone){this->telefone = telefone;};
    void setGenero(String genero){this->genero = genero;};

};//FIM CLASSE MEMBRO

class Lider : public Membro{
private:
    int dataPromocao;
public:
    /*METODOS CONSTRUTORES*/
    Lider(){};
    Lider(String nome, String cpf, String subequipe, String genero, String dataNascimento, String email, String telefone, int dataPromocao);

    /*METODOS GET*/
    int getDataPromocao() {return dataPromocao;}

    /*METODOS SET*/
    void SetDataPromocao(int d);

    /*OUTROS METODOS*/
    bool CadastrarMembro(Membro Membro);
    bool EditarMembro(String id, Membro Membro);
    bool DeletarMembro(String id);
    void ListarMembros(QTableWidget *tabela, String subequipe);
    void ListarMembrosCap(QTableWidget *tabela);
    void BuscarMembro(String nome, QTableWidget *tabela, String subequipe);

};//FIM CLASSE LIDER


class Capitao : public Lider{
public:
    /*OUTROS METODOS*/
    bool PromoverLider(String nome, String data, String id);
    bool RebaixarLider(String nome, String id);

};//FIM CLASSE CAPITÃO


class BancoDeDados{
private:
    Membro membro;
    String username;
    String password;

public:
    /*CONSTRUTORES*/
    BancoDeDados(){};
    BancoDeDados(String username, String password){
        this->username = username;
        this->password = password;
    };
    BancoDeDados(String g, String nasc, String cpf, String n, String sub, String email, String tel, String username, String password){
        membro.setNome(n);
        membro.setCpf(cpf);
        membro.setDataNasc(nasc);
        membro.setSubequipe(sub);
        //membro.setCargo();
        membro.setEmail(email);
        membro.setTelefone(tel);
        membro.setGenero(g);

        this->username = username;
        this->password = password;
    };

    /*METODOS GET*/
    String getUsername(){return username;};
    String getPassword(){return password;};

    /*OUTROS METODOS*/
    void ListarId(int id);
    void ListarNome(String nome);
    bool VerificarAbertura();
    QStringList VerificarLogin();
    String RetornarIdTabela(String tabela);

    bool Mover(String nome, String tabelaOrigem, String tabelaDestino, String data, String id);
    bool deletar(String id, String tabela);
    void ListarMembros();
    void ListarMembrosSubequipe();

};//FIM CLASSE BANCO DE DADOS


#endif // EQUIPE_H
