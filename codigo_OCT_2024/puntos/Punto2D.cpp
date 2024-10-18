#include <iostream>
#include <cmath>

#include "Punto2D.h"


Punto2D::Punto2D()
{
	this->x = this->y = 0;
}

Punto2D::Punto2D(int x2, int y2):x(x2),y(y2){}
	
	
void Punto2D::desplazar(int valor)
{
	// Modifica a this
	this->x *= valor;
	this->y *= valor;
}
	
Punto2D Punto2D::desplazarCopia(int valor)
{
	// Devuelve una copia modificada, pero this se queda igual que antes.
	
	// Copiar utilizando el constructor copia: Punto2D(const Punto2D &);
	Punto2D aux(*this);
	
	aux.desplazar(valor);
	return aux;
}

Punto2D Punto2D::operator+(const Punto2D &otro)
{
	return Punto2D(this->x + otro.x, this->y + otro.y);
}

float Punto2D::calcularDistancia(const Punto2D &otro) const
{
	return std::sqrt( std::pow(this->x - otro.x, 2) + std::pow(this->y - otro.y, 2) );
}
	
std::string Punto2D::to_string() const
{
	return "[" + std::to_string(this->x) + "," + std::to_string(this->y) + "]";
}

Punto2D::~Punto2D()
{
}
