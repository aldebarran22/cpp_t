#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>

class Direccion
{
	// Att. privados
	std::string calle;
	int numero;
	
	public:
		Direccion();
		Direccion(std::string="", int=0);
		std::string to_string();
		~Direccion();
	protected:
};

#endif
