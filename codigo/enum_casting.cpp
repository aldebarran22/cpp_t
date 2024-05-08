/* Pruebas con casting, enum */

#include <iostream>
#include <string>

double valor = 999.0;

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
	
	for (int i = 0 ; i < 10 ; i++)
		std::cout << "i: " << i << std::endl;
	//std::cout << "i: " << i << std::endl; // Está fuera del ámbito del for
	
	std::cout << "valor local: " << valor << " valor global: " << ::valor << std::endl;
	
	int a = 10;
	int b = 20;
	
	b = ++a; // ++a; b = a;
	b = a++; // b = a; a++;
	
	return 0;
}
