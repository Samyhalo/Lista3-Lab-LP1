#include "OrcamentoEstouradoException.h"
#include <iostream>
#include <string>

OrcamentoEstouradoException::OrcamentoEstouradoException()throw()
{
}

std::string OrcamentoEstouradoException::what()
{
    return erro;
}