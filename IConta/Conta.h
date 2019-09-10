#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <iostream>
#include <string>

using namespace std;

class Conta : public IConta
{

public:

    Conta();
    Conta(string nomeCliente, double salarioMensal, double saldo, int numeroConta);

    void definirLimite();

    virtual void sacar(double valor);
    virtual void depositar(double valor);

    string getNomeCliente();
    double getSalarioMensal();
    double getSaldo();
    double getLimite();
    int getNumeroConta();

    void setNomeCliente(string nomeCliente);
    void setSalarioMensal(double salarioMensal);
    void setSaldo(double saldo);
    void setLimite(double limite);
    void setNumeroConta(int numeroConta);

protected:
    string nomeCliente;
    double salarioMensal, saldo, limite;
    int numeroConta;


};

#endif //CONTA_H