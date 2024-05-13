#include "Matriz.h"

#include <iostream>
#include <iomanip>
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

std::string Matriz::to_string(int sep){
	
	for (std::vector<int> fila : this->matriz){
		std::string fila_csv = "";
		
		for (int num : fila){
			
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
