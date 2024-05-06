/* 
Reservar un array dinamico, rellenar de numeros aleatorios, imprimir, y liberar
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
	
	// Inicializar la semilla de numeros aleatorios:
	std::srand(std::time(NULL));
	
	for (int i = 0 ; i < 30 ; i++){
		std::cout << std::rand() << "  ";
	}
	std::cout << std::endl;
	
}
