#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include <string>

class Conta
{
protected:
    std::string nomeCliente;
    int numero;
    double saldo;
    double limite;

public:
    Conta();
    void sacar(double valor);
    void depositar(double valor);

    void setNomeCliente(std::string nomeCliente);
    void setNumero(int numero);
    void setSaldo(double saldo);
    void setLimite(double limite);

    std::string getNomeCliente();
    int getNumero();
    double getSaldo();
    double getLimite();

    virtual void print();

};


#endif //CONTA_H