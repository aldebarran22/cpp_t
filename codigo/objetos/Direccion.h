#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>

class Direccion
{
	// Att. privados
	std::string calle;
	int numero;
	
	public:
		//Direccion(); Si metemos el constructor por defecto da problemas de ambiguedad porque coincide con el otro.
		Direccion(std::string="", int=0);
		std::string to_string() const;
		~Direccion();
	protected:
};

#endif
