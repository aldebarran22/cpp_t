#include <iostream>
#include <algorithm>

#include "Vector.h"

Vector::Vector(int n)
{
	this->n = n;
	this->pos = 0;
	this->ptr = new int[n];
}

void Vector::copiar(const Vector &v)
{
	// Copiar n y pos
	this->n = v.n;
	this->pos = v.pos;
	
	// Reservar tanta memoria como tenga v
	this->ptr = new int[v.n];
	
	// Copiar los datos de v a this
	/*
	for (int i = 0 ; i < v.pos ; i++)
	{
		this->ptr[i] = v.ptr[i]
	}*/
	std::copy(v.ptr, v.ptr+v.n, this->ptr);
}

Vector::Vector(const Vector &v)
{
	this->copiar(v);
}

const Vector Vector::operator+(const Vector &v)
{
	// Concatenar uno a continuación del otro. En un nuevo vector:	
	int total = this->pos + v.pos; // No dejamos elementos vacios
	
	// Crear un nuevo vector:
	Vector resul(total);
	resul.pos = total;
	
	// Copiar los elementos de this:
	std::copy(this->ptr, this->ptr+this->pos, resul.ptr);	
	
	// Copiar los elementos de v:
	std::copy(v.ptr, v.ptr+v.pos, resul.ptr+this->pos);
	
}
	
Vector & Vector::operator=(const Vector &v)
{
	// liberar la mem de this
	delete [] this->ptr;
	
	// Copiar n y pos
	// Reservar tanta memoria como tenga v
	// Copiar los datos de v a this
	this->copiar(v);
	
	// retornar la referencia a this
	return *this;
}

bool Vector::add(int num)
{
	if (this->pos < this->n){
		this->ptr[this->pos] = num;
		this->pos++;
		return true;
		
	} else {
		return false; // Ya no tenemos sitio en el array.
	}
}

void Vector::print()
{
	for (int i = 0 ; i < pos ; i++)
	{
		std::cout << this->ptr[i] << " ";
	}
	std::cout << std::endl;
}

Vector::~Vector()
{
	delete [] this->ptr;
	this->ptr = nullptr;
}
