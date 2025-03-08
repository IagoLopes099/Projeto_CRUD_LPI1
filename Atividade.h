#ifndef ATIVIDADE_H
#define ATIVIDADE_H

#include "Equipe.h"
#include <QString>

using String = QString;

class Atividade{
private:
    int dataInicio, dataConclusao;
    String status[3] = {"Concluda", "Em andamento", "Pendente"};
    String descricao;
public:
    void MostrarDescricao();
};


#endif // ATIVIDADE_H
