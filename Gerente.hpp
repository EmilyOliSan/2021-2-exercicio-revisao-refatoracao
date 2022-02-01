#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

class Gerente : public Resgistro {

    public:
    
        double valorBonificacao = 15.0;
        double bonificacao;
        void print() ;
        double calculaBonificacaoGerente(int);
};

#endif

