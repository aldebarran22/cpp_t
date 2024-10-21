#include <iostream>
#include <algorithm>

#include "Vector.h"

Vector::Vector(int n)
{
	this->n = n;
	this->pos = 0; // primera casilla libre, la primera.
	this->ptr = new int[n];	
	
	std::cout << "Dir. de memoria: " << this->ptr << std::endl;
}

Vector::Vector(const Vector &v)
{
	// Reservar el mismo tamaño que tenga v
	this->ptr = new int[v.n];
	
	// Copiar los datos del puntero ptr de v a this:
	
	// Inicio (puntero origen), fin (puntero origen + nro elementos, puntero destino).
	std::copy(v.ptr, v.ptr+v.pos, this->ptr);
	
	// Copiar el resto de atributos
	this->n = v.n;
	this->pos = v.pos;
	
}
	
Vector & Vector::operator=(const Vector &v)
{
	// liberar la memoria ocupada (en this)
	
	// Reservar el mismo tamaño que tenga v
	
	// Copiar los datos del puntero ptr
	
	// Copiar el resto de atributos
	
	// Devolver una ref a this
	
}

bool Vector::push(int item)
{
	if (this->pos < this->n)
	{
		this->ptr[this->pos] = item;
		this->pos++;
		return true;
		
	} else 
		return false;
}

void Vector::print()
{
	std::cout << "[ ";
	for (int i = 0 ; i < this->pos ;  i++){
		std::cout << this->ptr[i] << " ";
	}
	std::cout << "]" << std::endl;
}

Vector::~Vector()
{
	delete [] this->ptr;
	this->ptr = nullptr;
}
