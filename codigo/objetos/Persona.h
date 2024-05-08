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
		
		inline std::string getNombre(){ return nombre; }
		inline void setNombre(std::string nombre){ this->nombre=nombre; }
		
		inline int getEdad(){ return edad; }
		inline void setEdad(int edad){ this->edad = edad; }
		
		std::string to_string();
		~Persona();
	protected:
};

#endif
