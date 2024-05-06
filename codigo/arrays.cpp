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
	
}



int main(){
	definicionArrays();
	return 0;
}
