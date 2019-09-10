#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"
#include "ContaCorrente.h"
#include <iostream>
#include <string>

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(std::string nomeCliente, int numero, double saldo, double salario);
        double definirLimite();

        void print();
};

#endif