#ifndef PUNTO2D_H
#define PUNTO2D_H

#include <string>
#include <iostream>

class Punto2D
{
	// Atributos
	int x, y;
	
	// Funciones friend: NO existe this porque es una función externa a la clase:
	friend bool operator==(const Punto2D &, const Punto2D &);
	friend std::ostream & operator<<(std::ostream &os, const Punto2D &p);
	
	
	public:
		Punto2D();
		Punto2D(int, int);		
		std::string to_string() const; // El método funciona para objetos constantes y no constantes
		void desplazar(int);
		Punto2D desplazarCopia(int);
		float calcularDistancia(const Punto2D &) const;
		Punto2D operator+(const Punto2D &);
		//bool operator==(const Punto2D &);
		~Punto2D();
	protected:
};

#endif
