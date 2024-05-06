// Paso de parámetros a funciones: por copia, por puntero y por referencia

#include <iostream>

void porCopia(int n){
	// Recibimos una copia de la variable de main
	n++;
	std::cout << "n en porCopia : " << n << std::endl;
}

void porPtr(int *n){
	// Recibimos la dir. de la variable de main.
	(*n)++;
	std::cout << "n en porPtr : " << *n << std::endl;
}

void pruebasCopiaYPtr(){
	int n = 100;
	
	porCopia(n);
	std::cout << "n : " << n << std::endl;
	
	n = 100;
	porPtr(&n);
	std::cout << "n : " << n << std::endl;
}

int main(){
	pruebasCopiaYPtr();
	return 0;
}
