#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	int *ptr;
	int n; // Tamaño total del array:
	int pos; // Marca la primera casilla libre del array.
	
	public:
		Vector(int=10);
		
		// Si no queremos utilizar el const. copia y operador = (lo borramos) a partir de C++11
		//Vector(const Vector &)=delete;
		//Vector & operator=(const Vector &)=delete;
		
		Vector(const Vector &);
		Vector & operator=(const Vector &);
		
		bool push(int);
		int length(){ return this->pos; } 
		int capacity(){ return this->n; }
		//int *getPtr(){ return this->ptr; } // LOS ATT. QUE SON PUNTEROS SE DEVUELVE COMO CONST
		const int *getPtr(){ return this->ptr; }
		void print();
		~Vector();
	protected:
};

#endif
