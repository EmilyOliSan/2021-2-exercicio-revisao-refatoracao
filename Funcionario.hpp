#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Resgistro {
    public:

        std::string idade;
        int rgFuncionario;
         
    private:
        
        double salarioBase;
        std::string nome;
};

class Funcionario : public Resgistro {

    private:

        void print() {
            std::cout << "[Funcionario]" << std::endl << "  Idade: " << idade 
            << std::endl << "  RGFunc: " << rgFuncionario << std::endl;
        }

        void print_oi(){
            std::cout << "Tchau" << std::endl;
        }
};

#endif
