#include "DateTime.h"

DateTime::DateTime(int dia, int mes, int anyo, int hora, int minutos, int segundos):Date(dia, mes, anyo), Time(hora,minutos,segundos)
{}

string DateTime::toString() const 
{
	int aux = Time::getHH();
	return Date::toString() + " " + Time::toString();
}

DateTime::~DateTime()
{
}
