#ifndef MATRIZ_H
#define MATRIZ_H

#include <vector>
#include <string>

class Matriz
{
	int filas, cols;
	std::vector<std::vector<int>> matriz;
	
	public:
		Matriz(int=10, int=10);
		void print();
		std::string to_string(char=';');
		void saveCSV(std::string, char=';');
		static Matriz loadCSV(std::string, char=';');
		~Matriz();
	protected:
};

#endif
