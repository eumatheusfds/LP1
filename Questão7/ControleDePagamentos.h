#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos{
    private:
        Pagamento pagamentos[2];
	
	public:
		void setPagamento(Pagamento pgt, int pos);
		double calculaTotalDePagamentos();
		bool existePagamentoParaFuncionario(std::string nome);

};



#endif
