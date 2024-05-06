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

void porReferencia(int &n){
	// n se recibe por referencia
	n*=10;	
	std::cout << "n en porReferencia : " << n << std::endl;
}

void pruebasCopiaYPtr(){
	int n = 100;
	
	porCopia(n);
	std::cout << "porcopia n : " << n << std::endl;
	
	n = 100;
	porPtr(&n);
	std::cout << "porptr n : " << n << std::endl;
	
	n=100;
	porReferencia(n);
	std::cout << "porreferencia n : " << n << std::endl;
}

void puntero_vs_referencia(){
	int numero = 100;
	
	// No es obligatorio inicializarlo.
	int *p;
	
	// La ref. es obligatorio inicializarla
	int &ref;

}


int main(){
	//pruebasCopiaYPtr();
	puntero_vs_referencia();
	return 0;
}
