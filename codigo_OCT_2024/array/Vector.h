#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	int *ptr;
	int n; // Tamaño total del array:
	int pos; // Marca la primera casilla libre del array.
	
	public:
		Vector(int=10);
		bool push(int);
		int length(){ return this->pos; } 
		int capacity(){ return this->n; }
		void print();
		~Vector();
	protected:
};

#endif
