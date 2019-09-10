#include "Funcionario.h"
#include "Assalariado.h"
#include <sstream>
#include <iostream>


Assalariado::Assalariado()
{
    nome = "ND";
    matricula = 0;
    //ctor
}

Assalariado::Assalariado(std::string nome, int matricula, double salario)
{
    setNome(nome);
    setMatricula(matricula);
    setSalario(salario);
    //ctor
}

double Assalariado::CalcularSalario()
{
    return salario;
}

void Assalariado::setSalario(double salario)
{
    this->salario = salario;
}

double Assalariado::getSalario()
{
    return salario;
}

std::string Assalariado::ToString()
{
    std::stringstream resumo;

    resumo << "\nAssalariado\n" << std::endl
           << "Nome: " << nome << std::endl
           << "Matricula: " << matricula << std::endl
           << "Salario: " << salario << std::endl;

    return resumo.str();
}