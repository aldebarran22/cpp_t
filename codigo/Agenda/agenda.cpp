#include "agenda.h"

Agenda::Agenda()
{
}

void Agenda::addEvento(Date f, Hora h, string e)
{	
	eventos[f][h]= e;
}

void Agenda::println()
{
	map<Date, map<Hora, string> >::iterator it;
	map<Hora, string>::iterator it2;
	
	cout << "CONTENIDO AGENDA:" << endl;
	for (it = eventos.begin() ; it != eventos.end() ; it++)
	{
		cout << "FECHA: " << it->first << endl;
		for (it2 = it->second.begin() ; it2 != it->second.end();it2++)
			cout << "HORA: " << it2->first << endl <<
			        "EVENTO: " << it2->second << endl <<
			        "-------------------" << endl;
	}
}
map<Hora, string> Agenda::getEventos(Date f)
{
	return eventos[f];
}

Agenda::~Agenda()
{
}
