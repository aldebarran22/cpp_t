
#include "funciones_amigas.h"
#include "Persona.h"


bool operator==(const Persona &p1, const Persona &p2)
{
	return p1.nombre == p2.nombre && p1.edad == p2.edad && p1.altura == p2.altura && p1.dir == p2.dir;
}

