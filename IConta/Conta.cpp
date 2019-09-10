#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"
#include <iostream>
#include <string>

using namespace std;

Conta::Conta()
{
    nomeCliente = "ND";
    salarioMensal = 0;
    saldo = 0;
    limite = 0;
    numeroConta = 0;
    //ctor
}

Conta::Conta(string nomeCliente, double salarioMensal, double saldo, int numeroConta)
{
    setNomeCliente(nomeCliente);
    setSalarioMensal(salarioMensal);
    setSaldo(saldo);
    setNumeroConta(numeroConta);
    definirLimite();
    //sets
}

void Conta::definirLimite()
{
    this->limite = 2*this->salarioMensal;
} 

void Conta::sacar(double valor)
{
    this->saldo -= valor;   
}

void Conta::depositar(double valor)
{
    this->saldo += valor;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}

int Conta::getNumeroConta()
{
    return numeroConta;
}

void Conta::setNomeCliente(string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal)
{
    if(salarioMensal<0)
    {
        cout<<"Valor invalido"<<endl;
    }else
    {
        this->salarioMensal = salarioMensal;
    }
    
}

void Conta::setSaldo(double saldo)
{
    if(saldo<0)
    {
        cout<<"Saldo invalido"<<endl;
    }else
    {
        this->saldo = saldo;
    }
}

void Conta::setLimite(double limite)
{
    if(limite<0)
    {
        cout<<"Limite invalido"<<endl;
    }else
    {
        this->limite = limite;
    }
}

void Conta::setNumeroConta(int numeroConta)
{
    if(numeroConta<0)
    {
        cout<<"Numero de conta invalido"<<endl;
    }else
    {
        this->numeroConta = numeroConta;
    }
}