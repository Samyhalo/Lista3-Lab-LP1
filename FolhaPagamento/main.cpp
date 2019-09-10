#include <iostream>
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha();

    Funcionario *assl = new Assalariado();
    Funcionario *hor = new Horista();

    assl->setNome("Franklin Anthony");
    assl->setMatricula(1);
    ((Assalariado *)assl)->setSalario(1200);

    hor->setNome("Jose Antonio");
    hor->setMatricula(3);
    ((Horista *)hor)->setTaxa(12);
    ((Horista *)hor)->setHorasTrabalhadas(45);

    sgf.setFuncionarios(assl);
    sgf.setFuncionarios(hor);

    cout << assl->ToString();
    cout << hor->ToString() << endl;

    cout << "Total de pagamento na folha: " << sgf.CalculaValorTotalFolha(1000000) << endl;
    //cout << "Salario mensal funcionario de matricula 2: " << sgf.ConsultaSalarioFuncionario() << endl;

    try{
        cout << sgf.ConsultaSalarioFuncionario(5);
    }catch(FuncionarioNaoExisteException e){
        cerr << e.what()<<endl;
    }
    
    try{
        cout << sgf.CalculaValorTotalFolha(50);
    }catch(OrcamentoEstouradoException e){
        cerr << e.what()<<endl;
    }

    return 0;
}