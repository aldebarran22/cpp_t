#include <iostream>
#include <vector>
#include <typeinfo>

#include "Figura.h"
#include "Figura2D.h"
#include "Figura3D.h"

#include "Triangulo.h"
#include "Cubo.h"
#include "Cuadrado.h"
#include "Cilindro.h"


typedef enum fig {TRIANGULO, CUADRADO, CUBO, CILINDRO} TFigura;


void pintarFigura(Figura *f){
	f->visualizar();
}

Figura *crearFigura(TFigura tipo){
	
	switch(tipo){
		case CUADRADO:
			return new Cuadrado(10.0);
			
		case TRIANGULO:
			return new Triangulo(4.6, 7.0);
			
		case CUBO:
			return new Cubo(5.0);
			
		case CILINDRO:
			return new Cilindro(5.6, 2.0);
	}
	
	return nullptr;
}


int main(int argc, char** argv) {
	Figura *f;
	Figura *array[4];
	
	f = new Cuadrado(10.0);
	Figura2D *f2d = static_cast<Figura2D *>(f);
	std::cout << "Area: " <<  f2d->area() << std::endl;
	
	array[0] = crearFigura(CUADRADO); 
	array[1] = crearFigura(TRIANGULO);
	array[2] = crearFigura(CUBO);
	array[3] = crearFigura(CILINDRO);
	
	for (int i = 0 ; i < 4 ; i++){
		pintarFigura(array[i]);
		
		delete array[i];
		array[i] = nullptr;
	}
	
	return 0;
}
