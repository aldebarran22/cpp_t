#ifndef PUNTO2D_H
#define PUNTO2D_H

#include <string>

class Punto2D
{
	int x, y;
	
	public:
		Punto2D();
		Punto2D(int, int);		
		std::string to_string() const; // El método funciona para objetos constantes y no constantes
		void desplazar(int);
		Punto2D desplazarCopia(int);
		float calcularDistancia(const Punto2D &) const;
		Punto2D operator+(const Punto2D &);
		~Punto2D();
	protected:
};

#endif
