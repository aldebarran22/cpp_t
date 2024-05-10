#include "Direccion.h"


//Direccion::Direccion(){}
													// Lista de iniciadores.
Direccion::Direccion(std::string calle_, int numero_):calle(calle_), numero(numero_)
{
}

std::string Direccion::to_string() const
{
	return calle + " " + std::to_string(numero);
}

bool Direccion::operator==(const Direccion &d) const
{
	return this->calle == d.calle && this->numero == d.numero;
}

Direccion::~Direccion()
{
}
