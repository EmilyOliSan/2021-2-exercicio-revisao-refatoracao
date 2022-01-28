#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


double valorBonificacao = 15.0;

class Gerente {
    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rgFuncionario;
        double bonificacao;


        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << idade << std::endl
            << "  RGFunc: " << rgFuncionario << std::endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << std::endl;
        }

        double calculaBonificacaoGerente(int numTotalVendas){
            double x;
            return numTotalVendas*valorBonificacao;
        }

};

#endif

