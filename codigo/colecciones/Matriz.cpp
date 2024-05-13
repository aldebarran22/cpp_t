#include "Matriz.h"

#include <iostream>
#include <cstdlib>

Matriz::Matriz(int filas, int cols)
{
	this->filas = filas;
	this->cols = cols;
	
	for (int i = 0 ; i < filas ; i++){
		std::vector <int> fila;
		
		for (int j = 0 ; j < cols ; j++){
			fila.push_back(std::rand() % 100);  	
		}
		this->matriz.push_back(fila);
	}
}

void Matriz::print()
{
	for (std::vector<int> fila : this->matriz){
		for (int num : fila){
			std::cout << num << "\t";
		}
		std::cout << std::endl;
	}
}

Matriz::~Matriz()
{
}
