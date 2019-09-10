#include "ContaEspecial.h"
#include "Conta.h"
#include "IConta.h"
#include <iostream>
#include <string>

using namespace std;

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, double saldo, int numeroConta)
{ 
    setNomeCliente(nomeCliente);
    setSalarioMensal(salarioMensal);
    setSaldo(saldo);
    setNumeroConta(numeroConta);
    definirLimite();
    //sets
}

void ContaEspecial::definirLimite()
{
    this->limite = 3*this->salarioMensal;
}