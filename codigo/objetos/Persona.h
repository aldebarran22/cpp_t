#ifndef PERSONA_H
#define PERSONA_H

#include <string>

#include "Direccion.h"

class Persona
{
	private:
		std::string nombre;
		int edad;
		double altura;
		Direccion dir;
	
	public:
		Persona();
		Persona(std::string, int, double, Direccion);
		std::string to_string();
		~Persona();
	protected:
};

#endif
