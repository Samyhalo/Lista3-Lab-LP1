#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#define MAX_VETOR 2
#include "Funcionario.h"
#include <iostream>
#include <string>

class SistemaGerenciaFolha
{
    public:
        void setFuncionarios(Funcionario *f);
        double CalculaValorTotalFolha(double orcamento);
        double ConsultaSalarioFuncionario(int id);

    private:
        Funcionario *funcionarios[MAX_VETOR];
        int i=0;
        double orcamento=0;
};

#endif