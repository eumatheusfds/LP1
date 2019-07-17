#include "Pagamento.h"


void Pagamento::setValorDoPagamento(double valor){
    valorDoPagamento = valor;
}

void Pagamento::setNomeDoFuncionario(std::string nome){
    nomeDoFuncionario = nome;
}

double Pagamento::getValorDoPagamento(){
    return valorDoPagamento;
}

std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

