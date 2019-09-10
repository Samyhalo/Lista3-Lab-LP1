#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

void SistemaGerenciaFolha::setFuncionarios(Funcionario *f)
{
    funcionarios[i] = f;
    i++;
}
 
double SistemaGerenciaFolha::CalculaValorTotalFolha(double orcamento)
{
    double valorTotal = 0;

    for(int i=0 ; i<MAX_VETOR ; i++){
        valorTotal += funcionarios[i]->CalcularSalario();
    }
    if(valorTotal > orcamento)
    {
        throw OrcamentoEstouradoException();
        return 0;
    }else
    {
        return valorTotal;
    }
}
    
double SistemaGerenciaFolha::ConsultaSalarioFuncionario(int id)
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        if(id == funcionarios[i]->getMatricula())
        {
            return funcionarios[i]->CalcularSalario();
        }
    }

    throw FuncionarioNaoExisteException();

    return 0;
}