
// FICHEROS DE CABECERA
#include <iostream>

// FICHEROS DE CABECERAS PROPIOS
//#include "funciones.h"

// definicion de macros
#define MENSAJE "hola que tal"

// VARIABLES GLOBALES

// DEFINICION DE PROTOTIPOS
void imprimirMensaje();


int main(){
	imprimirMensaje();
	return 0;
}

// IMPLEMENTACION DE OTRAS FUNCIONES
void imprimirMensaje(){
	std::cout << MENSAJE <<std::endl;
}
