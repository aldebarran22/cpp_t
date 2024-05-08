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
	
}

Vector::~Vector()
{
}
