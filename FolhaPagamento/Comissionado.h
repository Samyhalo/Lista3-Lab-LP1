#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"
#include <iostream>
#include <string>

class Comissionado : public Funcionario
{
    public:
        Comissionado();

        Comissionado(std::string nome, int matricula, double taxa);

        double CalcularSalario(int horas);

        void setSalario(double salario);
        void setTaxa(double taxa);

        double getSalario();
        double getTaxa();
        
        std::string ToString();

    private:
        double salario;
        double taxa;

};

#endif 