#include <iostream>

#include "Vector.h"

Vector::Vector(int n)
{
	this->n = n;
	this->pos = 0;
	this->ptr = new int[n];
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
