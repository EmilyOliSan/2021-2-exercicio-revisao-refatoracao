#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "Registro.hpp"
#include <iostream>
#include <iomanip>

class Funcionario : public Resgistro {

    public:

        double salarioBase; // valor m�nimo recebido pelo funcion�rio

        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << idade << std::endl
            << "  RGFunc: " << rgFuncionario << std::endl;
        }

        void print_oi(){
            std::cout << "Tchau" << std::endl;
        }
};

#endif
