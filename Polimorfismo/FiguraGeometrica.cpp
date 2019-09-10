#include "FiguraGeometrica.h"
#include <iostream>
#include <string>

using namespace std;

FiguraGeometrica::FiguraGeometrica()
{
    nome = "ND";
    //ctor
}

string FiguraGeometrica::getNome()
{
    return nome;
}

double FiguraGeometrica::CalcularArea()
{
}
