#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

double valorBonificacao = 15.0;

class Gerente : public Resgistro {

    public:
    
        double bonificacao;

        void print() {
            std::cout << "[Funcionario]" << std::endl<< "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl << "  Idade: " << idade << std::endl
            << "  RGFunc: " << rgFuncionario << std::endl << "  SalarioBase: R$ " 
            << std::fixed << std::setprecision(2) << salarioBase << std::endl;
        }

        double calculaBonificacaoGerente(int numTotalVendas){

            return numTotalVendas*valorBonificacao;
        }
};

#endif

