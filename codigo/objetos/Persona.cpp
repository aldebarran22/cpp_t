#include "Persona.h"

Persona::Persona()
{
}

Persona::Persona(std::string nombre, int edad, double altura)
{
	// this es obligatorio para deshacer la ambiguedad
	this->nombre = nombre;
	this->edad = edad;
	this->altura = altura;
}


std::string Persona::to_string()
{
	// Aquí no es obligatorio this:
	return this->nombre + " " + std::to_string(this->edad) + " " + std::to_string(this->altura);
}

Persona::~Persona()
{
}
