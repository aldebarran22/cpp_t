
#include "funciones_amigas.h"
#include "Persona.h"


bool operator==(const Persona &p1, const Persona &p2)
{
	return p1.nombre == p2.nombre && p1.edad == p2.edad && p1.altura == p2.altura && p1.dir == p2.dir;
}

std::ostream & operator<<(std::ostream &os, const Persona &p)
{
	return os << p.nombre << " " << p.edad << " " << p.altura << " " << p.dir;
}

std::istream & operator>>(std::istream &is, Persona &p)
{
	std::getline(is, p.nombre);
	is >> p.edad >> p.altura >> p.dir;
	return is;
}

std::ostream & operator<<(std::ostream &os, const Direccion &dir)
{
	return os << dir.calle << " " << dir.numero;
}

std::istream & operator>>(std::istream &is, Direccion &dir)
{
	std::getline(is, dir.calle);
	is >> dir.numero;
	return is;
}

