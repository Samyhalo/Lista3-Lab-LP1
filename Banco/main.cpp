#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"
#include <iostream>
#include <string>

int main(void)
{
    Conta *cc = new ContaCorrente("jose", 1, 2500, 1000);
    Conta *ce = new ContaEspecial("alberta", 4, 7000, 2000);
    Conta *cp = new Poupanca("carlos", 7, 4300, 1, 50);

    cc->depositar(33);
    ce->depositar(66);
    cp->depositar(144);

    cc->print();
    ce->print();
    cp->print();

    cc->sacar(4000);

    cc->print();

    cc->sacar(500);

    cc->print();

    return 0;
}