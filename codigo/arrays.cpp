/*
Repaso de arrays
- Definicion, acceso, modificacion
- Acceso a traves del puntero
- Pasar por parametro un array 
- Posibles errores al devolver un array (direcciones en funciones)
- Arrays dinamicos.
*/

#include <iostream>

void definicionArrays(){
	int numeros[10]; 
	
	
	for (int i = 0 ; i < 10 ; i++){
		std::cout << numeros[i] << " ";
	}
	std::cout << std::endl;
	
}



int main(){
	definicionArrays();
	return 0;
}
