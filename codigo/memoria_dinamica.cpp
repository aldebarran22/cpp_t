/* 
Reservar un array dinamico, rellenar de numeros aleatorios, imprimir, y liberar
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
	int *ptr = 0;
	
	// Inicializar la semilla de numeros aleatorios:
	std::srand(std::time(NULL));
	
	// Leer de teclado la cantidad de numeros:
	int n;
	
	std::cout << "Cuantos numeros queremos: ";
	std::cin >> n;
	
	// Reservar memoria:
	ptr = new int[n];
	 
	// Inicializar
	for (int i = 0 ; i < n ; i++){
		ptr[i] =  std::rand() % 100;
	}
	
	// Imprimir
	for (int i = 0 ; i < n ; i++){
		std::cout << ptr[i] << "  ";
	}
	std::cout << std::endl;
	
	// Liberar:
	delete [] ptr;
	ptr = 0;
	
}
