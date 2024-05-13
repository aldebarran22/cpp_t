
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#include "funciones.h"
#include "Matriz.h"


void testMapa(){
	std::map<int, std::string> mapa = {{121, "Jorge"}, {223, "Sonia"}, {445, "Ana"}, {11, "Julian"}};
	std::map<int, std::string>::iterator it;
	std::map<int, std::string>::reverse_iterator it2;
	
	mapa.at(223) = "Sonia Sanz";
	mapa[199] = "Juan";
	
	//std::make_pair
	
	// Solo inserta si no existe: tampoco machaca la clave
	auto par = mapa.insert({121, "Jorge2"});	 
	
	
	// Recorrido con el iterador:
	for (it = mapa.begin(); it != mapa.end(); it++){
		std::cout << it->first << " " << it->second << std::endl;		
	}
	
	// Buscar por la clave, utilizando el metodo find:
	
	int numero = 200;
	std::cout << "\nBuscar: " << numero << std::endl;	
	it = mapa.find(numero);
	
	if (it == mapa.end()){
		std::cout << "No existe " << numero << std::endl;
		
	} else {
		std::cout << it->first << " " << it->second << std::endl;
	}
	
	// iterador reverse:
	std::cout << "It invertido: " << std::endl;
	
	for (it2 = mapa.rbegin() ; it2 != mapa.rend(); it2++){
			std::cout << it2->first << " " << it2->second << std::endl;
	}
	
}

void testMatriz(){
	Matriz m1, m2;

	m1.print();	
	std::cout << std::endl;		
	
	m1.saveCSV("matriz1.csv");
	
	std::cout <<"Contenido del fichero: matriz1.csv" << std::endl;
	m2 = Matriz::loadCSV("matriz1.csv");
	m2.print();
}

void testConversiones(){
	// Convertir de int a string y de string a int:
	int numero, numero2;
	std::string snumero;
	
	numero = 1234;
	snumero = std::to_string(numero);
	numero2 = std::stoi(snumero);
	
	std::cout << "numero: " << numero << " snumero: " << snumero << " numero2: " << numero2 << std::endl; 
}

void testsstream(){
	
	std::string cad = "nombre;apellidos;edad;altura";
	std::string col;
	
	std::istringstream is(cad);
	
	while (std::getline(is, col, ';'))
		std::cout << col << std::endl;
		
		
	std::string csv = "123;44;55;22;11;77";
	std::vector<int> numeros = split(csv);
	
	std::cout << "csv: " << csv << std::endl;
	for (int i : numeros)
		std::cout << i << "\t";
		
	std::cout << std::endl;
	
	std::string csv2 = join(numeros);
	std::cout << "csv2: " << csv2 << std::endl;
}

void mapaIdioma(std::string idioma){
	// Cargar un fichero de idioma en un mapa.
	std::string fila, clave, valor;
	std::ifstream fin;
	int pos;
	std::string path = "..\\idiomas\\diccionario_"+idioma+".txt";
	
	std::cout << "Cargando fichero: " << path << std::endl;
	
	// Abrir el fichero para leer:
	fin.open(path, std::ios::in);	
	
	while (std::getline(fin, fila)){
		pos = fila.find("=");
		clave = fila.substr(0, pos);
		valor = fila.substr(pos+1);
		
		std::cout << fila << " pos: " << pos << std::endl;
		std::cout << "Clave: " << clave << " valor: " << valor << std::endl;
		
	}
	
	fin.close();
}


int main(){
	
	std::srand(std::time(nullptr));
	
	//testMapa();
	//testMatriz();
	//testConversiones();
	//testsstream();
	
	mapaIdioma("es");
	return 0;
}



