#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include "Funcionario.h"
#include <exception>
#include <iostream>
#include <string>

class OrcamentoEstouradoException : public std::exception
{
    public:
        OrcamentoEstouradoException()throw();
        virtual std::string what();

    protected:
        std::string erro = "Orcamento estourado";

};

#endif