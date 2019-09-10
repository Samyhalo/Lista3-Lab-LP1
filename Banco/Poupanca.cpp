#include "Conta.h"
#include "Poupanca.h"
#include <iostream>
#include <string>

Poupanca::Poupanca()
{
    Conta();
    variacao = 0;
    taxaRendimento = 0;
}


Poupanca::Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento)
{
    setNomeCliente(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
    setVariacao(variacao);
    setTaxaRendimento(taxaRendimento);
}

double Poupanca::render(double taxaRendimento)
{
    if(variacao == 51)
    {
        return saldo*taxaRendimento*0,01;
    }else if(variacao == 1)
    {
        return saldo*taxaRendimento*0,01*0,005;    
    }
}

void Poupanca::setVariacao(int variacao)
{
    this->variacao = variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento)
{
    this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao()
{
    return variacao;
}

double Poupanca::getTaxaRendimento()
{
    return taxaRendimento;
}

void Poupanca::print()
{
    std::cout<<"Cliente: "<<getNomeCliente()<<" Saldo: R$"<<getSaldo()<<" Rendimento: R$"<<render(taxaRendimento)<<std::endl;
}