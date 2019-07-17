#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"


int main(){
    double pagto = 0;
    Pagamento f1 = Pagamento();
    Pagamento f2 = Pagamento();
    
	f1.setNomeDoFuncionario("Aline");
    f1.setValorDoPagamento(600);
    
	f2.setNomeDoFuncionario("Joana");
    f2.setValorDoPagamento(1550);
    
	ControleDePagamentos controle = ControleDePagamentos();
    controle.setPagamento(f1,0);
    controle.setPagamento(f2,1);

    pagto = controle.calculaTotalDePagamentos();

    std::cout << "Pagamento: " << pagto << std::endl;
    std::cout << controle.existePagamentoParaFuncionario("Aline") << std::endl;
    std::cout << controle.existePagamentoParaFuncionario("Joana") << std::endl;
    return 0;
}
