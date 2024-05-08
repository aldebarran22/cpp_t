#include "Direccion.h"


Direccion::Direccion(){}
													// Lista de iniciadores.
Direccion::Direccion(std::string calle_, int numero_):calle(calle_), numero(numero_)
{
}

std::string Direccion::to_string()
{
	return calle + " " + std::to_string(numero);
}

Direccion::~Direccion()
{
}
