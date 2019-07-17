#include "ControleDePagamentos.h"


void ControleDePagamentos::setPagamento(Pagamento pgt, int pos){
     pagamentos[pos].setNomeDoFuncionario(pgt.getNomeDoFuncionario());
     pagamentos[pos].setValorDoPagamento(pgt.getValorDoPagamento());
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double soma = 0;
    for(int i = 0; i < 2; i++){
        soma += pagamentos[i].getValorDoPagamento();
    }
    return soma;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome){
    for(int i = 0; i < 2; i++){
        if(pagamentos[i].getNomeDoFuncionario() == nome)
            return true;
    }
    return false;
}
