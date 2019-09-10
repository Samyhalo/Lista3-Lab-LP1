#include "FuncionarioNaoExisteException.h"
#include <iostream>
#include <string>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()throw()
{
}

std::string FuncionarioNaoExisteException::what()
{
    return erro;
}