#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
	private:
		std::string nombre;
		int edad;
		double altura;
	
	public:
		Persona();
		Persona(std::string, int, double);
		std::string to_string();
		~Persona();
	protected:
};

#endif
