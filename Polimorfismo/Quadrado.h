#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"
#include <iostream>
#include <string>

using namespace std;

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        Quadrado(double lado);

        double CalcularArea();

        double getLado();

        void setLado(double lado);


    protected:
        double lado;

};

#endif //QUADRADO_H