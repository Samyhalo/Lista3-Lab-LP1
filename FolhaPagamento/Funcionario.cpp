#include "Funcionario.h"

Funcionario::Funcionario()
{
    nome = "ND";
    matricula = 0;
    //ctor
}

std::string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getMatricula()
{
    return matricula;
}

void Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula)
{
    this->matricula = matricula;
}