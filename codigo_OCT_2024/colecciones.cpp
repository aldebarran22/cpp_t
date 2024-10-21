// Colecciones de C++

#include <vector>
#include <string>
#include <iostream>


int main(){
	std::vector<std::vector<int>> matriz;
	
	std::vector<int> numeros2(5);
	
	std::vector<int> numeros = {1,2,3,4,5};
	std::vector<std::string> nombres = {"Pedro", "Miguel","Sofia","Ana"};
	
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
	
	//std::cout << nombres[20] << std::endl;
	//std::cout << nombres.at(20) << std::endl;
		
	return 0;	
}
