#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

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

void Matriz::addFila(std::vector<int> fila)
{
	this->matriz.push_back(fila);
	this->filas++;
	this->cols = fila.size();
}

Matriz Matriz::loadCSV(std::string path, char sep)
{
	Matriz m(0,0);
	std::vector<int> fila;
	
	std::string filaCSV;
	std::ifstream fin;
	
	// Abrir el fichero para leer:
	fin.open(path, std::ios::in);	
	
	while (std::getline(fin, filaCSV)){
		fila = split(filaCSV, sep);
		m.addFila(fila);					
	}
	
	fin.close();
	
	return m;
}

void Matriz::saveCSV(std::string path, char sep)
{
	std::string filaCSV;
	std::ofstream fout;
	int i=0;
	
	// Abrir el fichero para grabar:
	fout.open(path, std::ios::out);	
	
	// Graba la matriz en un fichero con formato CSV:
	for (std::vector<int> fila : this->matriz){
		filaCSV = join(fila, sep);
		
		i++;
		
		// Escribir la fila en un fichero:
		fout << filaCSV;
		
		if (i < this->filas-1)
			fout << std::endl;
		
	}
	
	fout.close();	
}

Matriz::~Matriz()
{
}
