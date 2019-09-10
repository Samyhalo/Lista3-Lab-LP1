#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    FiguraGeometrica *circ = new Circulo(3.5);
    FiguraGeometrica *quad = new Quadrado(4);
    FiguraGeometrica *tri = new Triangulo(4.6, 5);

    cout<<"area do quad: "<<quad->CalcularArea()<<endl;
    cout<<"area do tri: "<<tri->CalcularArea()<<endl;
    cout<<"area do circ: "<<circ->CalcularArea()<<endl;

    return 0;
}
/*
    -Polimorfismo é o ato de criar uma superclasse pai, que da a possibilidade
    para classes filhas invocar ou sobrescrever os 
    metodos da classe pai, com isso, o objeto terá formas diferentes.
    Basta criar um objeto do tipo da superclasse com o construtor da classe derivada
*/