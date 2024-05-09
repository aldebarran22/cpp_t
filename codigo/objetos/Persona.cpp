#include "Persona.h"

int Persona::contador = 0;

Persona::Persona(){
	Persona::contador++;
}

Persona::Persona(const Persona &p)
{
	this->nombre = p.nombre;
	this->edad = p.edad;
	this->altura = p.altura;
	this->dir = p.dir;
	
	Persona::contador++;
}


Persona::Persona(std::string nombre, int edad, double altura, Direccion dir)
{
	// this es obligatorio para deshacer la ambiguedad
	this->nombre = nombre;
	this->edad = edad;
	this->altura = altura;
	this->dir = dir;
	
	Persona::contador++;
}

Persona Persona::operator++()
{
	// Prefijo
	this->edad++;
	return *this;
}

Persona Persona::operator++(int)
{
	// postfijo
	Persona copia(*this);
	this->edad++;
	return copia;
}

bool Persona::operator<(const Persona &p) const
{
	return this->edad < p.edad;
}

std::string Persona::to_string() 
{
	// Aquí no es obligatorio this:
	return "NO const: " + this->nombre + " " + std::to_string(this->edad) + " " + std::to_string(this->altura) + " " + this->dir.to_string();
}

std::string Persona::to_string() const
{
	// Aquí no es obligatorio this:
	return "const: " + this->nombre + " " + std::to_string(this->edad) + " " + std::to_string(this->altura) + " " + this->dir.to_string();
}

Persona::~Persona()
{
}
