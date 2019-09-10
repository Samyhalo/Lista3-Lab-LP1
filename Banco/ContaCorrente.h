#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"
#include <iostream>
#include <string>

class ContaCorrente : public Conta
{
    protected:
        double salario;
        double limite;

    public:
        ContaCorrente();
        ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario);
        void setLimite(double limite);
        void setSalario(double salario);

        double definirLimite();

        double getLimite();
        double getSalario(); 

        void print();
};

#endif //CONTACORRENTE