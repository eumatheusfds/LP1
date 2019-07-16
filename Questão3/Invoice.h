#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;
class Invoice{
	public:
		Invoice();
		Invoice(int nItem, string descricao, int qtd, double preco);
		void setnItem(int nItem);
		void setDescricao(string descricao);
		void setQtd(int qtd);
		void setPreco(double preco);
		int getnItem();
		string getDescricao();
		int getQtd();
		double getPreco();
		double getInvoiceAmount();
		
		
		
	private:
		int nItem;
		string descricao;
		int qtd;
		double preco;
};

#endif
