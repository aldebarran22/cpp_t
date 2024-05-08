/* Pruebas con casting, enum */

#include <iostream>
#include <string>

enum coordenadas {NORTE, ESTE, OESTE=5, SUR};


void imprimir(float valor){
	std::cout << "valor: " << valor << std::endl;
}



int main(){
	double valor = 34.6677;
	coordenadas c = NORTE;
	std::string nombre = "Juan Luis";
	
	imprimir(34.5);
	
	int entero = (int) valor;  // Al estilo C
	int entero2 = static_cast<int>(valor); // Al estilo C++
	
	std::cout << "Entero: " << entero2 << std::endl;
	
	// Casting const : quitar el efecto de const:
	const char *ptr = nombre.c_str();
	char *ptr2 = const_cast<char *>(ptr);
	std::cout << "ptr2: " << ptr2 << std::endl;
	*ptr2 = 'X';
	std::cout << "ptr2: " << ptr2 << std::endl;
	std::cout << "nombre: " << nombre << std::endl;
	
	
	
}
