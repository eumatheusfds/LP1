#include "Horario.h"

Horario::Horario(){
}

Horario::Horario(int hora, int min, int seg){
	if(hora < 0 || hora > 23){
		this-> hora = 00;
	}else{
		this-> hora = hora;
	}
	
	if(min < 1 || min > 59){
		this-> min = 00;
	}else{
		this-> min = min;
	}
	
	if(seg < 1 || seg > 59){
		this -> seg = 00;
	}else{
		this-> seg = seg;
	}
}

void Horario::setHorario(int hora, int min, int seg){
	this-> hora = hora;
	this-> min = min;
	this-> seg = seg;
}

void Horario::avancarHorario(){
	if(seg < 59){
		seg++;
	}
	if(seg == 59 && min < 59){
        seg = 00;
        min++;
    }
	if(min == 59 && seg == 59){
        hora++;
        min=00;
        seg=00;

    }
}

int Horario::getHora(){
	return hora;
}

int Horario::getMin(){
	return min;
}

int Horario::getSeg(){
	return seg;
}

void Horario::setHora(int hora){
	this-> hora = hora;
}

void Horario::setMin(int min){
	this-> min = min;
}

void Horario::setSeg(int seg){
	this-> seg = seg;
}

