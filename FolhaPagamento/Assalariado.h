#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"
#include <iostream>
#include <string>

class Assalariado : public Funcionario
{
    public:
        Assalariado();

        Assalariado(std::string nome, int matricula, double salario);

        double CalcularSalario();

        void setSalario(double salario);

        double getSalario();

        std::string ToString();

    private:
        double salario;

};

#endif 