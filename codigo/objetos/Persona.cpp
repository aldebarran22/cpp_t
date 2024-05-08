#include "Persona.h"

Persona::Persona(){}


Persona::Persona(std::string nombre, int edad, double altura, Direccion dir)
{
	// this es obligatorio para deshacer la ambiguedad
	this->nombre = nombre;
	this->edad = edad;
	this->altura = altura;
	this->dir = dir;
}


std::string Persona::to_string()
{
	// Aquí no es obligatorio this:
	return this->nombre + " " + std::to_string(this->edad) + " " + std::to_string(this->altura) + " " + this->dir.to_string();
}

Persona::~Persona()
{
}
