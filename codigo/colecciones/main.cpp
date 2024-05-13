
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

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
	Matriz m1;
	Matriz m2(5,5);
	
	m1.print();	
	std::cout << std::endl;
	m2.print();
	
	std::cout << std::endl << m2.to_string() << std::endl;
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

int main(){
	
	std::srand(std::time(nullptr));
	
	//testMapa();
	testMatriz();
	//testConversiones();
	return 0;
}



