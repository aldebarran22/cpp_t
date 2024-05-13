
#include <vector>
#include <map>
#include <string>
#include <iostream>


void testMapa(){
	std::map<int, std::string> mapa = {{121, "Jorge"}, {223, "Sonia"}, {445, "Ana"}, {11, "Julian"}};
	std::map<int, std::string>::iterator it;
	
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
	
}

int main(){
	testMapa();
	return 0;
}



