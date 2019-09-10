#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include "Funcionario.h"
#include <exception>
#include <iostream>
#include <string>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException()throw();
        virtual std::string what();

    protected:
        std::string erro = "Funcionario nao existe";

};

#endif