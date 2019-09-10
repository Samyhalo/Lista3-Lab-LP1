#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"
#include <iostream>
#include <string>

class Poupanca : public Conta
{
    private:
        int variacao;
        double taxaRendimento;

    public:
        Poupanca();
        Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento);
        double render(double taxaRendimento);

        void setVariacao(int variacao);
        void setTaxaRendimento(double taxaRendimento);

        int getVariacao();
        double getTaxaRendimento();

        void print();
};

#endif //POUPANCA