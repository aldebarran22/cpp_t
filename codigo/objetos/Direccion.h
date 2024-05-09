#ifndef DIRECCION_H
#define DIRECCION_H

#include <iostream>
#include <string>

#include "funciones_amigas.h"

class Direccion
{
	// Funciones friend:
	friend std::ostream & operator<<(std::ostream &, const Direccion &);
	friend std::istream & operator>>(std::istream &, Direccion &);
	friend std::istream & operator>>(std::istream &, Persona &);
	
	// Att. privados
	std::string calle;
	int numero;
	
	public:
		//Direccion(); Si metemos el constructor por defecto da problemas de ambiguedad porque coincide con el otro.
		Direccion(std::string="", int=0);
		std::string to_string() const;
		bool operator==(const Direccion &) const;
		~Direccion();
	protected:
};

#endif
