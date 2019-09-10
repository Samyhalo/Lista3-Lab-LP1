#include "Conta.h"
#include "ContaCorrente.h"
#include <iostream>
#include <string>

ContaCorrente::ContaCorrente()
{   
    Conta();
    salario = 0;
}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario)
{   
    setNomeCliente(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
    setSalario(salario);
}

void ContaCorrente::setLimite(double limite)
{}

void ContaCorrente::setSalario(double salario)
{
    this->salario = salario;
}

double ContaCorrente::definirLimite()
{
    limite = 2*salario;
    return limite;
}

double ContaCorrente::getLimite()
{
    return limite;
}

double ContaCorrente::getSalario()
{
    return salario;
}

void ContaCorrente::print()
{
    std::cout<<"Cliente: "<<getNomeCliente()<<" Saldo: R$"<<getSaldo()<<" Salario: R$"<<getSalario()<<" Limite: R$"<<definirLimite()<<std::endl;
}
