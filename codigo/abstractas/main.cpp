#include "Figura.h"
#include "Figura2D.h"
#include "Figura3D.h"

#include "Triangulo.h"
#include "Cubo.h"
#include "Cuadrado.h"
#include "Cilindro.h"

#include <iostream>
#include <typeinfo>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Figura f; No se puede instanciar, es una clase abstracta!!
	Figura *figuras[4];	
	
	figuras[0] = new Cubo(5.0);
	figuras[1] = new Cuadrado(4.5);
	figuras[2] = new Triangulo(5.0, 5.0);
	figuras[3] = new Cilindro(4.0, 6.5);
	
	for (Figura *f : figuras){
		f->visualizar();
		const std::type_info &info = typeid(f);  // El nombre de la superclase: Figura
		//const std::type_info &info = typeid(*f);	// El nombre de la clase instanciada: 
		std::cout << "nombre: " << info.name() << std::endl;
		std::cout << std::endl;
	}
	
	for (Figura *f : figuras){
		delete f;
	}
	
	return 0;
}
