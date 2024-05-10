// Time.cpp: implementation of the Time class.
//
//////////////////////////////////////////////////////////////////////

#include "Time.h"
#include "TimeException.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

int Time::N=0;

Time::Time(){
	this->hh = this->mm = this->ss = 0;
	Time::N++;
}

Time::Time(long segundos){
	this->repartir(segundos / 3600.0);
	this->ajustar();
}

Time::Time(int hh, int mm, int ss){
	
	if (hh < 0 || hh > 23){
		throw TimeException("Las horas "+std::to_string(hh) + " no son correctas");
	}
	
	if (mm < 0 || mm > 59){
		throw TimeException("Los minutos "+std::to_string(mm) + " no son correctos");
	}
	
	if (ss < 0 || ss > 59){
		throw TimeException("Los segundos "+std::to_string(ss) + " no son correctos");
	}
	
	this->hh = hh;
	this->mm = mm;
	this->ss = ss;

	//this->ajustar();
}

Time::Time(double horas){
	this->repartir(horas);
	this->ajustar();
}

void Time::setHH(int HH){
	
	if (HH < 0 || HH > 23) 
		throw TimeException("Las horas: "+std::to_string(HH) + " no son correctas" );   
	else
		this->hh = HH; 
}

void Time::setMM(int MM){
	
	if (MM < 0 || MM > 59) 
		throw TimeException("Los minutos: "+std::to_string(MM) + " no son correctos" );   
	else
		this->mm = MM; 
}

void Time::setSS(int SS){
	
	if (SS < 0 || SS > 59) 
		throw TimeException("Los segundos: "+std::to_string(SS) + " no son correctos" );   
	else
		this->ss = SS; 
}

void Time::repartir(double horas){
	double auxm, auxs;

	this->hh = (int)horas;
	auxm = (horas - this->hh) * 60.0;	
	this->mm = (int)auxm;
	auxs = (auxm - this->mm) * 60.0; 
	this->ss = (int)auxs;
}

void Time::ajustar(){

	if (this->ss > 59){
		this->mm = this->mm + (this->ss / 60);
		this->ss = this->ss % 60;
	}

	if (this->mm > 59){
		this->hh = this->hh + (this->mm / 60);
		this->mm = this->mm % 60;
	}
}

double Time::toHoras() const {
	return(this->hh + this->mm / 60.0 + this->ss / 3600.0);
}

long Time::toSegundos() const {
	return (this->hh * 3600 + this->mm * 60 + this->ss);
}

string Time::toString() const {
	string hora;
	char cadena[200];

	sprintf(cadena, "%02d:%02d:%02d", this->hh, this->mm, this->ss);
	hora = cadena;
	return (hora);
}


Time &Time::operator =(const Time &hora){
	this->hh = hora.getHH();
	this->mm = hora.getMM();
	this->ss = hora.getSS();

	return *this;
}


// funciones externas:
/*
const Time Time::operator +(const Time &hora2){
	long h1 = this->toSegundos();
	long h2 = hora2.toSegundos();

	h1 += h2;
	//return(Time(h1));
	return(Time((this->toSegundos() + hora2.toSegundos())));
}*/

const Time Time::operator -(const Time &hora2){
	long h1 = this->toSegundos();
	long h2 = hora2.toSegundos();

	h1 -= h2;
	return(Time(h1));
}

 long Time::toSegundos(double hh){ 
	return (hh * 3600.0); 
}


Time::~Time(){}
