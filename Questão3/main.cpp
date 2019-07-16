#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;
int main() {

	Invoice item1 = Invoice(2, "pendrive", 3, 22.5);
	Invoice item2 = Invoice();
	
	item2.setnItem(1);
	item2.setDescricao("cabo hdmi");
	item2.setQtd(1);
	item2.setPreco(15);
	
	cout << "Numero do item: " << item1.getnItem() << endl << "Descricao: " << item1.getDescricao() << endl << "Quantidade: " << item1.getQtd() << endl << "Preco:  " << item1.getPreco() << endl << "Fatura: "<< item1.getInvoiceAmount() << endl << endl;
	cout << "Numero do item: " << item2.getnItem() << endl << "Descricao: " << item2.getDescricao() << endl << "Quantidade: " << item2.getQtd() << endl << "Preco:  " << item2.getPreco() << endl << "Fatura: "<< item1.getInvoiceAmount() << endl;
	



	return 0;
}
