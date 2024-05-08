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

bool Persona::operator<(const Persona &p) const
{
	return this->edad < p.edad;
}

bool operator==(const Persona &p1, const Persona &p2)
{
	return p1.nombre == p2.nombre && p1.edad == p2.edad && p1.altura == p2.altura && p1.dir == p2.dir;
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
