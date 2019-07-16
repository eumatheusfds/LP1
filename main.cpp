#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

int main() {
 
 	Pessoa pessoa1 = Pessoa("Tekpix");
 	Pessoa pessoa2 = Pessoa("Theusin", 18, "(083) 99643-7063");
 	
 	pessoa1.setIdade(5);
 	pessoa1.setTelefone("(083) 0800-777-7000");

	cout << "NOME: "<< pessoa1.getNome() << endl << "IDADE: " << pessoa1.getIdade() << endl << "TELEFONE: " << pessoa1.getTelefone() << endl << endl;
	cout << "NOME: "<< pessoa2.getNome() << endl <<"IDADE: " <<  pessoa2.getIdade() << endl << "TELEFONE: " << pessoa2.getTelefone() << endl;







	return 0;
}
