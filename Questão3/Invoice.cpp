#include "Invoice.h"
#include <string>
using namespace std;

Invoice::Invoice(){
}

Invoice::Invoice(int nItem, string descricao, int qtd, double preco){
	this->nItem = nItem;
	this->descricao=descricao;
	if(qtd<0){
		this->qtd=0;
	}else{
		this->qtd=qtd;	
	}
	if (preco<0){
		this->preco=0.0;
	}else{
		this->preco=preco;
	}
}

void Invoice::setnItem(int nItem){
	this->nItem = nItem;
}

void Invoice::setDescricao(string descricao){
	this->descricao=descricao;
}

void Invoice::setQtd(int qtd){
	this->qtd=qtd;
}

void Invoice::setPreco(double preco){
	this->preco=preco;
}

int Invoice::getnItem(){
	return nItem;
}

string Invoice::getDescricao(){
	return descricao;
}

int Invoice::getQtd(){
	return qtd;
}

double Invoice::getPreco(){
	return preco;
}

double Invoice::getInvoiceAmount(){
	return getQtd() * getPreco();
}
