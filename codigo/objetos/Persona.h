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
		
		static int contador;
	
	public:
		Persona();
		Persona(std::string, int, double, Direccion);
		Persona(const Persona &);
		
		
		inline std::string getNombre() const { return nombre; }
		inline void setNombre(std::string nombre){ this->nombre=nombre; }
		
		inline int getEdad() const { return edad; }
		inline void setEdad(int edad){ this->edad = edad; }
		
		static int getContador(){ return Persona::contador; }
		
		std::string to_string();
		std::string to_string() const;
		~Persona();
		
	protected:
};

#endif