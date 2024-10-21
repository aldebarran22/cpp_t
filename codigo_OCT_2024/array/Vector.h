#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	int *ptr;
	int n; // Tamaño total del array:
	int pos; // Marca la primera casilla libre del array.
	
	public:
		Vector(int=10);
		
		// Si no queremos utilizar el const. copia y operador = (lo borramos)
		//Vector(const Vector &)=delete;
		//Vector & operator=(const Vector &)=delete;
		
		Vector(const Vector &);
		Vector & operator=(const Vector &);
		
		bool push(int);
		int length(){ return this->pos; } 
		int capacity(){ return this->n; }
		void print();
		~Vector();
	protected:
};

#endif
