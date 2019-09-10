#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

class Funcionario
{
    public:
        Funcionario();
        virtual double CalcularSalario()=0;
        virtual std::string ToString()=0;

        std::string getNome();
        int getMatricula();

        void setNome(std::string nome);
        void setMatricula(int matricula);

    protected:
        std::string nome;
        int matricula;
};

#endif //FUNCIONARIO_H