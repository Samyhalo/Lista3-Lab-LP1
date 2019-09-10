#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        
        virtual double CalcularArea()=0;

        string getNome();

    protected:
        string nome;

};

#endif //figurageometrica_h