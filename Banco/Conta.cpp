#include "Conta.h"
#include <iostream>
#include <string>

Conta::Conta()
{
    nomeCliente = "ND";
    numero = 0;
    saldo = 0;
}

void Conta::sacar(double valor)
{
    if(valor <= saldo+limite)
    {
        saldo = saldo-valor;
    }else
    {
        std::cout<<"erro, valor R$"<<valor<<" indisponivel."<<std::endl;
    }
}

void Conta::depositar(double valor)
{
    saldo = saldo+valor;
}

void Conta::setNomeCliente(std::string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

void Conta::setNumero(int numero)
{
    this->numero = numero;
}

void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}

void Conta::setLimite(double limite)
{
    this->limite = limite;
}

std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}

void Conta::print()
{
}