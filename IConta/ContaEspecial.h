#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "IConta.h"
#include "Conta.h"
#include <iostream>
#include <string>

using namespace std;

class ContaEspecial : public Conta
{
public:
    ContaEspecial(string nomeCliente, double salarioMensal, double saldo, int numeroConta);
    void definirLimite();

};

#endif //CONTA_ESPECIAL_H