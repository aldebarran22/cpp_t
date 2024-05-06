/* 
Reservar un array dinamico, rellenar de numeros aleatorios, imprimir, y liberar
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

/*
reservar()

imprimir()

liberar()*/


void reservaArray(){

	int *ptr = 0;
	
	// Inicializar la semilla de numeros aleatorios:
	std::srand(std::time(NULL));
	
	// Leer de teclado la cantidad de numeros:
	int n;
	
	std::cout << "Cuantos numeros queremos: ";
	std::cin >> n;
	
	// Reservar memoria:
	ptr = new int[n];
	std::cout << "Reserva en: " << ptr << std::endl;
	  
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

int *reservarMemoria(int n){
	int *ptr = new int[n];
	std::cout << "Reserva en: " << ptr << std::endl;
	
	for (int i = 0 ; i < n ; i++){
		ptr[i] =  std::rand() % 100;
	}
	
	return ptr;
}

void imprimirArray(int *array, int n){

	for (int i = 0 ; i < n ; i++){
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void liberar(int *ptr){
	// Esta funcion libera BIEN pero no pone el puntero de main a nullptr;
	delete [] ptr;
	ptr = nullptr; // Esto NO hace nada, actua sobre una copia !!!!!! mejor utiliza la funcion liberar2
}

void liberar2(int **ptr){
	delete [] *ptr;
	*ptr = nullptr;
}

void reservarMemoria2(int n, int **ptr){
	*ptr = new int[n];
	std::cout << "Reserva en: " << *ptr << std::endl;
	
	for (int i = 0 ; i < n ; i++){
		(*ptr)[i] =  std::rand() % 100;
	}	
}

void reservarMemoria3(int n, int **ptr){
	int *aux = new int[n];
	std::cout << "Reserva en: " << ptr << std::endl;
	
	for (int i = 0 ; i < n ; i++){
		aux[i] =  std::rand() % 100;
	}	
	
	*ptr = aux;
}

int main(){

	int *ptr = nullptr;
	
	// Inicializar la semilla de numeros aleatorios:
	std::srand(std::time(NULL));
	
	// Leer de teclado la cantidad de numeros:
	int n;
	
	std::cout << "Cuantos numeros queremos: ";
	std::cin >> n;
	
	//ptr = reservarMemoria(n);
	//reservarMemoria2(n, &ptr);
	reservarMemoria3(n, &ptr);
	imprimirArray(ptr, n);
	//liberar(ptr);
	liberar2(&ptr);
	std::cout << "despues de liberar en main: " << ptr << std::endl;
	
	return 0;	
}


