#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	int *ptr;
	int n;
	int pos;	
	
	public:
		Vector(int = 10);
		bool add(int);
		void print();
		int len(){ return pos; }
		~Vector();
	protected:
};

#endif
