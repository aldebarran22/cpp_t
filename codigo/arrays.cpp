/*
Repaso de arrays
- Definicion, acceso, modificacion
- Acceso a traves del puntero
- Pasar por parametro un array 
- Posibles errores al devolver un array (direcciones en funciones)
- Arrays dinamicos.
*/

#include <iostream>

#define N 10

void definicionArrays(){
	int numeros[N]; // Define 10 enteros sin inicializar
	
	int numeros2[] = {1,2,3,4,5,6,7,8,9,10}; // definir e inicializar un array, el compilador cuenta los valores y reserva
	
	int numeros3[N] = {0}; // El resto de valores se inicializan a cero
	
	
	for (int i = 0 ; i < N ; i++){
		std::cout << numeros3[i] << " ";
	}
	std::cout << std::endl;
	
	// Calcular el numero de elementos del array:
	int tam = sizeof(numeros) / sizeof(int);
	std::cout << "El tam es: " << tam << std::endl;
	
	// Modificar valores:
	numeros3[0] = 1000;
	std::cout << numeros3[0] << std::endl;	
}


void operadoresPunteros(){
	// & extraer la direccion de una variable
	// * para acceder al contenido de la variable (a traves del puntero)
	int numero = 100;
	
	int *ptr = nullptr;  // = nullptr;   = 0;  = NULL;
	
	// Extraer la dir de la variable:
	ptr = &numero;
	std::cout << "El ptr ocupa: " << sizeof(int *) << " bytes" << std::endl;
	
	// Imprimir la var. a través del puntero:
	std::cout << "numero: " << *ptr << std::endl;
	
	// Modificar var a traves del puntero:
	*ptr = 500;
	
	// Imprimir la var:
		std::cout << "numero: " << numero << std::endl;
}


int main(){
	//definicionArrays();
	operadoresPunteros();
	return 0;
}
