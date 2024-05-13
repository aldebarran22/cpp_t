#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "Matriz.h"
#include "funciones.h"

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

std::string Matriz::to_string(char sep)
{
	std::string csv = "";
		
	//for (std::vector<int> fila : this->matriz){
	for (int i = 0 ; i < this->filas ; i++ ){
			
		csv += join(this->matriz.at(i), sep);
		
		// No se pone el salto de linea en la ultima fila
		if (i < this->filas-1)
			csv += "\n"; 
		
	}
	
	return csv;
}

void Matriz::print()
{
	for (std::vector<int> fila : this->matriz){
		for (int num : fila){
			std::cout << std::setw(2) << num << "\t";
		}
		std::cout << std::endl;
	}
}

Matriz::~Matriz()
{
}
