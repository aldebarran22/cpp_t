#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
	// tipo   nombreAtt
	std::string nombre;
	float peso;
	float altura;
	
	
	public:
		Persona(); // constructor por defecto
		Persona(std::string="", float=0.0, float=0.0);
		std::string to_string();
		~Persona();
	protected:
};

#endif
