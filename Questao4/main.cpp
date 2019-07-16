#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

int main() {
	
	Data data1 = Data(01, 02, 2001);
	Data data2 = Data(06, 12, 2016);
	Data data3 = Data();
	
	data3.setDia(02);
	data3.setMes(03);
	data3.setAno(2001);
	
	cout << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << "/" << endl << endl;
	cout << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << "/" << endl << endl;
	cout << "Comparando: " << data2.compara(data3) << endl << endl;
	cout << "Bissexto: " << data3.isBissexto() << endl << endl;
	cout << "Mes de data1: " << data1.getMesExtenso() << endl << "Mes de data2: " << data2.getMesExtenso() << endl << "Mes de data3: " << data3.getMesExtenso() << endl;


	return 0;
}
