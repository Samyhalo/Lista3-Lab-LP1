#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(void)
{
    Conta *c1 = new Conta("Sam", 1300, 4000, 5432);
    ContaEspecial *c2 = new ContaEspecial("Joao", 2000, 10000, 4545);

    c1->definirLimite();
    c2->definirLimite();

    cout<<"Conta1:"<<endl;
    cout<<"Nome: "<<c1->getNomeCliente()<<" Salario: R$"<<c1->getSalarioMensal()<<" Saldo: R$"<<c1->getSaldo()<<" Conta: "<<c1->getNumeroConta()<<" Limite: R$"<<c1->getLimite()<<endl;
    cout<<"Conta2:"<<endl;
    cout<<"Nome: "<<c2->getNomeCliente()<<" Salario: R$"<<c2->getSalarioMensal()<<" Saldo: R$"<<c2->getSaldo()<<" Conta: "<<c2->getNumeroConta()<<" Limite: R$"<<c2->getLimite()<<endl;

    c1->sacar(3000);
    c2->sacar(2500);

    cout<<"Conta1:"<<endl;
    cout<<"Nome: "<<c1->getNomeCliente()<<" Salario: R$"<<c1->getSalarioMensal()<<" Saldo: R$"<<c1->getSaldo()<<" Conta: "<<c1->getNumeroConta()<<" Limite: R$"<<c1->getLimite()<<endl;
    cout<<"Conta2:"<<endl;
    cout<<"Nome: "<<c2->getNomeCliente()<<" Salario: R$"<<c2->getSalarioMensal()<<" Saldo: R$"<<c2->getSaldo()<<" Conta: "<<c2->getNumeroConta()<<" Limite: R$"<<c2->getLimite()<<endl;

    
    c1->depositar(5000);
    c2->depositar(3000);

    cout<<"Conta1:"<<endl;
    cout<<"Nome: "<<c1->getNomeCliente()<<" Salario: R$"<<c1->getSalarioMensal()<<" Saldo: R$"<<c1->getSaldo()<<" Conta: "<<c1->getNumeroConta()<<" Limite: R$"<<c1->getLimite()<<endl;
    cout<<"Conta2:"<<endl;
    cout<<"Nome: "<<c2->getNomeCliente()<<" Salario: R$"<<c2->getSalarioMensal()<<" Saldo: R$"<<c2->getSaldo()<<" Conta: "<<c2->getNumeroConta()<<" Limite: R$"<<c2->getLimite()<<endl;

    return 0;
}