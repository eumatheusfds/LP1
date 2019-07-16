#ifndef HORARIO_H
#define HORARIO_H

class Horario{
	public:
		Horario();
		Horario(int hora, int min, int seg);
		void setHorario(int hora, int min, int seg);
		void avancarHorario();
		
		int getHora();
		int getMin();
		int getSeg();
		
		void setHora(int hora);
		void setMin(int min);
		void setSeg(int seg);
		
		
	private:
		int hora;
		int min;
		int seg;		
	
};

#endif
