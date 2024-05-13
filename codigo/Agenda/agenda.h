#ifndef AGENDA_H
#define AGENDA_H

#include <string>
#include <map>

#include "hora.h"
#include "date.h"

using namespace std;

class Agenda
{
	map<Date, map<Hora, string> > eventos;
	
	public:
		Agenda();
		void addEvento(Date, Hora, string);
		map<Hora, string> getEventos(Date);
		void println();
		~Agenda();
	protected:
};

#endif
