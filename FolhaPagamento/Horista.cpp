#include "Horista.h"
#include <sstream>

Horista::Horista()
{
    nome = "ND";
    taxa=0;
    matricula=0;
}

Horista::Horista(std::string nome, int matricula, double taxa)
{
    setNome(nome);
    setMatricula(matricula);
    setTaxa(taxa);
}

double Horista::CalcularSalario()
{
    double total = 0;
    int resto = 0;
    if(horasTrabalhadas>40)
    {
        resto = horasTrabalhadas - 40;
        total = 40*taxa + resto*taxa*1.5;
        return total*4;
    }else if(horasTrabalhadas<40)
    {
        total = horasTrabalhadas*taxa;
        return total*4;
    }
}

void Horista::setSalario(double salario)
{
    this->salario = salario;
}

void Horista::setTaxa(double taxa)
{
    this->taxa = taxa;
}

void Horista::setHorasTrabalhadas(int horasTrabalhadas)
{
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::getSalario()
{
    return salario;
}

double Horista::getTaxa()
{
    return taxa;
}

int Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}

std::string Horista::ToString()
{
    std::stringstream resumo;

    resumo << "\nHorista\n" << std::endl
           << "Nome: " << nome << std::endl
           << "Matricula: " << matricula << std::endl
           << "Salario: " << CalcularSalario() << std::endl;

    return resumo.str();
}