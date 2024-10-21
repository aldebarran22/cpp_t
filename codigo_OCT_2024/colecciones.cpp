// Colecciones de C++

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


int main(){
	std::vector<std::vector<int>> matriz;
	
	std::vector<int> numeros2(5);
	
	std::vector<int> numeros = {1,2,3,4,5};
	std::vector<int>::iterator it;
	std::vector<int>::reverse_iterator it2;
	
	std::vector<std::string> nombres = {"Pedro", "Miguel","Sofia","Ana"};
	std::vector<std::string>::iterator itcad;
	std::string buscar;
	
	// Añadir elementos al vector:
	numeros.push_back(12);
	numeros.push_back(22);
	
	// Tamaños en el vector:
	for (int i = 0 ; i < 30 ; i++){
		std::cout << "size: " << numeros2.size() << " capacity: " << numeros2.capacity() << std::endl;
		numeros2.push_back(i);
	}
	
	// Formas de recorrer un vector:
	for (int i = 0 ; i < nombres.size() ; i++){
		std::cout << nombres[i] << " " << nombres.at(i) << std::endl;
	}
	
	for (std::string nombre : nombres ){
		std::cout << nombre << std::endl;
	}
	std::cout << std::endl;
	
	for (int &valor : numeros){
		valor *= 10;
	}
	
	for (int valor : numeros){
		std::cout << valor << " ";
	}
	std::cout << std::endl;
	
	for (it = numeros.begin() ; it != numeros.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	for (it2 = numeros.rbegin() ; it2 != numeros.rend(); it2++){
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;
	
	// Buscar un nombre dentro de la coleccion de nombres:
	buscar = "Sofia";
	itcad = std::find(nombres.begin(), nombres.end(), buscar); 
	if (itcad == nombres.end()){
		std::cout << "No existe " << buscar << std::endl;
		
	} else {
		std::cout << "Existe " << *itcad << " posicion: " << itcad - nombres.begin() << std::endl;
	}
	
	//std::cout << nombres[20] << std::endl;
	//std::cout << nombres.at(20) << std::endl;
		
	return 0;	
}
