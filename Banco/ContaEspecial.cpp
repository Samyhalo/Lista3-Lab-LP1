#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h" 
#include <iostream>
#include <string>

ContaEspecial::ContaEspecial()
{
    Conta();
    salario = 0;
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numero, double saldo, double salario)
{
    setNomeCliente(nomeCliente);
    setNumero(numero);
    setSaldo(saldo);
    setSalario(salario);
}

double ContaEspecial::definirLimite()
{
    limite = 4*salario;
    return limite;
}

void ContaEspecial::print()
{
    std::cout<<"Cliente: "<<getNomeCliente()<<" Saldo: R$"<<getSaldo()<<" Salario: R$"<<getSalario()<<" Limite: R$"<<definirLimite()<<std::endl;
}