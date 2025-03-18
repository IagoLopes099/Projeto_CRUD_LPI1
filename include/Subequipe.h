#ifndef SUBEQUIPE_H
#define SUBEQUIPE_H

#include "Equipe.h"
#include <QString>

using String = QString;

class Subequipe{
protected:
    String nome;
    int numeroMembros;
    Membro participantes[20];


};


#endif // SUBEQUIPE_H
