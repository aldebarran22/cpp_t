#include <iostream>

#include "Punto2D.h"

Punto2D::Punto2D()
{
	this->x = this->y = 0;
}

Punto2D::Punto2D(int x2, int y2):x(x2),y(y2){}
	
std::string Punto2D::to_string()
{
	return "[" + std::to_string(this->x) + "," + std::to_string(this->y) + "]";
}

Punto2D::~Punto2D()
{
}
