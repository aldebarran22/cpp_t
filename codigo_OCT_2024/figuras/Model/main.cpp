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


int main(int argc, char** argv) {
	Figura *f;
	Figura *array[4];
	
	f = new Cuadrado(10.0);
	Figura2D *f2d = static_cast<Figura2D *>(f);
	std::cout << "Area: " <<  f2d->area() << std::endl;
	
	array[0] = new Cuadrado(10.0);
	array[1] = new Triangulo(4.6, 7.0);
	array[2] = new Cubo(5.0);
	array[3] = new Cilindro(5.6, 2.0);
	
	for (int i = 0 ; i < 4 ; i++){
		array[i]->visualizar();
		
		delete array[i];
		array[i] = nullptr;
	}
	
	return 0;
}
