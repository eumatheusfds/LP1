#include <iostream>
#include <string>
#include "Horario.h"
using namespace std;

int main() {
	
	Horario horario1 = Horario();
	Horario horario2 = Horario(00, 25, 45);
	
	horario1.setHora(15);
	horario1.setMin(27);
	horario1.setSeg(38);
	
	horario2.avancarHorario();

	cout  << horario1.getHora() << ":" << horario1.getMin() << ":" << horario1.getSeg() << endl << endl;
	cout  << horario2.getHora() << ":" << horario2.getMin() << ":" << horario2.getSeg() << endl << endl;
	
	
	return 0;
}
