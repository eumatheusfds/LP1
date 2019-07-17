#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento{
     private:
        double valorDoPagamento;
        std::string nomeDoFuncionario;

    public:
        void setValorDoPagamento(double valorDoPagamento);
        void setNomeDoFuncionario(std::string nomeDoFuncionario);
        double getValorDoPagamento();
        std::string getNomeDoFuncionario();

};

#endif
