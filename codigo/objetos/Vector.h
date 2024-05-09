#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	int *ptr;
	int n;
	int pos;
	
	void copiar(const Vector &);
	
	public:
		Vector(int = 10);
		
		// Eliminar el constructor copia y el operador de asignacion
		//Vector(const Vector &)=delete;
		//Vector &operator=(const Vector &)=delete;
		
		// Definir el constructor copia y el operador =
		Vector(const Vector &);
		Vector &operator=(const Vector &);
		
		// Operador +: concatenar
		const Vector operator+(const Vector &);	
				
		
		bool add(int);
		void print();
		
		int len(){ return pos; }
		int capacity(){ return n; }
		const int *getPtr(){ return ptr; }
		
		~Vector();
	protected:
};

#endif
