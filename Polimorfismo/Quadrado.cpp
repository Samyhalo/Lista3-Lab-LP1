#include "FiguraGeometrica.h"
#include "Quadrado.h" 
#include <iostream>
#include <string>

using namespace std;

Quadrado::Quadrado()
{
    nome = "Quadrado";
    lado = 0;
    //ctor
}

Quadrado::Quadrado(double lado)
{
    setLado(lado);
}

double Quadrado::CalcularArea()
{
    return lado*lado;
}

double Quadrado::getLado()
{
    return lado;
}

void Quadrado::setLado(double lado)
{
    this->lado = lado;
}