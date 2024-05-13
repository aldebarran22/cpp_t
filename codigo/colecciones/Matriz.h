#ifndef MATRIZ_H
#define MATRIZ_H

#include <vector>

class Matriz
{
	int filas, cols;
	std::vector<std::vector<int>> matriz;
	
	public:
		Matriz(int=10, int=10);
		void print();
		~Matriz();
	protected:
};

#endif
