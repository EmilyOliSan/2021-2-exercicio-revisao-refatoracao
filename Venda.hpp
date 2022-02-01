
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:
        std::string descricao;
        double valor;
        Especialista esp;
        std::string cliente;

    void print();
};

#endif
