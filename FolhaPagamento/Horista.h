#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"
#include <iostream>
#include <string>

class Horista : public Funcionario
{
    public:
        Horista();

        Horista(std::string nome, int matricula, double taxa);

        double CalcularSalario();

        void setSalario(double salario);
        void setTaxa(double taxa);
        void setHorasTrabalhadas(int horasTrabalhadas);

        double getSalario();
        double getTaxa();
        int getHorasTrabalhadas();
        
        std::string ToString();

    private:
        double salario;
        double taxa;
        int horasTrabalhadas;

};

#endif 