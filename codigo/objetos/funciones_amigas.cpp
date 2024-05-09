#include <climits>

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
	std::cout << "\nNombre:";
	std::getline(is, p.nombre);
	
	std::cout << "Edad:";
	is >> p.edad;
	
	std::cout << "Altura:";
	is >> p.altura;
	is.ignore(INT_MAX, '\n'); // Limpiar el \n despues de leer un numero y antes de leer la cadena.
	
	std::cout << "Direccion:";
	is >> p.dir;
	return is;
}

std::ostream & operator<<(std::ostream &os, const Direccion &dir)
{
	return os << dir.calle << " " << dir.numero;
}

std::istream & operator>>(std::istream &is, Direccion &dir)
{
	std::cout << "\nCalle:";
	std::getline(is, dir.calle);
	
	std::cout << "Numero:";
	is >> dir.numero;
	return is;
}

